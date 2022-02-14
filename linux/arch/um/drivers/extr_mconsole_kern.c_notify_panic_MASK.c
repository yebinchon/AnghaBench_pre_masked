
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,scalar_t__) ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_2, unsigned long VAR_3,
   void *VAR_4)
{
 char *VAR_5 = VAR_4;

 if (VAR_1 == ((void*)0))
  return 0;

 FUNC_0(VAR_1, VAR_0, VAR_5,
   FUNC_1(VAR_5) + 1);
 return 0;
}
