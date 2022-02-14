
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dce110_opp {int dummy; } ;
struct TYPE_2__ {int TRUNCATE_DEPTH; scalar_t__ TRUNCATE_ENABLED; int TRUNCATE_MODE; } ;
struct bit_depth_reduction_params {scalar_t__ pixel_encoding; TYPE_1__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int,int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(
  struct dce110_opp *VAR_5,
  const struct bit_depth_reduction_params *VAR_6)
{

 FUNC_0(VAR_0,
   VAR_2, 0,
   VAR_1, 0,
   VAR_3, 0);


 if (VAR_6->pixel_encoding == VAR_4) {

  if (VAR_6->flags.TRUNCATE_DEPTH == 1)
   FUNC_0(VAR_0,
     VAR_2, 1,
     VAR_1, 1,
     VAR_3, 0);
  else if (VAR_6->flags.TRUNCATE_DEPTH == 2)

   FUNC_0(VAR_0,
     VAR_2, 1,
     VAR_1, 2,
     VAR_3, 0);
  return;
 }

 if (VAR_6->flags.TRUNCATE_ENABLED == 0)
  return;

 FUNC_0(VAR_0,
    VAR_2, 1,
    VAR_1,
    VAR_6->flags.TRUNCATE_DEPTH,
    VAR_3,
    VAR_6->flags.TRUNCATE_MODE);
}
