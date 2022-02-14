
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_fence {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct nouveau_fence*,int) ;

int
FUNC_2(struct nouveau_fence *VAR_2, bool VAR_3, bool VAR_4)
{
 long VAR_5;

 if (!VAR_3)
  return FUNC_1(VAR_2, VAR_4);

 VAR_5 = FUNC_0(&VAR_2->base, VAR_4, 15 * VAR_1);
 if (VAR_5 < 0)
  return VAR_5;
 else if (!VAR_5)
  return -VAR_0;
 else
  return 0;
}
