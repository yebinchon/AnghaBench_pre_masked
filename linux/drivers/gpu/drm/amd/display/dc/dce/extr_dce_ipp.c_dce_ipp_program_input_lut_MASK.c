
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_pixel_processor {int dummy; } ;
struct dce_ipp {int dummy; } ;
struct TYPE_2__ {int * blue; int * green; int * red; } ;
struct dc_gamma {int num_entries; TYPE_1__ entries; } ;


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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int,int ,int,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 struct dce_ipp* FUNC_4 (struct input_pixel_processor*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(
 struct input_pixel_processor *VAR_14,
 const struct dc_gamma *VAR_15)
{
 int VAR_16;
 struct dce_ipp *VAR_17 = FUNC_4(VAR_14);


 if (FUNC_0(VAR_0))
  FUNC_1(VAR_0, 0, VAR_1, 1);


 FUNC_1(VAR_9, 0, VAR_9, 0x7);


 FUNC_3(VAR_7, VAR_7, 0);


 FUNC_2(VAR_2, 0,
  VAR_5, 3,
  VAR_4, 3,
  VAR_3, 3);


 FUNC_1(VAR_6, 0,
  VAR_6, 0);

 for (VAR_16 = 0; VAR_16 < VAR_15->num_entries; VAR_16++) {
  FUNC_1(VAR_8, 0, VAR_8,
    FUNC_5(
     VAR_15->entries.red[VAR_16]));
  FUNC_1(VAR_8, 0, VAR_8,
    FUNC_5(
     VAR_15->entries.green[VAR_16]));
  FUNC_1(VAR_8, 0, VAR_8,
    FUNC_5(
     VAR_15->entries.blue[VAR_16]));
 }


 if (FUNC_0(VAR_0))
  FUNC_1(VAR_0, 0, VAR_1, 0);


 FUNC_3(VAR_13, VAR_11, 1);
 FUNC_3(VAR_12, VAR_10, 0);
}
