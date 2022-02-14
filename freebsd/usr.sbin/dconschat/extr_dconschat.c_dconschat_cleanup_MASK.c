
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcons_state {int tsave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 struct dcons_state VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int*) ;

__attribute__((used)) static void
FUNC_4(int VAR_4)
{
 struct dcons_state *VAR_5;
 int VAR_6;

 VAR_5 = &VAR_2;
 if (VAR_3 != 0)
  FUNC_2(VAR_0, VAR_1, &VAR_5->tsave);

 if (VAR_4 > 0)
  FUNC_1("\n[dconschat exiting with signal %d ...]\n", VAR_4);
 else
  FUNC_1("\n[dconschat exiting...]\n");
 FUNC_3(&VAR_6);
 FUNC_0(0);
}
