
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cma3000_platform_data {int mdthr; int mdfftmr; int ffthr; } ;
struct cma3000_accl_data {scalar_t__ g_range; int mode; TYPE_1__* bus_ops; int dev; struct cma3000_platform_data* pdata; } ;
struct TYPE_2__ {int ctrl_mod; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cma3000_accl_data*,int ,int,char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct cma3000_accl_data *VAR_10)
{
 const struct cma3000_platform_data *VAR_11 = VAR_10->pdata;
 u8 VAR_12 = 0;
 int VAR_13;

 if (VAR_10->g_range == VAR_7) {
  VAR_12 = (VAR_10->mode << 1) | VAR_4;
 } else if (VAR_10->g_range == VAR_8) {
  VAR_12 = (VAR_10->mode << 1) | VAR_5;
 } else {
  FUNC_1(VAR_10->dev,
    "Invalid G range specified, assuming 8G\n");
  VAR_12 = (VAR_10->mode << 1) | VAR_5;
 }

 VAR_12 |= VAR_10->bus_ops->ctrl_mod;

 FUNC_0(VAR_10, VAR_3, VAR_11->mdthr,
      "Motion Detect Threshold");
 FUNC_0(VAR_10, VAR_2, VAR_11->mdfftmr,
      "Time register");
 FUNC_0(VAR_10, VAR_1, VAR_11->ffthr,
      "Free fall threshold");
 VAR_13 = FUNC_0(VAR_10, VAR_0, VAR_12, "Mode setting");
 if (VAR_13 < 0)
  return -VAR_9;

 FUNC_2(VAR_6);

 return 0;
}
