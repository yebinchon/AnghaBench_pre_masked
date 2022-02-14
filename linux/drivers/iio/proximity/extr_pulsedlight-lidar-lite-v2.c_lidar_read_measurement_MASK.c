
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct lidar_data {int (* xfer ) (struct lidar_data*,int,int *,int) ;scalar_t__ i2c_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct lidar_data*,int,int *,int) ;

__attribute__((used)) static int FUNC_2(struct lidar_data *VAR_2, u16 *VAR_3)
{
 int VAR_4 = VAR_2->xfer(VAR_2, VAR_0 |
   (VAR_2->i2c_enabled ? VAR_1 : 0),
   (u8 *) VAR_3, 2);

 if (!VAR_4)
  *VAR_3 = FUNC_0(*VAR_3);

 return VAR_4;
}
