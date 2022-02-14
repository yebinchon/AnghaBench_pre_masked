
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_ssi_port {int brkqueue; int * rxqueue; int * txqueue; } ;


 int FUNC_0 (int *) ;
 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct omap_ssi_port *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(&VAR_1->txqueue[VAR_2]);
  FUNC_0(&VAR_1->rxqueue[VAR_2]);
 }
 FUNC_0(&VAR_1->brkqueue);
}
