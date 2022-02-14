
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {struct arcturus_dpm_table* dpm_context; } ;
struct smu_context {int mutex; TYPE_1__ smu_dpm; } ;
struct TYPE_5__ {int soft_max_level; int soft_min_level; } ;
struct arcturus_single_dpm_table {size_t count; TYPE_3__* dpm_levels; TYPE_2__ dpm_state; } ;
struct arcturus_dpm_table {struct arcturus_single_dpm_table fclk_table; struct arcturus_single_dpm_table soc_table; struct arcturus_single_dpm_table mem_table; struct arcturus_single_dpm_table gfx_table; } ;
typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;
struct TYPE_6__ {int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (struct smu_context*,int,int ) ;
 size_t FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(struct smu_context *VAR_5,
   enum smu_clk_type VAR_6, uint32_t VAR_7)
{
 struct arcturus_dpm_table *VAR_8;
 struct arcturus_single_dpm_table *VAR_9;
 uint32_t VAR_10, VAR_11;
 int VAR_12 = 0;

 FUNC_3(&(VAR_5->mutex));

 VAR_10 = VAR_7 ? (FUNC_1(VAR_7) - 1) : 0;
 VAR_11 = VAR_7 ? (FUNC_2(VAR_7) - 1) : 0;

 VAR_8 = VAR_5->smu_dpm.dpm_context;

 switch (VAR_6) {
 case 129:
  VAR_9 = &(VAR_8->gfx_table);

  if (VAR_11 >= VAR_9->count) {
   FUNC_5("Clock level specified %d is over max allowed %d\n",
     VAR_11, VAR_9->count - 1);
   VAR_12 = -VAR_0;
   break;
  }

  VAR_9->dpm_state.soft_min_level =
   VAR_9->dpm_levels[VAR_10].value;
  VAR_9->dpm_state.soft_max_level =
   VAR_9->dpm_levels[VAR_11].value;

  VAR_12 = FUNC_0(VAR_5, 0, VAR_2);
  if (VAR_12) {
   FUNC_5("Failed to upload boot level to lowest!\n");
   break;
  }

  VAR_12 = FUNC_0(VAR_5, 1, VAR_2);
  if (VAR_12)
   FUNC_5("Failed to upload dpm max level to highest!\n");

  break;

 case 130:
  VAR_9 = &(VAR_8->mem_table);

  if (VAR_11 >= VAR_9->count) {
   FUNC_5("Clock level specified %d is over max allowed %d\n",
     VAR_11, VAR_9->count - 1);
   VAR_12 = -VAR_0;
   break;
  }

  VAR_9->dpm_state.soft_min_level =
   VAR_9->dpm_levels[VAR_10].value;
  VAR_9->dpm_state.soft_max_level =
   VAR_9->dpm_levels[VAR_11].value;

  VAR_12 = FUNC_0(VAR_5, 0, VAR_4);
  if (VAR_12) {
   FUNC_5("Failed to upload boot level to lowest!\n");
   break;
  }

  VAR_12 = FUNC_0(VAR_5, 1, VAR_4);
  if (VAR_12)
   FUNC_5("Failed to upload dpm max level to highest!\n");

  break;

 case 128:
  VAR_9 = &(VAR_8->soc_table);

  if (VAR_11 >= VAR_9->count) {
   FUNC_5("Clock level specified %d is over max allowed %d\n",
     VAR_11, VAR_9->count - 1);
   VAR_12 = -VAR_0;
   break;
  }

  VAR_9->dpm_state.soft_min_level =
   VAR_9->dpm_levels[VAR_10].value;
  VAR_9->dpm_state.soft_max_level =
   VAR_9->dpm_levels[VAR_11].value;

  VAR_12 = FUNC_0(VAR_5, 0, VAR_3);
  if (VAR_12) {
   FUNC_5("Failed to upload boot level to lowest!\n");
   break;
  }

  VAR_12 = FUNC_0(VAR_5, 1, VAR_3);
  if (VAR_12)
   FUNC_5("Failed to upload dpm max level to highest!\n");

  break;

 case 131:
  VAR_9 = &(VAR_8->fclk_table);

  if (VAR_11 >= VAR_9->count) {
   FUNC_5("Clock level specified %d is over max allowed %d\n",
     VAR_11, VAR_9->count - 1);
   VAR_12 = -VAR_0;
   break;
  }

  VAR_9->dpm_state.soft_min_level =
   VAR_9->dpm_levels[VAR_10].value;
  VAR_9->dpm_state.soft_max_level =
   VAR_9->dpm_levels[VAR_11].value;

  VAR_12 = FUNC_0(VAR_5, 0, VAR_1);
  if (VAR_12) {
   FUNC_5("Failed to upload boot level to lowest!\n");
   break;
  }

  VAR_12 = FUNC_0(VAR_5, 1, VAR_1);
  if (VAR_12)
   FUNC_5("Failed to upload dpm max level to highest!\n");

  break;

 default:
  break;
 }

 FUNC_4(&(VAR_5->mutex));
 return VAR_12;
}
