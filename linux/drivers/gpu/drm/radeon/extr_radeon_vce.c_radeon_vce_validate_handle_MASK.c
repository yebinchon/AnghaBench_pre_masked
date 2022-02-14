
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_cs_parser {scalar_t__ filp; TYPE_2__* rdev; } ;
struct TYPE_3__ {scalar_t__* filp; scalar_t__* img_size; int * handles; } ;
struct TYPE_4__ {TYPE_1__ vce; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct radeon_cs_parser *VAR_2,
          uint32_t VAR_3, bool *VAR_4)
{
 unsigned VAR_5;

 *VAR_4 = 0;


 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  if (FUNC_2(&VAR_2->rdev->vce.handles[VAR_5]) == VAR_3) {
   if (VAR_2->rdev->vce.filp[VAR_5] != VAR_2->filp) {
    FUNC_0("VCE handle collision detected!\n");
    return -VAR_0;
   }
   return VAR_5;
  }
 }


 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  if (!FUNC_1(&VAR_2->rdev->vce.handles[VAR_5], 0, VAR_3)) {
   VAR_2->rdev->vce.filp[VAR_5] = VAR_2->filp;
   VAR_2->rdev->vce.img_size[VAR_5] = 0;
   *VAR_4 = 1;
   return VAR_5;
  }
 }

 FUNC_0("No more free VCE handles!\n");
 return -VAR_0;
}
