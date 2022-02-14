
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int type; } ;
struct pf_rule_addr {TYPE_4__ addr; } ;
struct TYPE_8__ {int addr32; } ;
struct TYPE_7__ {int addr32; } ;
struct TYPE_9__ {TYPE_2__ mask; TYPE_1__ addr; } ;
struct TYPE_11__ {TYPE_3__ a; int tblname; int ifname; } ;
struct TYPE_12__ {TYPE_5__ v; int iflags; int type; } ;
typedef int MD5_CTX ;





 int FUNC_0 (struct pf_rule_addr*,int ) ;
 TYPE_6__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(MD5_CTX *VAR_4, struct pf_rule_addr *VAR_5)
{
 FUNC_0(VAR_5, VAR_0.type);
 switch (VAR_5->addr.type) {
  case 129:
   FUNC_0(VAR_5, VAR_0.v.ifname);
   FUNC_0(VAR_5, VAR_0.iflags);
   break;
  case 128:
   FUNC_0(VAR_5, VAR_0.v.tblname);
   break;
  case 130:

   FUNC_0(VAR_5, VAR_0.v.a.addr.addr32);
   FUNC_0(VAR_5, VAR_0.v.a.mask.addr32);
   break;
 }

 FUNC_0(VAR_5, VAR_2[0]);
 FUNC_0(VAR_5, VAR_2[1]);
 FUNC_0(VAR_5, VAR_1);
 FUNC_0(VAR_5, VAR_3);
}
