
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sseu_dev_info {int max_slices; int max_subslices; int * subslice_mask; } ;
struct drm_printer {int dummy; } ;


 int FUNC_0 (struct drm_printer*,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sseu_dev_info const*,int) ;
 int FUNC_3 (struct sseu_dev_info const*,int,int) ;

void FUNC_4(const struct sseu_dev_info *VAR_0,
         struct drm_printer *VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_0->max_slices == 0) {
  FUNC_0(VAR_1, "Unavailable\n");
  return;
 }

 for (VAR_2 = 0; VAR_2 < VAR_0->max_slices; VAR_2++) {
  FUNC_0(VAR_1, "slice%d: %u subslice(s) (0x%hhx):\n",
      VAR_2, FUNC_2(VAR_0, VAR_2),
      VAR_0->subslice_mask[VAR_2]);

  for (VAR_3 = 0; VAR_3 < VAR_0->max_subslices; VAR_3++) {
   u16 VAR_4 = FUNC_3(VAR_0, VAR_2, VAR_3);

   FUNC_0(VAR_1, "\tsubslice%d: %u EUs (0x%hx)\n",
       VAR_3, FUNC_1(VAR_4), VAR_4);
  }
 }
}
