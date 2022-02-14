
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct radeon_device {int ddev; scalar_t__ needs_reset; int fence_queue; } ;


 long VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct radeon_device*,int *) ;
 int FUNC_1 (struct radeon_device*,int) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,int,int ) ;
 long FUNC_5 (int ,int,long) ;
 long FUNC_6 (int ,int,long) ;

__attribute__((used)) static long FUNC_7(struct radeon_device *VAR_2,
       u64 *VAR_3, bool VAR_4,
       long VAR_5)
{
 long VAR_6;
 int VAR_7;

 if (FUNC_0(VAR_2, VAR_3))
  return VAR_5;


 for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
  if (!VAR_3[VAR_7])
   continue;

  FUNC_3(VAR_2->ddev, VAR_7, VAR_3[VAR_7]);
  FUNC_1(VAR_2, VAR_7);
 }

 if (VAR_4) {
  VAR_6 = FUNC_5(VAR_2->fence_queue, (
   FUNC_0(VAR_2, VAR_3)
    || VAR_2->needs_reset), VAR_5);
 } else {
  VAR_6 = FUNC_6(VAR_2->fence_queue, (
   FUNC_0(VAR_2, VAR_3)
    || VAR_2->needs_reset), VAR_5);
 }

 if (VAR_2->needs_reset)
  VAR_6 = -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
  if (!VAR_3[VAR_7])
   continue;

  FUNC_2(VAR_2, VAR_7);
  FUNC_4(VAR_2->ddev, VAR_7, VAR_3[VAR_7]);
 }

 return VAR_6;
}
