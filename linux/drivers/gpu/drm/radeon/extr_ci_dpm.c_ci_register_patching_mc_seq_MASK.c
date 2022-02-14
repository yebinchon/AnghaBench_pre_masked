
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct radeon_device {TYPE_1__* pdev; } ;
struct ci_mc_reg_table {size_t last; size_t num_entries; TYPE_3__* mc_reg_table_entry; TYPE_2__* mc_reg_address; } ;
struct TYPE_6__ {int mclk_max; int* mc_data; } ;
struct TYPE_5__ {int s1; } ;
struct TYPE_4__ {int device; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_5,
           struct ci_mc_reg_table *VAR_6)
{
 u8 VAR_7, VAR_8;
 u32 VAR_9;
 bool VAR_10;

 VAR_9 = FUNC_0(VAR_3);
 VAR_10 = ((VAR_9 & 0x0000f00) == 0x300) ? 1 : 0;

 if (VAR_10 &&
     ((VAR_5->pdev->device == 0x67B0) ||
      (VAR_5->pdev->device == 0x67B1))) {
  for (VAR_7 = 0; VAR_7 < VAR_6->last; VAR_7++) {
   if (VAR_6->last >= VAR_4)
    return -VAR_0;
   switch(VAR_6->mc_reg_address[VAR_7].s1 >> 2) {
   case 132:
    for (VAR_8 = 0; VAR_8 < VAR_6->num_entries; VAR_8++) {
     if ((VAR_6->mc_reg_table_entry[VAR_8].mclk_max == 125000) ||
         (VAR_6->mc_reg_table_entry[VAR_8].mclk_max == 137500))
      VAR_6->mc_reg_table_entry[VAR_8].mc_data[VAR_7] =
       (VAR_6->mc_reg_table_entry[VAR_8].mc_data[VAR_7] & 0xFFFFFFF8) |
       0x00000007;
    }
    break;
   case 129:
    for (VAR_8 = 0; VAR_8 < VAR_6->num_entries; VAR_8++) {
     if ((VAR_6->mc_reg_table_entry[VAR_8].mclk_max == 125000) ||
         (VAR_6->mc_reg_table_entry[VAR_8].mclk_max == 137500))
      VAR_6->mc_reg_table_entry[VAR_8].mc_data[VAR_7] =
       (VAR_6->mc_reg_table_entry[VAR_8].mc_data[VAR_7] & 0xFFFF0F00) |
       0x0000D0DD;
    }
    break;
   case 128:
    for (VAR_8 = 0; VAR_8 < VAR_6->num_entries; VAR_8++) {
     if ((VAR_6->mc_reg_table_entry[VAR_8].mclk_max == 125000) ||
         (VAR_6->mc_reg_table_entry[VAR_8].mclk_max == 137500))
      VAR_6->mc_reg_table_entry[VAR_8].mc_data[VAR_7] =
       (VAR_6->mc_reg_table_entry[VAR_8].mc_data[VAR_7] & 0xFFFF0F00) |
       0x0000D0DD;
    }
    break;
   case 130:
    for (VAR_8 = 0; VAR_8 < VAR_6->num_entries; VAR_8++) {
     if ((VAR_6->mc_reg_table_entry[VAR_8].mclk_max == 125000) ||
         (VAR_6->mc_reg_table_entry[VAR_8].mclk_max == 137500))
      VAR_6->mc_reg_table_entry[VAR_8].mc_data[VAR_7] = 0;
    }
    break;
   case 133:
    for (VAR_8 = 0; VAR_8 < VAR_6->num_entries; VAR_8++) {
     if (VAR_6->mc_reg_table_entry[VAR_8].mclk_max == 125000)
      VAR_6->mc_reg_table_entry[VAR_8].mc_data[VAR_7] =
       (VAR_6->mc_reg_table_entry[VAR_8].mc_data[VAR_7] & 0xFFE0FE0F) |
       0x000C0140;
     else if (VAR_6->mc_reg_table_entry[VAR_8].mclk_max == 137500)
      VAR_6->mc_reg_table_entry[VAR_8].mc_data[VAR_7] =
       (VAR_6->mc_reg_table_entry[VAR_8].mc_data[VAR_7] & 0xFFE0FE0F) |
       0x000C0150;
    }
    break;
   case 131:
    for (VAR_8 = 0; VAR_8 < VAR_6->num_entries; VAR_8++) {
     if (VAR_6->mc_reg_table_entry[VAR_8].mclk_max == 125000)
      VAR_6->mc_reg_table_entry[VAR_8].mc_data[VAR_7] =
       (VAR_6->mc_reg_table_entry[VAR_8].mc_data[VAR_7] & 0xFFFFFFE0) |
       0x00000030;
     else if (VAR_6->mc_reg_table_entry[VAR_8].mclk_max == 137500)
      VAR_6->mc_reg_table_entry[VAR_8].mc_data[VAR_7] =
       (VAR_6->mc_reg_table_entry[VAR_8].mc_data[VAR_7] & 0xFFFFFFE0) |
       0x00000035;
    }
    break;
   default:
    break;
   }
  }

  FUNC_1(VAR_2, 3);
  VAR_9 = FUNC_0(VAR_1);
  VAR_9 = (VAR_9 & 0xFFF8FFFF) | (1 << 16);
  FUNC_1(VAR_2, 3);
  FUNC_1(VAR_1, VAR_9);
 }

 return 0;
}
