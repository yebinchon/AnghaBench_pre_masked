
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct driver_data {int dd_flag; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct driver_data* private_data; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct driver_data*,unsigned int,unsigned long) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct block_device *VAR_4,
       fmode_t VAR_5,
       unsigned VAR_6,
       unsigned long VAR_7)
{
 struct driver_data *VAR_8 = VAR_4->bd_disk->private_data;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 if (!VAR_8)
  return -VAR_2;

 if (FUNC_3(FUNC_2(VAR_3, &VAR_8->dd_flag)))
  return -VAR_2;

 switch (VAR_6) {
 case 128:
  return -VAR_2;
 default:
  return FUNC_1(VAR_8, VAR_6, VAR_7);
 }
}
