
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lidar_data {int (* xfer ) (struct lidar_data*,int,int*,int) ;} ;


 int FUNC_0 (struct lidar_data*,int,int*,int) ;

__attribute__((used)) static int FUNC_1(struct lidar_data *VAR_0, u8 VAR_1)
{
 int VAR_2;
 u8 VAR_3;

 VAR_2 = VAR_0->xfer(VAR_0, VAR_1, &VAR_3, 1);
 if (VAR_2 < 0)
  return VAR_2;

 return VAR_3;
}
