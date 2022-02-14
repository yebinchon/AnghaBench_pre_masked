
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct cs_section_def {scalar_t__ id; struct cs_extent_def* section; } ;
struct cs_extent_def {int* extent; int reg_count; int reg_index; } ;
struct TYPE_3__ {struct cs_section_def* cs_data; } ;
struct TYPE_4__ {TYPE_1__ rlc; } ;
struct amdgpu_device {int asic_type; TYPE_2__ gfx; } ;







 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t FUNC_1 (int) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_9,
        volatile u32 *VAR_10)
{
 u32 VAR_11 = 0, VAR_12;
 const struct cs_section_def *VAR_13 = ((void*)0);
 const struct cs_extent_def *VAR_14 = ((void*)0);

 if (VAR_9->gfx.rlc.cs_data == ((void*)0))
  return;
 if (VAR_10 == ((void*)0))
  return;

 VAR_10[VAR_11++] = FUNC_1(FUNC_0(VAR_3, 0));
 VAR_10[VAR_11++] = FUNC_1(VAR_2);

 VAR_10[VAR_11++] = FUNC_1(FUNC_0(VAR_1, 1));
 VAR_10[VAR_11++] = FUNC_1(0x80000000);
 VAR_10[VAR_11++] = FUNC_1(0x80000000);

 for (VAR_13 = VAR_9->gfx.rlc.cs_data; VAR_13->section != ((void*)0); ++VAR_13) {
  for (VAR_14 = VAR_13->section; VAR_14->extent != ((void*)0); ++VAR_14) {
   if (VAR_13->id == VAR_7) {
    VAR_10[VAR_11++] =
     FUNC_1(FUNC_0(VAR_5, VAR_14->reg_count));
    VAR_10[VAR_11++] = FUNC_1(VAR_14->reg_index - VAR_6);
    for (VAR_12 = 0; VAR_12 < VAR_14->reg_count; VAR_12++)
     VAR_10[VAR_11++] = FUNC_1(VAR_14->extent[VAR_12]);
   } else {
    return;
   }
  }
 }

 VAR_10[VAR_11++] = FUNC_1(FUNC_0(VAR_5, 2));
 VAR_10[VAR_11++] = FUNC_1(VAR_8 - VAR_6);
 switch (VAR_9->asic_type) {
 case 132:
  VAR_10[VAR_11++] = FUNC_1(0x16000012);
  VAR_10[VAR_11++] = FUNC_1(0x00000000);
  break;
 case 129:
  VAR_10[VAR_11++] = FUNC_1(0x00000000);
  VAR_10[VAR_11++] = FUNC_1(0x00000000);
  break;
 case 130:
 case 128:
  VAR_10[VAR_11++] = FUNC_1(0x00000000);
  VAR_10[VAR_11++] = FUNC_1(0x00000000);
  break;
 case 131:
  VAR_10[VAR_11++] = FUNC_1(0x3a00161a);
  VAR_10[VAR_11++] = FUNC_1(0x0000002e);
  break;
 default:
  VAR_10[VAR_11++] = FUNC_1(0x00000000);
  VAR_10[VAR_11++] = FUNC_1(0x00000000);
  break;
 }

 VAR_10[VAR_11++] = FUNC_1(FUNC_0(VAR_3, 0));
 VAR_10[VAR_11++] = FUNC_1(VAR_4);

 VAR_10[VAR_11++] = FUNC_1(FUNC_0(VAR_0, 0));
 VAR_10[VAR_11++] = FUNC_1(0);
}
