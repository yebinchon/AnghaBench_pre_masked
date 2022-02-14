
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kona_clk {int type; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct kona_clk*) ;


__attribute__((used)) static bool FUNC_2(struct kona_clk *VAR_0)
{
 switch (VAR_0->type) {
 case 128:
  return FUNC_1(VAR_0);
 default:
  FUNC_0();
 }
 return 0;
}
