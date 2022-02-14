
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_device {int this_bdev; } ;
typedef int sector_t ;
typedef enum update_sync_bits_mode { ____Placeholder_update_sync_bits_mode } update_sync_bits_mode ;


 int VAR_0 ;
 unsigned long FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (struct drbd_device*,char*,int ,unsigned long long,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct drbd_device*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct drbd_device*) ;
 scalar_t__ FUNC_7 (int) ;
 unsigned long FUNC_8 (struct drbd_device*,unsigned long,unsigned long,int) ;

int FUNC_9(struct drbd_device *VAR_4, sector_t VAR_5, int VAR_6,
  enum update_sync_bits_mode VAR_7)
{

 unsigned long VAR_8, VAR_9, VAR_10;
 unsigned long VAR_11 = 0;
 sector_t VAR_12, VAR_13;


 if ((VAR_7 == VAR_2) && VAR_6 == 0)
  return 0;

 if (!FUNC_5(VAR_6)) {
  FUNC_1(VAR_4, "%s: sector=%llus size=%d nonsense!\n",
    VAR_3[VAR_7],
    (unsigned long long)VAR_5, VAR_6);
  return 0;
 }

 if (!FUNC_4(VAR_4))
  return 0;

 VAR_13 = FUNC_2(VAR_4->this_bdev);
 VAR_12 = VAR_5 + (VAR_6 >> 9) - 1;

 if (!FUNC_3(VAR_5 < VAR_13))
  goto out;
 if (!FUNC_3(VAR_12 < VAR_13))
  VAR_12 = VAR_13 - 1;

 VAR_10 = FUNC_0(VAR_13-1);

 if (VAR_7 == VAR_1) {


  if (FUNC_7(VAR_12 < VAR_0-1))
   goto out;
  if (FUNC_7(VAR_12 == (VAR_13-1)))
   VAR_9 = VAR_10;
  else
   VAR_9 = FUNC_0(VAR_12 - (VAR_0-1));
  VAR_8 = FUNC_0(VAR_5 + VAR_0-1);
 } else {


  VAR_8 = FUNC_0(VAR_5);
  VAR_9 = FUNC_0(VAR_12);
 }

 VAR_11 = FUNC_8(VAR_4, VAR_8, VAR_9, VAR_7);
out:
 FUNC_6(VAR_4);
 return VAR_11;
}
