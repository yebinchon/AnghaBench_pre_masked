
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ target_refresh_in_uhz; } ;
struct mod_vrr_params {scalar_t__ state; unsigned int min_refresh_in_uhz; unsigned int max_refresh_in_uhz; TYPE_1__ fixed; } ;
struct mod_freesync_config {scalar_t__ state; scalar_t__ min_refresh_in_uhz; } ;
struct core_freesync {int dummy; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct core_freesync *VAR_1,
  struct mod_freesync_config *VAR_2,
  unsigned int VAR_3,
  unsigned int VAR_4,
  struct mod_vrr_params *VAR_5)
{
 if (VAR_5->state != VAR_2->state) {
  return 1;
 } else if (VAR_5->state == VAR_0 &&
   VAR_5->fixed.target_refresh_in_uhz !=
     VAR_2->min_refresh_in_uhz) {
  return 1;
 } else if (VAR_5->min_refresh_in_uhz != VAR_3) {
  return 1;
 } else if (VAR_5->max_refresh_in_uhz != VAR_4) {
  return 1;
 }

 return 0;
}
