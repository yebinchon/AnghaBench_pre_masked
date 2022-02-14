
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct max1363_state {TYPE_1__* chip_info; } ;
struct iio_dev {unsigned long* available_scan_masks; int dev; } ;
struct TYPE_4__ {int modemask; } ;
struct TYPE_3__ {int num_modes; size_t* mode_list; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (unsigned long*,int ,int ) ;
 unsigned long* FUNC_3 (int *,int ,int ) ;
 struct max1363_state* FUNC_4 (struct iio_dev*) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_4)
{
 struct max1363_state *VAR_5 = FUNC_4(VAR_4);
 unsigned long *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(&VAR_4->dev,
   FUNC_1(FUNC_0(VAR_2),
        sizeof(long),
        VAR_5->chip_info->num_modes + 1),
   VAR_1);
 if (!VAR_6)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_5->chip_info->num_modes; VAR_7++)
  FUNC_2(VAR_6 + FUNC_0(VAR_2)*VAR_7,
       VAR_3[VAR_5->chip_info->mode_list[VAR_7]]
       .modemask, VAR_2);

 VAR_4->available_scan_masks = VAR_6;

 return 0;
}
