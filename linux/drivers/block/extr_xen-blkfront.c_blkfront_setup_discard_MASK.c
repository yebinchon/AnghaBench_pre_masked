
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blkfront_info {int feature_discard; unsigned int discard_granularity; unsigned int discard_alignment; int feature_secdiscard; TYPE_1__* xbdev; } ;
struct TYPE_2__ {int otherend; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,char*,unsigned int*,char*,char*,unsigned int*,int *) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct blkfront_info *VAR_1)
{
 int VAR_2;
 unsigned int VAR_3;
 unsigned int VAR_4;

 VAR_1->feature_discard = 1;
 VAR_2 = FUNC_0(VAR_0, VAR_1->xbdev->otherend,
  "discard-granularity", "%u", &VAR_3,
  "discard-alignment", "%u", &VAR_4,
  ((void*)0));
 if (!VAR_2) {
  VAR_1->discard_granularity = VAR_3;
  VAR_1->discard_alignment = VAR_4;
 }
 VAR_1->feature_secdiscard =
  !!FUNC_1(VAR_1->xbdev->otherend, "discard-secure",
           0);
}
