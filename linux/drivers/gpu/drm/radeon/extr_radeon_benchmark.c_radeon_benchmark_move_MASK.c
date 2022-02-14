
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct radeon_device {TYPE_2__* asic; } ;
struct TYPE_7__ {int resv; } ;
struct TYPE_8__ {TYPE_3__ base; } ;
struct radeon_bo {TYPE_4__ tbo; } ;
struct TYPE_5__ {scalar_t__ blit; scalar_t__ dma; } ;
struct TYPE_6__ {TYPE_1__ copy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct radeon_device*,unsigned int,int ,int ,int ,int,int ) ;
 int FUNC_3 (int,unsigned int,int,unsigned int,unsigned int,char*) ;
 int FUNC_4 (struct radeon_device*,unsigned int,int ,int,unsigned int,int ,int *,int *,struct radeon_bo**) ;
 int FUNC_5 (struct radeon_bo*,unsigned int,int *) ;
 int FUNC_6 (struct radeon_bo*,int) ;
 int FUNC_7 (struct radeon_bo*) ;
 int FUNC_8 (struct radeon_bo**) ;
 int FUNC_9 (struct radeon_bo*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct radeon_device *VAR_4, unsigned VAR_5,
      unsigned VAR_6, unsigned VAR_7)
{
 struct radeon_bo *VAR_8 = ((void*)0);
 struct radeon_bo *VAR_9 = ((void*)0);
 uint64_t VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;

 VAR_13 = VAR_3;
 VAR_12 = FUNC_4(VAR_4, VAR_5, VAR_0, 1, VAR_6, 0, ((void*)0), ((void*)0), &VAR_9);
 if (VAR_12) {
  goto out_cleanup;
 }
 VAR_12 = FUNC_6(VAR_9, 0);
 if (FUNC_10(VAR_12 != 0))
  goto out_cleanup;
 VAR_12 = FUNC_5(VAR_9, VAR_6, &VAR_10);
 FUNC_9(VAR_9);
 if (VAR_12) {
  goto out_cleanup;
 }
 VAR_12 = FUNC_4(VAR_4, VAR_5, VAR_0, 1, VAR_7, 0, ((void*)0), ((void*)0), &VAR_8);
 if (VAR_12) {
  goto out_cleanup;
 }
 VAR_12 = FUNC_6(VAR_8, 0);
 if (FUNC_10(VAR_12 != 0))
  goto out_cleanup;
 VAR_12 = FUNC_5(VAR_8, VAR_7, &VAR_11);
 FUNC_9(VAR_8);
 if (VAR_12) {
  goto out_cleanup;
 }

 if (VAR_4->asic->copy.dma) {
  VAR_14 = FUNC_2(VAR_4, VAR_5, VAR_10, VAR_11,
      VAR_2, VAR_13,
      VAR_8->tbo.base.resv);
  if (VAR_14 < 0)
   goto out_cleanup;
  if (VAR_14 > 0)
   FUNC_3(VAR_13, VAR_5, VAR_14,
           VAR_6, VAR_7, "dma");
 }

 if (VAR_4->asic->copy.blit) {
  VAR_14 = FUNC_2(VAR_4, VAR_5, VAR_10, VAR_11,
      VAR_1, VAR_13,
      VAR_8->tbo.base.resv);
  if (VAR_14 < 0)
   goto out_cleanup;
  if (VAR_14 > 0)
   FUNC_3(VAR_13, VAR_5, VAR_14,
           VAR_6, VAR_7, "blit");
 }

out_cleanup:
 if (VAR_9) {
  VAR_12 = FUNC_6(VAR_9, 0);
  if (FUNC_1(VAR_12 == 0)) {
   FUNC_7(VAR_9);
   FUNC_9(VAR_9);
  }
  FUNC_8(&VAR_9);
 }
 if (VAR_8) {
  VAR_12 = FUNC_6(VAR_8, 0);
  if (FUNC_1(VAR_12 == 0)) {
   FUNC_7(VAR_8);
   FUNC_9(VAR_8);
  }
  FUNC_8(&VAR_8);
 }

 if (VAR_12) {
  FUNC_0("Error while benchmarking BO move.\n");
 }
}
