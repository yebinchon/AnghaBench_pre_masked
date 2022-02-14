
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int meta_dev_idx; scalar_t__ md_offset; scalar_t__ bm_offset; } ;
struct drbd_backing_dev {TYPE_1__ md; } ;
typedef scalar_t__ sector_t ;






__attribute__((used)) static inline sector_t FUNC_0(struct drbd_backing_dev *VAR_0)
{
 switch (VAR_0->md.meta_dev_idx) {
 case 128:
 case 129:
  return VAR_0->md.md_offset + VAR_0->md.bm_offset;
 case 130:
 default:
  return VAR_0->md.md_offset;
 }
}
