
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct edp_aux {scalar_t__ base; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 () ;

void FUNC_5(struct edp_aux *VAR_3, int VAR_4)
{
 u32 VAR_5;

 FUNC_0("enable=%d", VAR_4);
 VAR_5 = FUNC_1(VAR_3->base + VAR_2);

 if (VAR_4) {
  VAR_5 |= VAR_1;
  FUNC_2(VAR_3->base + VAR_2, VAR_5);

  FUNC_4();
  FUNC_3(500, 1000);

  VAR_5 &= ~VAR_1;
  VAR_5 |= VAR_0;
  FUNC_2(VAR_3->base + VAR_2, VAR_5);
 } else {
  VAR_5 &= ~VAR_0;
  FUNC_2(VAR_3->base + VAR_2, VAR_5);
 }
}
