
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {int mdev; } ;
struct intel_vgpu {TYPE_1__ vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct intel_vgpu*,unsigned long,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 struct page* FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long,int) ;
 int FUNC_6 (int ,unsigned long*,int,int,unsigned long*) ;

__attribute__((used)) static int FUNC_7(struct intel_vgpu *VAR_5, unsigned long VAR_6,
  unsigned long VAR_7, struct page **VAR_8)
{
 unsigned long VAR_9 = 0;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_10 = FUNC_5(VAR_7, VAR_4) / VAR_4;




 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  unsigned long VAR_13 = VAR_6 + VAR_11;
  unsigned long VAR_14;

  VAR_12 = FUNC_6(FUNC_2(VAR_5->vdev.mdev), &VAR_13, 1,
         VAR_2 | VAR_3, &VAR_14);
  if (VAR_12 != 1) {
   FUNC_1("vfio_pin_pages failed for gfn 0x%lx, ret %d\n",
         VAR_13, VAR_12);
   goto err;
  }

  if (!FUNC_4(VAR_14)) {
   FUNC_1("pfn 0x%lx is not mem backed\n", VAR_14);
   VAR_11++;
   VAR_12 = -VAR_0;
   goto err;
  }

  if (VAR_11 == 0)
   VAR_9 = VAR_14;
  else if (VAR_9 + VAR_11 != VAR_14) {
   FUNC_1("The pages are not continuous\n");
   VAR_12 = -VAR_1;
   VAR_11++;
   goto err;
  }
 }

 *VAR_8 = FUNC_3(VAR_9);
 return 0;
err:
 FUNC_0(VAR_5, VAR_6, VAR_11 * VAR_4);
 return VAR_12;
}
