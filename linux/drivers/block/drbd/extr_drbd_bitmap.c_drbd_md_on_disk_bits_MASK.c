
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int al_offset; int md_size_sect; int bm_offset; } ;
struct drbd_backing_dev {TYPE_1__ md; } ;



__attribute__((used)) static u64 FUNC_0(struct drbd_backing_dev *VAR_0)
{
 u64 VAR_1;
 if (VAR_0->md.al_offset == 8)
  VAR_1 = VAR_0->md.md_size_sect - VAR_0->md.bm_offset;
 else
  VAR_1 = VAR_0->md.al_offset - VAR_0->md.bm_offset;
 return VAR_1 << (9 + 3);
}
