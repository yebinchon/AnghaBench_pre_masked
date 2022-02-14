
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa930_rotary_platform_data {int up_key; int down_key; int rel_code; } ;
struct pxa930_rotary {int last_ercr; int input_dev; scalar_t__ mmio_base; struct pxa930_rotary_platform_data* pdata; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct pxa930_rotary*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct pxa930_rotary *VAR_4 = VAR_3;
 struct pxa930_rotary_platform_data *VAR_5 = VAR_4->pdata;
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_0(VAR_4->mmio_base + VAR_0) & 0xf;
 FUNC_1(VAR_4);

 VAR_7 = VAR_6 - VAR_4->last_ercr;
 if (VAR_7 == 0)
  return VAR_1;

 VAR_4->last_ercr = VAR_6;

 if (VAR_5->up_key && VAR_5->down_key) {
  VAR_8 = (VAR_7 > 0) ? VAR_5->up_key : VAR_5->down_key;
  FUNC_2(VAR_4->input_dev, VAR_8, 1);
  FUNC_4(VAR_4->input_dev);
  FUNC_2(VAR_4->input_dev, VAR_8, 0);
 } else
  FUNC_3(VAR_4->input_dev, VAR_5->rel_code, VAR_7);

 FUNC_4(VAR_4->input_dev);

 return VAR_1;
}
