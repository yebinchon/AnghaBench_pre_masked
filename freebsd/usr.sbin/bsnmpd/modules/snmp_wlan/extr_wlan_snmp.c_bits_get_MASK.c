
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef scalar_t__ u_char ;
struct TYPE_3__ {int * octets; scalar_t__ len; } ;
struct TYPE_4__ {TYPE_1__ octetstring; } ;
struct snmp_value {TYPE_2__ v; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (size_t) ;
 int FUNC_1 (int *,scalar_t__ const*,size_t) ;

__attribute__((used)) static int
FUNC_2(struct snmp_value *VAR_2, const u_char *VAR_3, ssize_t VAR_4)
{
 int VAR_5;

 if (VAR_3 == ((void*)0)) {
  VAR_2->v.octetstring.len = 0;
  VAR_2->v.octetstring.octets = ((void*)0);
  return (VAR_0);
 }


 for (VAR_5 = VAR_4; VAR_5 > 0; VAR_5--)
  if (VAR_3[VAR_5 - 1] != 0)
   break;
 if (VAR_5 == 0)
  VAR_5 = 1;

 VAR_2->v.octetstring.len = (u_long)VAR_5;
 if ((VAR_2->v.octetstring.octets = FUNC_0((size_t)VAR_5)) == ((void*)0))
  return (VAR_1);
 FUNC_1(VAR_2->v.octetstring.octets, VAR_3, (size_t)VAR_5);
 return (VAR_0);
}
