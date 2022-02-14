
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct intel_sdvo_dtd {int part2; int part1; } ;
struct intel_sdvo {int dummy; } ;


 scalar_t__ FUNC_0 (struct intel_sdvo*,scalar_t__,int *,int) ;

__attribute__((used)) static bool FUNC_1(struct intel_sdvo *VAR_0, u8 VAR_1,
      struct intel_sdvo_dtd *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, &VAR_2->part1, sizeof(VAR_2->part1)) &&
  FUNC_0(VAR_0, VAR_1 + 1, &VAR_2->part2, sizeof(VAR_2->part2));
}
