
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct trapframe {int dummy; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int ,struct trapframe*) ;
 int VAR_1 ;
 int FUNC_7 (int *) ;
 int * VAR_2 ;
 int VAR_3 ;

void
FUNC_8(u_int VAR_4, struct trapframe *VAR_5)
{
 int VAR_6;
 bool VAR_7;

 VAR_6 = FUNC_1(VAR_0);
 if (FUNC_2(&VAR_1, 0, 1)) {
  FUNC_6(VAR_6, VAR_4, VAR_5);
  VAR_7 = 0;
 } else {
  FUNC_7(&VAR_2[VAR_6]);
  FUNC_0(VAR_6, &VAR_3);
  while (!FUNC_2(&VAR_1, 0, 1))
   FUNC_5();
  VAR_7 = 1;
 }
 FUNC_3(&VAR_1, 0);
 if (VAR_7)
  FUNC_4(VAR_6);
}
