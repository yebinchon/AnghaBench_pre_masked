
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_i2c_dev {scalar_t__ sda_hold_time; scalar_t__ hs_lcnt; scalar_t__ hs_hcnt; scalar_t__ fs_lcnt; scalar_t__ fs_hcnt; scalar_t__ ss_lcnt; scalar_t__ ss_hcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dw_i2c_dev*) ;
 int FUNC_1 (struct dw_i2c_dev*,scalar_t__,int ) ;
 int FUNC_2 (struct dw_i2c_dev*) ;
 int FUNC_3 (struct dw_i2c_dev*) ;
 int FUNC_4 (struct dw_i2c_dev*) ;

__attribute__((used)) static int FUNC_5(struct dw_i2c_dev *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8)
  return VAR_8;


 FUNC_0(VAR_7);


 FUNC_1(VAR_7, VAR_7->ss_hcnt, VAR_5);
 FUNC_1(VAR_7, VAR_7->ss_lcnt, VAR_6);


 FUNC_1(VAR_7, VAR_7->fs_hcnt, VAR_0);
 FUNC_1(VAR_7, VAR_7->fs_lcnt, VAR_1);


 if (VAR_7->hs_hcnt && VAR_7->hs_lcnt) {
  FUNC_1(VAR_7, VAR_7->hs_hcnt, VAR_2);
  FUNC_1(VAR_7, VAR_7->hs_lcnt, VAR_3);
 }


 if (VAR_7->sda_hold_time)
  FUNC_1(VAR_7, VAR_7->sda_hold_time, VAR_4);

 FUNC_3(VAR_7);
 FUNC_4(VAR_7);

 return 0;
}
