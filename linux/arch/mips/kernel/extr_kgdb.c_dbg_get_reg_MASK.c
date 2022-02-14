
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pt_regs {int cp0_status; } ;
struct TYPE_9__ {int offset; char* name; int size; } ;
struct TYPE_6__ {int * fpr; int fcr31; } ;
struct TYPE_7__ {TYPE_1__ fpu; } ;
struct TYPE_8__ {TYPE_2__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_0 (void*,void*,int ) ;
 int FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;

char *FUNC_3(int VAR_4, void *VAR_5, struct pt_regs *VAR_6)
{
 int VAR_7;

 if (VAR_4 >= VAR_0 || VAR_4 < 0)
  return ((void*)0);

 if (VAR_3[VAR_4].offset != -1 && VAR_4 < 38) {

  FUNC_0(VAR_5, (void *)VAR_6 + VAR_3[VAR_4].offset,
         VAR_3[VAR_4].size);
 } else if (VAR_2 && VAR_3[VAR_4].offset != -1 && VAR_4 < 72) {

  if (!(VAR_6->cp0_status & VAR_1))
   goto out;
  FUNC_2(VAR_2);
  if (VAR_4 == 70) {

   FUNC_0(VAR_5, (void *)&VAR_2->thread.fpu.fcr31,
          VAR_3[VAR_4].size);
   goto out;
  } else if (VAR_4 == 71) {

   FUNC_1(VAR_5, 0, VAR_3[VAR_4].size);
   goto out;
  }
  VAR_7 = VAR_3[VAR_4].offset;
  FUNC_0(VAR_5, (void *)&VAR_2->thread.fpu.fpr[VAR_7],
         VAR_3[VAR_4].size);
 }

out:
 return VAR_3[VAR_4].name;

}
