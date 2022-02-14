
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct mpic {int * err_int_vecs; int flags; int name; TYPE_1__ hc_err; int err_regs; scalar_t__ paddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct mpic *VAR_5, int VAR_6)
{
 int VAR_7;

 VAR_5->err_regs = FUNC_0(VAR_5->paddr + VAR_1, 0x1000);
 if (!VAR_5->err_regs) {
  FUNC_1("could not map mpic error registers\n");
  return -VAR_0;
 }
 VAR_5->hc_err = VAR_4;
 VAR_5->hc_err.name = VAR_5->name;
 VAR_5->flags |= VAR_2;

 for (VAR_7 = VAR_3 - 1; VAR_7 >= 0; VAR_7--)
  VAR_5->err_int_vecs[VAR_7] = VAR_6--;

 return 0;
}
