
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int meta_dev_idx; } ;
struct drbd_backing_dev {TYPE_1__ md; int backing_bdev; } ;
typedef unsigned long long sector_t ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long FUNC_0 (int ) ;

__attribute__((used)) static inline sector_t FUNC_1(struct drbd_backing_dev *VAR_4)
{
 const int VAR_5 = VAR_4->md.meta_dev_idx;

 if (VAR_5 == VAR_0)
  return 0;



 if (VAR_5 == VAR_2 ||
     VAR_5 == VAR_1)
  return (FUNC_0(VAR_4->backing_bdev) & ~7ULL) - 8;


 return VAR_3 * VAR_4->md.meta_dev_idx;
}
