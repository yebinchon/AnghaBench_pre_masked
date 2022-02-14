
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_scaler {int hratio; int vratio; scalar_t__ up_v; scalar_t__ up_h; scalar_t__ bypass; scalar_t__ range; } ;
struct fimc_context {int dev; } ;


 int FUNC_0 (int ,char*,int,int,...) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct fimc_context*,int ) ;
 int FUNC_6 (struct fimc_context*,int,int ) ;

__attribute__((used)) static void FUNC_7(struct fimc_context *VAR_11, struct fimc_scaler *VAR_12)
{
 u32 VAR_13, VAR_14;

 FUNC_0(VAR_11->dev, "range[%d]bypass[%d]up_h[%d]up_v[%d]\n",
     VAR_12->range, VAR_12->bypass, VAR_12->up_h, VAR_12->up_v);
 FUNC_0(VAR_11->dev, "hratio[%d]vratio[%d]\n",
     VAR_12->hratio, VAR_12->vratio);

 VAR_13 = FUNC_5(VAR_11, VAR_3);
 VAR_13 &= ~(VAR_8 |
  VAR_9 | VAR_10 |
  VAR_7 |
  VAR_6 |
  VAR_4 |
  VAR_5);

 if (VAR_12->range)
  VAR_13 |= (VAR_4 |
   VAR_5);
 if (VAR_12->bypass)
  VAR_13 |= VAR_8;
 if (VAR_12->up_h)
  VAR_13 |= VAR_9;
 if (VAR_12->up_v)
  VAR_13 |= VAR_10;

 VAR_13 |= (FUNC_3((VAR_12->hratio >> 6)) |
  FUNC_4((VAR_12->vratio >> 6)));
 FUNC_6(VAR_11, VAR_13, VAR_3);

 VAR_14 = FUNC_5(VAR_11, VAR_0);
 VAR_14 &= ~VAR_1;
 VAR_14 &= ~VAR_2;
 VAR_14 |= (FUNC_1(VAR_12->hratio) |
  FUNC_2(VAR_12->vratio));
 FUNC_6(VAR_11, VAR_14, VAR_0);
}
