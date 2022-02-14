
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blkfront_info {int feature_flush; int feature_fua; int feature_persistent; unsigned int max_indirect_segments; TYPE_1__* xbdev; } ;
struct TYPE_2__ {int otherend; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct blkfront_info*) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 unsigned int VAR_4 ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_5(struct blkfront_info *VAR_5)
{
 unsigned int VAR_6;

 VAR_5->feature_flush = 0;
 VAR_5->feature_fua = 0;
 if (FUNC_4(VAR_5->xbdev->otherend, "feature-barrier", 0)) {
  VAR_5->feature_flush = 1;
  VAR_5->feature_fua = 1;
 }





 if (FUNC_4(VAR_5->xbdev->otherend, "feature-flush-cache",
     0)) {
  VAR_5->feature_flush = 1;
  VAR_5->feature_fua = 0;
 }

 if (FUNC_4(VAR_5->xbdev->otherend, "feature-discard", 0))
  FUNC_0(VAR_5);

 VAR_5->feature_persistent =
  !!FUNC_4(VAR_5->xbdev->otherend,
           "feature-persistent", 0);

 VAR_6 = FUNC_4(VAR_5->xbdev->otherend,
     "feature-max-indirect-segments", 0);
 if (VAR_6 > VAR_4)
  VAR_6 = VAR_4;
 if (VAR_6 <= VAR_0)
  VAR_6 = 0;
 VAR_5->max_indirect_segments = VAR_6;

 if (VAR_5->feature_persistent) {
  FUNC_1(&VAR_2);
  FUNC_3(&VAR_3, VAR_1 * 10);
  FUNC_2(&VAR_2);
 }
}
