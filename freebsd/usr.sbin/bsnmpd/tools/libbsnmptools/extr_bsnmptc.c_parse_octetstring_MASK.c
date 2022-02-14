
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; int * octets; } ;
struct TYPE_4__ {TYPE_1__ octetstring; } ;
struct snmp_value {int syntax; TYPE_2__ v; } ;
typedef int int32_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (size_t) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (char*,size_t) ;

__attribute__((used)) static int32_t
FUNC_6(struct snmp_value *VAR_4, char *VAR_5)
{
 size_t VAR_6;

 if ((VAR_6 = FUNC_3(VAR_5)) >= VAR_1) {
  FUNC_5("Octetstring too long - %d is max allowed",
      VAR_1 - 1);
  return (-1);
 }

 if ((VAR_4->v.octetstring.octets = FUNC_0(VAR_6)) == ((void*)0)) {
  VAR_4->v.octetstring.len = 0;
  FUNC_4(VAR_0, "malloc failed: %s", FUNC_2(VAR_3));
  return (-1);
 }

 VAR_4->v.octetstring.len = VAR_6;
 FUNC_1(VAR_4->v.octetstring.octets, VAR_5, VAR_6);
 VAR_4->syntax = VAR_2;

 return (0);
}
