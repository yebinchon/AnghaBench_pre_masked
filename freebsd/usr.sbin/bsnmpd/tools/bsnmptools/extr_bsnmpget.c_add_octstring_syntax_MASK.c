
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; int * octets; } ;
struct TYPE_4__ {TYPE_1__ octetstring; } ;
struct snmp_value {TYPE_2__ v; int syntax; } ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*,scalar_t__) ;

__attribute__((used)) static int32_t
FUNC_5(struct snmp_value *VAR_4, struct snmp_value *VAR_5)
{
 if (VAR_5->v.octetstring.len > VAR_0) {
  FUNC_4("OctetString len too big - %u", VAR_5->v.octetstring.len);
  return (-1);
 }

 if ((VAR_4->v.octetstring.octets = FUNC_0(VAR_5->v.octetstring.len)) ==
     ((void*)0)) {
  FUNC_3(VAR_1, "malloc() failed - %s", FUNC_2(VAR_3));
  return (-1);
 }

 FUNC_1(VAR_4->v.octetstring.octets, VAR_5->v.octetstring.octets,
     VAR_5->v.octetstring.len);
 VAR_4->syntax = VAR_2;
 VAR_4->v.octetstring.len = VAR_5->v.octetstring.len;

 return(0);
}
