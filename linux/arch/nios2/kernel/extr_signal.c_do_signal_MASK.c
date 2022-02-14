
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pt_regs {scalar_t__ orig_r2; unsigned int ea; unsigned int r2; int r7; int orig_r7; } ;
struct TYPE_6__ {int sa_flags; } ;
struct TYPE_7__ {TYPE_2__ sa; } ;
struct ksignal {TYPE_3__ ka; } ;
struct TYPE_5__ {struct pt_regs* kregs; } ;
struct TYPE_8__ {TYPE_1__ thread; } ;


 scalar_t__ VAR_0 ;




 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 scalar_t__ FUNC_0 (struct ksignal*) ;
 int FUNC_1 (struct ksignal*,struct pt_regs*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct pt_regs *VAR_4)
{
 unsigned int VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;
 int VAR_8 = 0;
 struct ksignal VAR_9;

 VAR_3->thread.kregs = VAR_4;




 if (VAR_4->orig_r2 >= 0) {
  VAR_6 = VAR_4->ea;
  VAR_7 = VAR_6 - 4;
  VAR_5 = VAR_4->r2;





  switch (VAR_5) {
  case 128:
   VAR_8 = -2;
  case 131:
  case 129:
  case 130:
   VAR_8++;
   VAR_4->r2 = VAR_4->orig_r2;
   VAR_4->r7 = VAR_4->orig_r7;
   VAR_4->ea = VAR_7;
   break;
  }
 }

 if (FUNC_0(&VAR_9)) {

  if (FUNC_3(VAR_8 && VAR_4->ea == VAR_7)) {
   if (VAR_5 == 131 ||
       VAR_5 == 128 ||
        (VAR_5 == 129
    && !(VAR_9.ka.sa.sa_flags & VAR_1))) {
    VAR_4->r2 = VAR_0;
    VAR_4->r7 = 1;
    VAR_4->ea = VAR_6;
   }
  }
  FUNC_1(&VAR_9, VAR_4);
  return 0;
 }




 if (FUNC_3(VAR_8) && VAR_4->ea == VAR_7) {
  VAR_4->ea = VAR_6;
  VAR_4->r2 = VAR_2;
 }




 FUNC_2();

 return VAR_8;
}
