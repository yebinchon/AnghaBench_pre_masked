
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct driver_data {int dd_flag; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int fmode_t ;
struct TYPE_2__ {scalar_t__ private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_2, fmode_t VAR_3)
{
 struct driver_data *VAR_4;

 if (VAR_2 && VAR_2->bd_disk) {
  VAR_4 = (struct driver_data *) VAR_2->bd_disk->private_data;

  if (VAR_4) {
   if (FUNC_0(VAR_1,
       &VAR_4->dd_flag)) {
    return -VAR_0;
   }
   return 0;
  }
 }
 return -VAR_0;
}
