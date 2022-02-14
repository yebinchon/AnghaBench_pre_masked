
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ccu_data {int dummy; } ;
struct bcm_clk_trig {int dummy; } ;
struct bcm_clk_gate {int dummy; } ;
struct TYPE_3__ {int offset; int width; int shift; int scaled_div; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct bcm_clk_div {TYPE_2__ u; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ccu_data*,int ) ;
 int FUNC_2 (struct ccu_data*,int ,int ) ;
 int FUNC_3 (struct ccu_data*,struct bcm_clk_gate*,int) ;
 int FUNC_4 (struct ccu_data*,struct bcm_clk_trig*) ;
 int FUNC_5 (struct ccu_data*,struct bcm_clk_gate*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (struct bcm_clk_div*,int ) ;
 int FUNC_9 (struct bcm_clk_div*) ;
 int FUNC_10 (struct bcm_clk_div*,int ) ;

__attribute__((used)) static int FUNC_11(struct ccu_data *VAR_3, struct bcm_clk_gate *VAR_4,
   struct bcm_clk_div *VAR_5, struct bcm_clk_trig *VAR_6)
{
 bool VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 int VAR_10 = 0;

 FUNC_0(FUNC_9(VAR_5));






 if (VAR_5->u.s.scaled_div == VAR_0) {
  VAR_9 = FUNC_1(VAR_3, VAR_5->u.s.offset);
  VAR_8 = FUNC_6(VAR_9, VAR_5->u.s.shift,
      VAR_5->u.s.width);
  VAR_5->u.s.scaled_div = FUNC_10(VAR_5, VAR_8);

  return 0;
 }


 VAR_8 = FUNC_8(VAR_5, VAR_5->u.s.scaled_div);


 VAR_7 = FUNC_5(VAR_3, VAR_4);
 if (!VAR_7 && !FUNC_3(VAR_3, VAR_4, 1)) {
  VAR_10 = -VAR_2;
  goto out;
 }


 VAR_9 = FUNC_1(VAR_3, VAR_5->u.s.offset);
 VAR_9 = FUNC_7(VAR_9, VAR_5->u.s.shift, VAR_5->u.s.width,
     VAR_8);
 FUNC_2(VAR_3, VAR_5->u.s.offset, VAR_9);


 if (!FUNC_4(VAR_3, VAR_6))
  VAR_10 = -VAR_1;


 if (!VAR_7 && !FUNC_3(VAR_3, VAR_4, 0))
  VAR_10 = VAR_10 ? VAR_10 : -VAR_2;
out:
 return VAR_10;
}
