
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int meta_dev_idx; scalar_t__ md_size_sect; scalar_t__ md_offset; } ;
struct drbd_backing_dev {TYPE_1__ md; } ;
typedef int sector_t ;





 scalar_t__ VAR_0 ;

__attribute__((used)) static inline sector_t FUNC_0(struct drbd_backing_dev *VAR_1)
{
 switch (VAR_1->md.meta_dev_idx) {
 case 128:
 case 129:
  return VAR_1->md.md_offset + VAR_0 -1;
 case 130:
 default:
  return VAR_1->md.md_offset + VAR_1->md.md_size_sect -1;
 }
}
