
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dcn10_opp {int dummy; } ;
struct TYPE_2__ {int TRUNCATE_MODE; int TRUNCATE_DEPTH; int TRUNCATE_ENABLED; } ;
struct bit_depth_reduction_params {TYPE_1__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(
  struct dcn10_opp *VAR_4,
  const struct bit_depth_reduction_params *VAR_5)
{
 FUNC_0(VAR_0,
  VAR_2, VAR_5->flags.TRUNCATE_ENABLED,
  VAR_1, VAR_5->flags.TRUNCATE_DEPTH,
  VAR_3, VAR_5->flags.TRUNCATE_MODE);
}
