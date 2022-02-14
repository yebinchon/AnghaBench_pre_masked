
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
typedef TYPE_1__ arch_spinlock_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_6(arch_spinlock_t *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_6 = VAR_1;


 VAR_9 = FUNC_3(FUNC_0(VAR_5->lock), ((void*)0));
 if (VAR_9 && FUNC_4(VAR_9 - 1))
  FUNC_5(VAR_9 - 1);

 VAR_10 = VAR_4;
 while (1) {
  VAR_7 = FUNC_2(&VAR_5->lock);
  VAR_9 = VAR_7 & VAR_2;

  if (!VAR_9) {
   VAR_8 = (VAR_7 & VAR_3) | VAR_6;
   if (FUNC_1(&VAR_5->lock, VAR_7, VAR_8)) {

    return;
   }
   continue;
  }
  if (VAR_10-- >= 0)
   continue;
  VAR_10 = VAR_4;
  if (!VAR_0 || FUNC_4(VAR_9 - 1))
   FUNC_5(VAR_9 - 1);
 }
}
