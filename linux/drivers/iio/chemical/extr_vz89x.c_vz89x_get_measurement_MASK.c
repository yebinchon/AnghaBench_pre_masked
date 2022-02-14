
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vz89x_data {int is_valid; int (* xfer ) (struct vz89x_data*,int ) ;scalar_t__ last_update; struct vz89x_chip_data* chip; } ;
struct vz89x_chip_data {int (* valid ) (struct vz89x_data*) ;int cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct vz89x_data*,int ) ;
 int FUNC_1 (struct vz89x_data*) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct vz89x_data *VAR_3)
{
 const struct vz89x_chip_data *VAR_4 = VAR_3->chip;
 int VAR_5;


 if (!FUNC_2(VAR_2, VAR_3->last_update + VAR_1))
  return VAR_3->is_valid ? 0 : -VAR_0;

 VAR_3->is_valid = 0;
 VAR_3->last_update = VAR_2;

 VAR_5 = VAR_3->xfer(VAR_3, VAR_4->cmd);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = VAR_4->valid(VAR_3);
 if (VAR_5)
  return -VAR_0;

 VAR_3->is_valid = 1;

 return 0;
}
