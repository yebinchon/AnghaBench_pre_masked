
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct dce_transform {int dummy; } ;
typedef enum ram_filter_type { ____Placeholder_ram_filter_type } ram_filter_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int,int ,int,int ,int) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ,int ,int,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int,int) ;
 int FUNC_6 (int ,int ) ;
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

__attribute__((used)) static void FUNC_7(
 struct dce_transform *VAR_14,
 int VAR_15,
 const uint16_t *VAR_16,
 enum ram_filter_type VAR_17)
{
 int VAR_18, VAR_19;
 int VAR_20 = 0;
 int VAR_21 = (VAR_15 + 1) / 2;
 int VAR_22 = VAR_13 / 2 + 1;

 uint32_t VAR_23 = 0;

 if (!VAR_16)
  return;


 if (FUNC_0(VAR_0)) {
  VAR_23 = FUNC_1(VAR_0);
  FUNC_2(VAR_0, VAR_23, VAR_2, 1);

  FUNC_5(VAR_1, VAR_3, 0, 1, 10);
 }
 for (VAR_18 = 0; VAR_18 < VAR_22; VAR_18++) {


  for (VAR_19 = 0; VAR_19 < VAR_21; VAR_19++) {
   uint16_t VAR_24 = 0;
   uint16_t VAR_25 = VAR_16[VAR_20];

   FUNC_3(VAR_4, 0,
     VAR_8, VAR_17,
     VAR_11, VAR_18,
     VAR_12, VAR_19);

   if (VAR_15 % 2 && VAR_19 == VAR_21 - 1)
    VAR_20++;
   else {
    VAR_24 = VAR_16[VAR_20 + 1];
    VAR_20 += 2;
   }

   FUNC_4(VAR_5, 0,
     VAR_7, 1,
     VAR_6, VAR_25,
     VAR_10, 1,
     VAR_9, VAR_24);
  }
 }


 if (FUNC_0(VAR_0))
  FUNC_6(VAR_0, VAR_23);
}
