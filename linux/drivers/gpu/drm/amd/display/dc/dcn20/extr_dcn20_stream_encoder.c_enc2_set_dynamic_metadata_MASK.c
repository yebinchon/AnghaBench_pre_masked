
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stream_encoder {int dummy; } ;
struct dcn10_stream_encoder {int dummy; } ;
typedef enum dynamic_metadata_mode { ____Placeholder_dynamic_metadata_mode } dynamic_metadata_mode ;


 struct dcn10_stream_encoder* FUNC_0 (struct stream_encoder*) ;
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
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int ,int ,int ,int) ;
 int VAR_14 ;
 int VAR_15 ;

void FUNC_4(struct stream_encoder *VAR_16,
  bool VAR_17,
  uint32_t VAR_18,
  enum dynamic_metadata_mode VAR_19)
{
 struct dcn10_stream_encoder *VAR_20 = FUNC_0(VAR_16);

 if (VAR_17) {
  FUNC_2(VAR_1,
    VAR_12, VAR_18,
    VAR_13, (VAR_19 == VAR_14) ? 1 : 0);




  if (VAR_19 == VAR_15)
   FUNC_3(VAR_6,
     VAR_3, 1,
     VAR_5, 0,
     VAR_4, 20);
  else {
   FUNC_3(VAR_7,
     VAR_8, 1,
     VAR_10, 0,
     VAR_9, 2);

   if (VAR_19 == VAR_14)
    FUNC_1(VAR_0,
      VAR_2, 1);
  }

  FUNC_1(VAR_1,
    VAR_11, 1);
 } else {
  FUNC_1(VAR_1,
    VAR_11, 0);

  if (VAR_19 == VAR_15)
   FUNC_1(VAR_6,
     VAR_3, 0);
  else {
   FUNC_1(VAR_7,
     VAR_8, 0);
   FUNC_1(VAR_0,
     VAR_2, 0);
  }
 }
}
