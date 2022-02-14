
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pt_regs {int cp0_status; } ;
struct TYPE_9__ {int offset; int size; } ;
struct TYPE_6__ {int * fpr; int fcr31; } ;
struct TYPE_7__ {TYPE_1__ fpu; } ;
struct TYPE_8__ {TYPE_2__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_4__* VAR_4 ;
 int FUNC_0 (void*,void*,int ) ;
 int FUNC_1 (TYPE_3__*) ;

int FUNC_2(int VAR_5, void *VAR_6, struct pt_regs *VAR_7)
{
 int VAR_8;

 if (VAR_5 < 0 || VAR_5 >= VAR_0)
  return -VAR_1;

 if (VAR_4[VAR_5].offset != -1 && VAR_5 < 38) {
  FUNC_0((void *)VAR_7 + VAR_4[VAR_5].offset, VAR_6,
         VAR_4[VAR_5].size);
 } else if (VAR_3 && VAR_4[VAR_5].offset != -1 && VAR_5 < 72) {

  if (!(VAR_7->cp0_status & VAR_2))
   return 0;
  if (VAR_5 == 70) {

   FUNC_0((void *)&VAR_3->thread.fpu.fcr31, VAR_6,
          VAR_4[VAR_5].size);
   goto out_save;
  } else if (VAR_5 == 71) {

   goto out_save;
  }
  VAR_8 = VAR_4[VAR_5].offset;
  FUNC_0((void *)&VAR_3->thread.fpu.fpr[VAR_8], VAR_6,
         VAR_4[VAR_5].size);
out_save:
  FUNC_1(VAR_3);
 }

 return 0;
}
