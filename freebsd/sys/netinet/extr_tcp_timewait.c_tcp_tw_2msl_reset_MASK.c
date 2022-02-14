
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcptw {scalar_t__ tw_time; int tw_inpcb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,struct tcptw*,int ) ;
 int FUNC_3 (int *,struct tcptw*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6(struct tcptw *VAR_5, int VAR_6)
{

 FUNC_1();
 FUNC_0(VAR_5->tw_inpcb);

 FUNC_4(VAR_0);
 if (VAR_6)
  FUNC_3(&VAR_1, VAR_5, VAR_4);
 VAR_5->tw_time = VAR_3 + 2 * VAR_2;
 FUNC_2(&VAR_1, VAR_5, VAR_4);
 FUNC_5(VAR_0);
}
