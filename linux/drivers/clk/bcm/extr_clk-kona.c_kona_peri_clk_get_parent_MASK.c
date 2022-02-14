
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct peri_clk_data {int sel; } ;
struct TYPE_2__ {struct peri_clk_data* peri; } ;
struct kona_clk {int ccu; TYPE_1__ u; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 struct kona_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_1)
{
 struct kona_clk *VAR_2 = FUNC_1(VAR_1);
 struct peri_clk_data *VAR_3 = VAR_2->u.peri;
 u8 VAR_4;

 VAR_4 = FUNC_0(VAR_2->ccu, &VAR_3->sel);


 return VAR_4 == VAR_0 ? 0 : VAR_4;
}
