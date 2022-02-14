
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bidirectional_transfer_state {int ptg; int gtp; } ;
typedef int pthread_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *,int ,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct bidirectional_transfer_state *VAR_1)
{
 pthread_t VAR_2;
 pthread_t VAR_3;
 int VAR_4;
 int VAR_5 = 0;
 VAR_4 = FUNC_2(&VAR_2, ((void*)0), VAR_0,
  &VAR_1->gtp);
 if (VAR_4)
  FUNC_1(FUNC_0("can't start thread for copying data: %s"), FUNC_3(VAR_4));
 VAR_4 = FUNC_2(&VAR_3, ((void*)0), VAR_0,
  &VAR_1->ptg);
 if (VAR_4)
  FUNC_1(FUNC_0("can't start thread for copying data: %s"), FUNC_3(VAR_4));

 VAR_5 |= FUNC_4(VAR_2, "Git to program copy");
 VAR_5 |= FUNC_4(VAR_3, "Program to git copy");
 return VAR_5;
}
