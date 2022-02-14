
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ipu_csi {TYPE_1__* ipu; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ipu_csi*,int ) ;
 int FUNC_2 (struct ipu_csi*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct ipu_csi *VAR_4, u32 VAR_5,
     u32 VAR_6)
{
 u32 VAR_7;
 int VAR_8;

 VAR_8 = (VAR_6 / VAR_5) - 1;

 if (VAR_8 > 0xFF || VAR_8 < 0) {
  FUNC_0(VAR_4->ipu->dev,
   "value of pixel_clk extends normal range\n");
  return -VAR_3;
 }

 VAR_7 = FUNC_1(VAR_4, VAR_0);
 VAR_7 &= ~VAR_1;
 FUNC_2(VAR_4, VAR_7 | (VAR_8 << VAR_2),
     VAR_0);

 return 0;
}
