
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pasemi_dmachan {scalar_t__ chan_type; int chno; } ;


 int FUNC_0 (int ) ;
 int const VAR_0 ;
 int FUNC_1 (int ) ;
 int const VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int const) ;

void FUNC_3(const struct pasemi_dmachan *VAR_3, const u32 VAR_4)
{
 if (VAR_3->chan_type == VAR_2)
  FUNC_2(FUNC_0(VAR_3->chno),
         VAR_4 | VAR_0);
 else
  FUNC_2(FUNC_1(VAR_3->chno),
         VAR_4 | VAR_1);
}
