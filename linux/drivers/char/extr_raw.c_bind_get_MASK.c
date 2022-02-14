
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_device_data {struct block_device* binding; } ;
struct block_device {int bd_dev; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct raw_device_data* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(int VAR_4, dev_t *VAR_5)
{
 struct raw_device_data *VAR_6;
 struct block_device *VAR_7;

 if (VAR_4 <= 0 || VAR_4 >= VAR_1)
  return -VAR_0;

 VAR_6 = &VAR_2[VAR_4];

 FUNC_0(&VAR_3);
 VAR_7 = VAR_6->binding;
 *VAR_5 = VAR_7 ? VAR_7->bd_dev : 0;
 FUNC_1(&VAR_3);
 return 0;
}
