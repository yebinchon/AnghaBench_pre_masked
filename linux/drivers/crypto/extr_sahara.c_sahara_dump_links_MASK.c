
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sahara_dev {int device; TYPE_1__** hw_link; int * hw_phys_link; } ;
struct TYPE_2__ {int next; int p; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static void FUNC_2(struct sahara_dev *VAR_2)
{
 int VAR_3;

 if (!FUNC_0(VAR_0))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  FUNC_1(VAR_2->device, "Link (%d) (%pad):\n",
   VAR_3, &VAR_2->hw_phys_link[VAR_3]);
  FUNC_1(VAR_2->device, "\tlen = %u\n", VAR_2->hw_link[VAR_3]->len);
  FUNC_1(VAR_2->device, "\tp = 0x%08x\n", VAR_2->hw_link[VAR_3]->p);
  FUNC_1(VAR_2->device, "\tnext = 0x%08x\n",
   VAR_2->hw_link[VAR_3]->next);
 }
 FUNC_1(VAR_2->device, "\n");
}
