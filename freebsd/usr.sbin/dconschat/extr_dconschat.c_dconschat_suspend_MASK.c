
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcons_state {int traw; int tsave; } ;
struct dcons_port {scalar_t__ sport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct dcons_state *VAR_4, struct dcons_port *VAR_5)
{
 if (VAR_5->sport != 0)
  return;

 if (VAR_3)
  FUNC_3(VAR_1, VAR_2, &VAR_4->tsave);

 FUNC_2("\n[dconschat suspend]\n");
 FUNC_1(FUNC_0(), VAR_0);

 if (VAR_3)
  FUNC_3(VAR_1, VAR_2, &VAR_4->traw);
}
