
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {struct dc_context* ctx; } ;
struct dce_transform {TYPE_1__ base; } ;
struct dc_context {int dummy; } ;
typedef enum ram_filter_type { ____Placeholder_ram_filter_type } ram_filter_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct dc_context*,int ) ;
 int FUNC_1 (struct dc_context*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int ,int const,int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(
 struct dce_transform *VAR_18,
 int VAR_19,
 const uint16_t *VAR_20,
 enum ram_filter_type VAR_21)
{
 struct dc_context *VAR_22 = VAR_18->base.ctx;
 int VAR_23, VAR_24, VAR_25;
 int VAR_26 = 0;
 int VAR_27 = (VAR_19 + 1) / 2;
 int VAR_28 = VAR_6 / 2 + 1;

 uint32_t VAR_29 = 0;
 uint32_t VAR_30, VAR_31;

 if (!VAR_20)
  return;


 VAR_30 = FUNC_0(VAR_22, VAR_14);
 VAR_31 = VAR_30;
 FUNC_3(VAR_31, 1, VAR_0, VAR_2);
 FUNC_1(VAR_22, VAR_14, VAR_31);


 for (VAR_23 = 0; VAR_23 < 10; VAR_23++) {
  if (FUNC_2(
    FUNC_0(VAR_22, VAR_15),
    VAR_1,
    VAR_3) == 0)
   break;

  FUNC_4(1);
 }

 FUNC_3(VAR_29, VAR_21, VAR_4, VAR_9);

 for (VAR_24 = 0; VAR_24 < VAR_28; VAR_24++) {


  FUNC_3(VAR_29, VAR_24, VAR_4, VAR_12);
  for (VAR_25 = 0; VAR_25 < VAR_27; VAR_25++) {
   uint32_t VAR_32 = 0;

   FUNC_3(VAR_29, VAR_25,
     VAR_4, VAR_13);

   FUNC_1(VAR_22, VAR_16, VAR_29);

   FUNC_3(
     VAR_32, 1,
     VAR_5,
     VAR_8);
   FUNC_3(
     VAR_32, VAR_20[VAR_26],
     VAR_5,
     VAR_7);

   if (VAR_19 % 2 && VAR_25 == VAR_27 - 1) {
    FUNC_3(
      VAR_32, 0,
      VAR_5,
      VAR_11);
    VAR_26++;
   } else {
    FUNC_3(
      VAR_32, 1,
      VAR_5,
      VAR_11);
    FUNC_3(
      VAR_32, VAR_20[VAR_26 + 1],
      VAR_5,
      VAR_10);

    VAR_26 += 2;
   }

   FUNC_1(VAR_22, VAR_17, VAR_32);
  }
 }


 FUNC_1(VAR_22, VAR_14, VAR_30);
}
