
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ev7_lf_subpackets {TYPE_2__* ev7; TYPE_1__* logout; } ;
struct TYPE_4__ {int c_stat; int c_sts; int c_addr; } ;
struct TYPE_3__ {int rbox_int; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ev7_lf_subpackets*,int) ;

__attribute__((used)) static int
FUNC_1(struct ev7_lf_subpackets *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_1;





 if (VAR_2->logout &&
     (VAR_2->logout->rbox_int & 0x20000400ul))
  VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_2->ev7 &&
     (VAR_2->ev7->c_stat == 0x14) &&
     !(VAR_2->ev7->c_sts & 0x8) &&
     ((VAR_2->ev7->c_addr & 0x400ff000000ul)
      == 0x400fe000000ul))
  VAR_4 = VAR_0;

 return VAR_4;
}
