
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_md {int al_offset; int bm_offset; int al_size_4k; int md_size_sect; scalar_t__ meta_dev_idx; int al_stripes; int al_stripe_size_4k; int la_size_sect; } ;
struct drbd_device {int dummy; } ;
struct drbd_backing_dev {struct drbd_md md; int md_bdev; } ;
typedef scalar_t__ sector_t ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drbd_device*,char*,scalar_t__,int,int,int,int,scalar_t__,unsigned long long,unsigned long long) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct drbd_backing_dev*) ;

__attribute__((used)) static int FUNC_3(struct drbd_device *VAR_4, struct drbd_backing_dev *VAR_5)
{
 sector_t VAR_6 = FUNC_1(VAR_5->md_bdev);
 struct drbd_md *VAR_7 = &VAR_5->md;
 s32 VAR_8;
 s32 VAR_9;
 if (VAR_7->al_offset < 0) {
  if (VAR_7->bm_offset > VAR_7->al_offset)
   goto err;
  VAR_8 = -VAR_7->al_offset;
  VAR_9 = VAR_7->al_offset - VAR_7->bm_offset;
 } else {
  if (VAR_7->al_offset != VAR_3)
   goto err;
  if (VAR_7->bm_offset < VAR_7->al_offset + VAR_7->al_size_4k * VAR_3)
   goto err;

  VAR_8 = VAR_7->bm_offset - VAR_3;
  VAR_9 = VAR_7->md_size_sect - VAR_7->bm_offset;
 }


 if (VAR_7->meta_dev_idx >= 0) {
  if (VAR_7->md_size_sect != VAR_1
  || VAR_7->al_offset != VAR_3
  || VAR_7->bm_offset != VAR_3 + VAR_2
  || VAR_7->al_stripes != 1
  || VAR_7->al_stripe_size_4k != VAR_2/8)
   goto err;
 }

 if (VAR_6 < VAR_7->md_size_sect)
  goto err;
 if (VAR_6 - VAR_7->md_size_sect < FUNC_2(VAR_5))
  goto err;


 if ((VAR_8 & 7) || (VAR_8 < VAR_2))
  goto err;



 if (VAR_8 != VAR_7->al_size_4k * VAR_3)
  goto err;


 if (VAR_7->bm_offset & 7)
  goto err;




 if (VAR_9 < (VAR_7->la_size_sect+7)/VAR_3/8/512)
  goto err;

 return 0;

err:
 FUNC_0(VAR_4, "meta data offsets don't make sense: idx=%d "
   "al_s=%u, al_sz4k=%u, al_offset=%d, bm_offset=%d, "
   "md_size_sect=%u, la_size=%llu, md_capacity=%llu\n",
   VAR_7->meta_dev_idx,
   VAR_7->al_stripes, VAR_7->al_stripe_size_4k,
   VAR_7->al_offset, VAR_7->bm_offset, VAR_7->md_size_sect,
   (unsigned long long)VAR_7->la_size_sect,
   (unsigned long long)VAR_6);

 return -VAR_0;
}
