
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct meta_data_on_disk {int al_stripe_size_4k; int al_stripes; } ;
struct drbd_md {int al_stripe_size_4k; int al_stripes; int al_size_4k; } ;
struct drbd_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drbd_device*,char*,int,int) ;

__attribute__((used)) static int FUNC_2(struct drbd_device *VAR_2,
  struct meta_data_on_disk *VAR_3,
  struct drbd_md *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_3->al_stripes);
 u32 VAR_6 = FUNC_0(VAR_3->al_stripe_size_4k);
 u64 VAR_7;


 if (VAR_5 == 0 && VAR_6 == 0) {
  VAR_5 = 1;
  VAR_6 = VAR_1/8;
 }




 if (VAR_5 == 0 || VAR_6 == 0)
  goto err;

 VAR_7 = (u64)VAR_5 * VAR_6;





 if (VAR_7 > (16 * 1024 * 1024/4))
  goto err;



 if (VAR_7 < VAR_1/8)
  goto err;

 VAR_4->al_stripe_size_4k = VAR_6;
 VAR_4->al_stripes = VAR_5;
 VAR_4->al_size_4k = VAR_7;

 return 0;
err:
 FUNC_1(VAR_2, "invalid activity log striping: al_stripes=%u, al_stripe_size_4k=%u\n",
   VAR_5, VAR_6);
 return -VAR_0;
}
