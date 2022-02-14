
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyapa {int electrodes_rx; int electrodes_x; int electrodes_y; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct cyapa *VAR_0,
  int *VAR_1, int *VAR_2)
{
 if (VAR_0->electrodes_rx != 0) {
  *VAR_1 = VAR_0->electrodes_rx;
  *VAR_2 = (VAR_0->electrodes_x == *VAR_1) ?
    VAR_0->electrodes_y : VAR_0->electrodes_x;
 } else {
  *VAR_2 = FUNC_1(VAR_0->electrodes_x, VAR_0->electrodes_y);
  *VAR_1 = FUNC_0(VAR_0->electrodes_x, VAR_0->electrodes_y);
 }
}
