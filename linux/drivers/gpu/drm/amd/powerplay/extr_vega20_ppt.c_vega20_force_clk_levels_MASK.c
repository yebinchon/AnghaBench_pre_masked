
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {int hard_min_level; int soft_max_level; int soft_min_level; } ;
struct vega20_single_dpm_table {size_t count; TYPE_2__* dpm_levels; TYPE_1__ dpm_state; } ;
struct vega20_dpm_table {struct vega20_single_dpm_table dcef_table; struct vega20_single_dpm_table fclk_table; struct vega20_single_dpm_table soc_table; struct vega20_single_dpm_table mem_table; struct vega20_single_dpm_table gfx_table; } ;
struct smu_dpm_context {scalar_t__ dpm_level; struct vega20_dpm_table* dpm_context; } ;
struct smu_context {int mutex; struct smu_dpm_context smu_dpm; } ;
typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;
struct TYPE_4__ {int value; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;



 int VAR_8 ;



 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct smu_context*,int ,size_t) ;
 int FUNC_7 (struct smu_context*,int,int ) ;

__attribute__((used)) static int FUNC_8(struct smu_context *VAR_9,
   enum smu_clk_type VAR_10, uint32_t VAR_11)
{
 struct vega20_dpm_table *VAR_12;
 struct vega20_single_dpm_table *VAR_13;
 uint32_t VAR_14, VAR_15, VAR_16;
 struct smu_dpm_context *VAR_17 = &VAR_9->smu_dpm;
 int VAR_18 = 0;

 if (VAR_17->dpm_level != VAR_0) {
  FUNC_5("force clock level is for dpm manual mode only.\n");
  return -VAR_1;
 }

 FUNC_2(&(VAR_9->mutex));

 VAR_14 = VAR_11 ? (FUNC_0(VAR_11) - 1) : 0;
 VAR_15 = VAR_11 ? (FUNC_1(VAR_11) - 1) : 0;

 VAR_12 = VAR_9->smu_dpm.dpm_context;

 switch (VAR_10) {
 case 129:
  VAR_13 = &(VAR_12->gfx_table);

  if (VAR_15 >= VAR_13->count) {
   FUNC_4("Clock level specified %d is over max allowed %d\n",
     VAR_15, VAR_13->count - 1);
   VAR_18 = -VAR_1;
   break;
  }

  VAR_13->dpm_state.soft_min_level =
   VAR_13->dpm_levels[VAR_14].value;
  VAR_13->dpm_state.soft_max_level =
   VAR_13->dpm_levels[VAR_15].value;

  VAR_18 = FUNC_7(VAR_9, 0, VAR_4);
  if (VAR_18) {
   FUNC_4("Failed to upload boot level to lowest!\n");
   break;
  }

  VAR_18 = FUNC_7(VAR_9, 1, VAR_4);
  if (VAR_18)
   FUNC_4("Failed to upload dpm max level to highest!\n");

  break;

 case 131:
  VAR_13 = &(VAR_12->mem_table);

  if (VAR_15 >= VAR_13->count) {
   FUNC_4("Clock level specified %d is over max allowed %d\n",
     VAR_15, VAR_13->count - 1);
   VAR_18 = -VAR_1;
   break;
  }

  VAR_13->dpm_state.soft_min_level =
   VAR_13->dpm_levels[VAR_14].value;
  VAR_13->dpm_state.soft_max_level =
   VAR_13->dpm_levels[VAR_15].value;

  VAR_18 = FUNC_7(VAR_9, 0, VAR_6);
  if (VAR_18) {
   FUNC_4("Failed to upload boot level to lowest!\n");
   break;
  }

  VAR_18 = FUNC_7(VAR_9, 1, VAR_6);
  if (VAR_18)
   FUNC_4("Failed to upload dpm max level to highest!\n");

  break;

 case 128:
  VAR_13 = &(VAR_12->soc_table);

  if (VAR_15 >= VAR_13->count) {
   FUNC_4("Clock level specified %d is over max allowed %d\n",
     VAR_15, VAR_13->count - 1);
   VAR_18 = -VAR_1;
   break;
  }

  VAR_13->dpm_state.soft_min_level =
   VAR_13->dpm_levels[VAR_14].value;
  VAR_13->dpm_state.soft_max_level =
   VAR_13->dpm_levels[VAR_15].value;

  VAR_18 = FUNC_7(VAR_9, 0, VAR_5);
  if (VAR_18) {
   FUNC_4("Failed to upload boot level to lowest!\n");
   break;
  }

  VAR_18 = FUNC_7(VAR_9, 1, VAR_5);
  if (VAR_18)
   FUNC_4("Failed to upload dpm max level to highest!\n");

  break;

 case 132:
  VAR_13 = &(VAR_12->fclk_table);

  if (VAR_15 >= VAR_13->count) {
   FUNC_4("Clock level specified %d is over max allowed %d\n",
     VAR_15, VAR_13->count - 1);
   VAR_18 = -VAR_1;
   break;
  }

  VAR_13->dpm_state.soft_min_level =
   VAR_13->dpm_levels[VAR_14].value;
  VAR_13->dpm_state.soft_max_level =
   VAR_13->dpm_levels[VAR_15].value;

  VAR_18 = FUNC_7(VAR_9, 0, VAR_3);
  if (VAR_18) {
   FUNC_4("Failed to upload boot level to lowest!\n");
   break;
  }

  VAR_18 = FUNC_7(VAR_9, 1, VAR_3);
  if (VAR_18)
   FUNC_4("Failed to upload dpm max level to highest!\n");

  break;

 case 133:
  VAR_16 = VAR_14;
  VAR_13 = &(VAR_12->dcef_table);

  if (VAR_16 >= VAR_13->count) {
   FUNC_4("Clock level specified %d is over max allowed %d\n",
     VAR_16, VAR_13->count - 1);
   VAR_18 = -VAR_1;
   break;
  }

  VAR_13->dpm_state.hard_min_level =
   VAR_13->dpm_levels[VAR_16].value;

  VAR_18 = FUNC_7(VAR_9, 0, VAR_2);
  if (VAR_18)
   FUNC_4("Failed to upload boot level to lowest!\n");

  break;

 case 130:
  if (VAR_14 >= VAR_7 ||
      VAR_15 >= VAR_7) {
   VAR_18 = -VAR_1;
   break;
  }

  VAR_18 = FUNC_6(VAR_9,
    VAR_8, VAR_14);
  if (VAR_18)
   FUNC_4("Failed to set min link dpm level!\n");

  break;

 default:
  break;
 }

 FUNC_3(&(VAR_9->mutex));
 return VAR_18;
}
