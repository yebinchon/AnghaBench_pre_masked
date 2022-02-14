
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psb_intel_sdvo_dtd {int part2; int part1; } ;
struct psb_intel_sdvo {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct psb_intel_sdvo*,int ,int *,int) ;

__attribute__((used)) static bool FUNC_2(struct psb_intel_sdvo *VAR_2,
        struct psb_intel_sdvo_dtd *VAR_3)
{
 FUNC_0(sizeof(VAR_3->part1) != 8);
 FUNC_0(sizeof(VAR_3->part2) != 8);
 return FUNC_1(VAR_2, VAR_0,
        &VAR_3->part1, sizeof(VAR_3->part1)) &&
  FUNC_1(VAR_2, VAR_1,
         &VAR_3->part2, sizeof(VAR_3->part2));
}
