
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dce110_opp {int dummy; } ;
struct TYPE_2__ {scalar_t__ FRAME_MODULATION_ENABLED; int FRAME_MODULATION_DEPTH; int TEMPORAL_LEVEL; int FRC25; int FRC75; int FRC50; } ;
struct bit_depth_reduction_params {TYPE_1__ flags; } ;


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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(
 struct dce110_opp *VAR_12,
 const struct bit_depth_reduction_params *VAR_13)
{

 FUNC_3(VAR_3,
  VAR_5, 0,
  VAR_10, 0,
  VAR_6, 0);

 FUNC_2(VAR_3,
  VAR_4, 0,
  VAR_11, 0);

 FUNC_3(VAR_3,
  VAR_0, 0,
  VAR_1, 0,
  VAR_2, 0);


 if (VAR_13->flags.FRAME_MODULATION_ENABLED == 0 ||
  VAR_13->flags.FRAME_MODULATION_DEPTH == 2)
  return;


 FUNC_3(VAR_3,
  VAR_4, VAR_13->flags.FRAME_MODULATION_DEPTH,
  VAR_10, 0,
  VAR_6, 0);


 if (FUNC_0(VAR_7)) {
  FUNC_4(VAR_7, 0);

  FUNC_4(VAR_8, 0);

  FUNC_4(VAR_9, 0);
 }


 FUNC_1(VAR_3,
  VAR_11, VAR_13->flags.TEMPORAL_LEVEL);

 FUNC_3(VAR_3,
  VAR_0, VAR_13->flags.FRC25,
  VAR_1, VAR_13->flags.FRC50,
  VAR_2, VAR_13->flags.FRC75);


 FUNC_1(VAR_3,
  VAR_5, 1);
}
