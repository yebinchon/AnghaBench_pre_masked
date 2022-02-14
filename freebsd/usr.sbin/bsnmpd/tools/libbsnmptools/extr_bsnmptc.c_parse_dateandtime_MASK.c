
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int len; int * octets; } ;
struct TYPE_4__ {TYPE_1__ octetstring; } ;
struct snmp_value {int syntax; TYPE_2__ v; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int*,int) ;
 int FUNC_2 (char*,char**,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int32_t
FUNC_5(struct snmp_value *VAR_2, char *VAR_3)
{
 char *VAR_4;
 uint32_t VAR_5;
 uint8_t VAR_6[VAR_0];


 VAR_5 = FUNC_2(VAR_3, &VAR_4, 10);
 if (VAR_5 > 0xffff || *VAR_4 != '-')
  goto error;
 VAR_6[0] = ((VAR_5 & 0xff00) >> 8);
 VAR_6[1] = (VAR_5 & 0xff);
 VAR_3 = VAR_4 + 1;


 VAR_5 = FUNC_2(VAR_3, &VAR_4, 10);
 if (VAR_5 == 0 || VAR_5 > 12 || *VAR_4 != '-')
  goto error;
 VAR_6[2] = VAR_5;
 VAR_3 = VAR_4 + 1;


 VAR_5 = FUNC_2(VAR_3, &VAR_4, 10);
 if (VAR_5 == 0 || VAR_5 > 31 || *VAR_4 != ',')
  goto error;
 VAR_6[3] = VAR_5;
 VAR_3 = VAR_4 + 1;


 VAR_5 = FUNC_2(VAR_3, &VAR_4, 10);
 if (VAR_5 > 23 || *VAR_4 != ':')
  goto error;
 VAR_6[4] = VAR_5;
 VAR_3 = VAR_4 + 1;


 VAR_5 = FUNC_2(VAR_3, &VAR_4, 10);
 if (VAR_5 > 59 || *VAR_4 != ':')
  goto error;
 VAR_6[5] = VAR_5;
 VAR_3 = VAR_4 + 1;


 VAR_5 = FUNC_2(VAR_3, &VAR_4, 10);
 if (VAR_5 > 60 || *VAR_4 != '.')
  goto error;
 VAR_6[6] = VAR_5;
 VAR_3 = VAR_4 + 1;


 VAR_5 = FUNC_2(VAR_3, &VAR_4, 10);
 if (VAR_5 > 9 || *VAR_4 != ',')
  goto error;
 VAR_6[7] = VAR_5;
 VAR_3 = VAR_4 + 1;


 if (*VAR_3 != '-' && *VAR_3 != '+')
  goto error;
 VAR_6[8] = (uint8_t) *VAR_3;
 VAR_3 = VAR_4 + 1;


 VAR_5 = FUNC_2(VAR_3, &VAR_4, 10);
 if (VAR_5 > 13 || *VAR_4 != ':')
  goto error;
 VAR_6[9] = VAR_5;
 VAR_3 = VAR_4 + 1;


 VAR_5 = FUNC_2(VAR_3, &VAR_4, 10);
 if (VAR_5 > 59 || *VAR_4 != '\0')
  goto error;
 VAR_6[10] = VAR_5;

 if ((VAR_2->v.octetstring.octets = FUNC_0(VAR_0)) == ((void*)0)) {
  FUNC_3("malloc() failed");
  return (-1);
 }

 VAR_2->v.octetstring.len = VAR_0;
 FUNC_1(VAR_2->v.octetstring.octets, VAR_6, VAR_0);
 VAR_2->syntax = VAR_1;
 return (1);

  error:
 FUNC_4("Date value %s not supported", VAR_3);
 return (-1);
}
