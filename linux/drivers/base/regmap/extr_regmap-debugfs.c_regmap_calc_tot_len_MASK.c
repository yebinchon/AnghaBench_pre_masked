
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int val_bytes; } ;
struct regmap {int debugfs_val_len; scalar_t__ debugfs_reg_len; scalar_t__ debugfs_tot_len; TYPE_1__ format; int max_register; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct regmap *VAR_0,
           void *VAR_1, size_t VAR_2)
{

 if (!VAR_0->debugfs_tot_len) {
  VAR_0->debugfs_reg_len = FUNC_0(VAR_0->max_register),
  VAR_0->debugfs_val_len = 2 * VAR_0->format.val_bytes;
  VAR_0->debugfs_tot_len = VAR_0->debugfs_reg_len +
   VAR_0->debugfs_val_len + 3;
 }
}
