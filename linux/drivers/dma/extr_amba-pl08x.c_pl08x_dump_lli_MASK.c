
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pl08x_driver_data {int lli_words; TYPE_2__* adev; TYPE_1__* vd; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ pl080s; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(struct pl08x_driver_data *VAR_5,
      const u32 *VAR_6, int VAR_7)
{
 int VAR_8;

 if (VAR_5->vd->pl080s) {
  FUNC_0(&VAR_5->adev->dev,
   "%-3s %-9s  %-10s %-10s %-10s %-10s %s\n",
   "lli", "", "csrc", "cdst", "clli", "cctl", "cctl2");
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   FUNC_0(&VAR_5->adev->dev,
    "%3d @%p: 0x%08x 0x%08x 0x%08x 0x%08x 0x%08x\n",
    VAR_8, VAR_6, VAR_6[VAR_4],
    VAR_6[VAR_2], VAR_6[VAR_3],
    VAR_6[VAR_1],
    VAR_6[VAR_0]);
   VAR_6 += VAR_5->lli_words;
  }
 } else {
  FUNC_0(&VAR_5->adev->dev,
   "%-3s %-9s  %-10s %-10s %-10s %s\n",
   "lli", "", "csrc", "cdst", "clli", "cctl");
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   FUNC_0(&VAR_5->adev->dev,
    "%3d @%p: 0x%08x 0x%08x 0x%08x 0x%08x\n",
    VAR_8, VAR_6, VAR_6[VAR_4],
    VAR_6[VAR_2], VAR_6[VAR_3],
    VAR_6[VAR_1]);
   VAR_6 += VAR_5->lli_words;
  }
 }
}
