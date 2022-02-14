
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct gma_encoder {struct cdv_intel_dp* dev_priv; } ;
struct cdv_intel_dp {int lane_count; scalar_t__* train_set; int link_status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(struct gma_encoder *VAR_4)
{
 struct cdv_intel_dp *VAR_5 = VAR_4->dev_priv;
 uint8_t VAR_6 = 0;
 uint8_t VAR_7 = 0;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_5->lane_count; VAR_8++) {
  uint8_t VAR_9 = FUNC_1(VAR_5->link_status, VAR_8);
  uint8_t VAR_10 = FUNC_0(VAR_5->link_status, VAR_8);

  if (VAR_9 > VAR_6)
   VAR_6 = VAR_9;
  if (VAR_10 > VAR_7)
   VAR_7 = VAR_10;
 }

 if (VAR_6 >= VAR_0)
  VAR_6 = VAR_0 | VAR_2;

 if (VAR_7 == VAR_3)
  VAR_7 |= VAR_1;

 for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
  VAR_5->train_set[VAR_8] = VAR_6 | VAR_7;
}
