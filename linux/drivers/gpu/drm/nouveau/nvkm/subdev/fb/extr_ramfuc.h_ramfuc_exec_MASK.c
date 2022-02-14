
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ramfuc {int * fb; int memx; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static inline int
FUNC_1(struct ramfuc *VAR_0, bool VAR_1)
{
 int VAR_2 = 0;
 if (VAR_0->fb) {
  VAR_2 = FUNC_0(&VAR_0->memx, VAR_1);
  VAR_0->fb = ((void*)0);
 }
 return VAR_2;
}
