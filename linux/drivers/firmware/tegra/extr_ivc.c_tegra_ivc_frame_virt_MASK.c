
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_ivc_header {int dummy; } ;
struct tegra_ivc {unsigned int num_frames; unsigned int frame_size; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void *FUNC_2(struct tegra_ivc *VAR_1,
      struct tegra_ivc_header *VAR_2,
      unsigned int VAR_3)
{
 if (FUNC_1(VAR_3 >= VAR_1->num_frames))
  return FUNC_0(-VAR_0);

 return (void *)(VAR_2 + 1) + VAR_1->frame_size * VAR_3;
}
