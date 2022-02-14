
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint ;
typedef int u_char ;
struct TYPE_4__ {size_t len; int * octets; } ;
struct TYPE_5__ {TYPE_1__ octetstring; } ;
struct TYPE_6__ {size_t* subs; int len; } ;
struct snmp_value {int syntax; TYPE_2__ v; TYPE_3__ var; } ;
struct bridge_if {size_t* bif_name; } ;


 int VAR_0 ;
 int FUNC_0 (size_t*,int *,size_t) ;
 scalar_t__ FUNC_1 (size_t) ;
 TYPE_3__ VAR_1 ;
 size_t FUNC_2 (size_t*) ;

__attribute__((used)) static struct snmp_value*
FUNC_3(struct bridge_if *VAR_2, struct snmp_value* VAR_3)
{
 uint VAR_4;

 VAR_3->var = VAR_1;
 VAR_3->var.subs[VAR_3->var.len++] = FUNC_2(VAR_2->bif_name);

 if ((VAR_3->v.octetstring.octets = (u_char *)
     FUNC_1(FUNC_2(VAR_2->bif_name))) == ((void*)0))
  return (((void*)0));

 for (VAR_4 = 0; VAR_4 < FUNC_2(VAR_2->bif_name); VAR_4++)
  VAR_3->var.subs[VAR_3->var.len++] = VAR_2->bif_name[VAR_4];

 VAR_3->v.octetstring.len = FUNC_2(VAR_2->bif_name);
 FUNC_0(VAR_2->bif_name, VAR_3->v.octetstring.octets,
     FUNC_2(VAR_2->bif_name));
 VAR_3->syntax = VAR_0;

 return (VAR_3);
}
