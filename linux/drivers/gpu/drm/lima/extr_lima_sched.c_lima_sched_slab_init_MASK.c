
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_fence {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int,int ,int ,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

int FUNC_1(void)
{
 if (!VAR_2) {
  VAR_2 = FUNC_0(
   "lima_fence", sizeof(struct lima_fence), 0,
   VAR_1, ((void*)0));
  if (!VAR_2)
   return -VAR_0;
 }

 VAR_3++;
 return 0;
}
