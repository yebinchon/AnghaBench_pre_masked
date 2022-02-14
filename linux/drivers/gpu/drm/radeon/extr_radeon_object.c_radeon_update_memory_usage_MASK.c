
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct radeon_device {int vram_usage; int gtt_usage; } ;
struct TYPE_2__ {scalar_t__ num_pages; } ;
struct radeon_bo {TYPE_1__ tbo; struct radeon_device* rdev; } ;


 int VAR_0 ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct radeon_bo *VAR_1,
           unsigned VAR_2, int VAR_3)
{
 struct radeon_device *VAR_4 = VAR_1->rdev;
 u64 VAR_5 = (u64)VAR_1->tbo.num_pages << VAR_0;

 switch (VAR_2) {
 case 129:
  if (VAR_3 > 0)
   FUNC_0(VAR_5, &VAR_4->gtt_usage);
  else
   FUNC_1(VAR_5, &VAR_4->gtt_usage);
  break;
 case 128:
  if (VAR_3 > 0)
   FUNC_0(VAR_5, &VAR_4->vram_usage);
  else
   FUNC_1(VAR_5, &VAR_4->vram_usage);
  break;
 }
}
