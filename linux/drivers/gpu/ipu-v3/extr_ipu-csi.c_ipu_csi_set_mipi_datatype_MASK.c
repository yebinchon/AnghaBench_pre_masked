
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_mbus_framefmt {int code; } ;
struct ipu_csi_bus_config {int mipi_dt; } ;
struct ipu_csi {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipu_csi*,int ) ;
 int FUNC_1 (struct ipu_csi*,int,int ) ;
 int FUNC_2 (struct ipu_csi_bus_config*,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct ipu_csi *VAR_3, u32 VAR_4,
         struct v4l2_mbus_framefmt *VAR_5)
{
 struct ipu_csi_bus_config VAR_6;
 unsigned long VAR_7;
 u32 VAR_8;
 int VAR_9;

 if (VAR_4 > 3)
  return -VAR_1;

 VAR_9 = FUNC_2(&VAR_6, VAR_5->code, VAR_2);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_3(&VAR_3->lock, VAR_7);

 VAR_8 = FUNC_0(VAR_3, VAR_0);
 VAR_8 &= ~(0xff << (VAR_4 * 8));
 VAR_8 |= (VAR_6.mipi_dt << (VAR_4 * 8));
 FUNC_1(VAR_3, VAR_8, VAR_0);

 FUNC_4(&VAR_3->lock, VAR_7);

 return 0;
}
