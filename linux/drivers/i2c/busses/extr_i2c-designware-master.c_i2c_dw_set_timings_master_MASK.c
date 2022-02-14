
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_timings {int bus_freq_hz; scalar_t__ scl_fall_ns; scalar_t__ sda_fall_ns; } ;
struct dw_i2c_dev {char const* ss_hcnt; char const* ss_lcnt; int master_cfg; char const* hs_hcnt; char const* hs_lcnt; int dev; void* fs_lcnt; void* fs_hcnt; void* fp_lcnt; void* fp_hcnt; struct i2c_timings timings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int FUNC_0 (int ,char*,char const*,char const*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dw_i2c_dev*,int ) ;
 int FUNC_3 (struct dw_i2c_dev*) ;
 int FUNC_4 (struct dw_i2c_dev*) ;
 int FUNC_5 (struct dw_i2c_dev*) ;
 void* FUNC_6 (int,int,int,int ,int ) ;
 void* FUNC_7 (int,int,int,int ) ;
 int FUNC_8 (struct dw_i2c_dev*) ;

__attribute__((used)) static int FUNC_9(struct dw_i2c_dev *VAR_5)
{
 const char *VAR_6, *VAR_7 = "";
 u32 VAR_8;
 u32 VAR_9, VAR_10;
 struct i2c_timings *VAR_11 = &VAR_5->timings;
 u32 VAR_12;
 int VAR_13;

 VAR_13 = FUNC_3(VAR_5);
 if (VAR_13)
  return VAR_13;
 VAR_8 = FUNC_2(VAR_5, VAR_0);
 FUNC_5(VAR_5);


 VAR_9 = VAR_11->sda_fall_ns ?: 300;
 VAR_10 = VAR_11->scl_fall_ns ?: 300;


 if (!VAR_5->ss_hcnt || !VAR_5->ss_lcnt) {
  VAR_12 = FUNC_4(VAR_5);
  VAR_5->ss_hcnt =
   FUNC_6(VAR_12,
     4000,
     VAR_9,
     0,
     0);
  VAR_5->ss_lcnt =
   FUNC_7(VAR_12,
     4700,
     VAR_10,
     0);
 }
 FUNC_0(VAR_5->dev, "Standard Mode HCNT:LCNT = %d:%d\n",
  VAR_5->ss_hcnt, VAR_5->ss_lcnt);






 if (VAR_11->bus_freq_hz == 1000000) {




  if (VAR_5->fp_hcnt && VAR_5->fp_lcnt) {
   VAR_5->fs_hcnt = VAR_5->fp_hcnt;
   VAR_5->fs_lcnt = VAR_5->fp_lcnt;
   VAR_7 = " Plus";
  }
 }




 if (!VAR_5->fs_hcnt || !VAR_5->fs_lcnt) {
  VAR_12 = FUNC_4(VAR_5);
  VAR_5->fs_hcnt =
   FUNC_6(VAR_12,
     600,
     VAR_9,
     0,
     0);
  VAR_5->fs_lcnt =
   FUNC_7(VAR_12,
     1300,
     VAR_10,
     0);
 }
 FUNC_0(VAR_5->dev, "Fast Mode%s HCNT:LCNT = %d:%d\n",
  VAR_7, VAR_5->fs_hcnt, VAR_5->fs_lcnt);


 if ((VAR_5->master_cfg & VAR_4) ==
  129) {
  if ((VAR_8 & VAR_2)
   != VAR_1) {
   FUNC_1(VAR_5->dev, "High Speed not supported!\n");
   VAR_5->master_cfg &= ~VAR_4;
   VAR_5->master_cfg |= VAR_3;
   VAR_5->hs_hcnt = 0;
   VAR_5->hs_lcnt = 0;
  } else if (VAR_5->hs_hcnt && VAR_5->hs_lcnt) {
   FUNC_0(VAR_5->dev, "High Speed Mode HCNT:LCNT = %d:%d\n",
    VAR_5->hs_hcnt, VAR_5->hs_lcnt);
  }
 }

 VAR_13 = FUNC_8(VAR_5);
 if (VAR_13)
  goto out;

 switch (VAR_5->master_cfg & VAR_4) {
 case 128:
  VAR_6 = "Standard Mode";
  break;
 case 129:
  VAR_6 = "High Speed Mode";
  break;
 default:
  VAR_6 = "Fast Mode";
 }
 FUNC_0(VAR_5->dev, "Bus speed: %s%s\n", VAR_6, VAR_7);

out:
 return VAR_13;
}
