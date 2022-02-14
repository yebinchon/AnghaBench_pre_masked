
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icp_qat_uclo_aedata {unsigned int slice_num; TYPE_1__* ae_slices; } ;
struct TYPE_2__ {int * page; int * region; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct icp_qat_uclo_aedata *VAR_1)
{
 unsigned int VAR_2;

 if (!VAR_1) {
  FUNC_1("QAT: bad argument, ae_data is NULL\n ");
  return -VAR_0;
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->slice_num; VAR_2++) {
  FUNC_0(VAR_1->ae_slices[VAR_2].region);
  VAR_1->ae_slices[VAR_2].region = ((void*)0);
  FUNC_0(VAR_1->ae_slices[VAR_2].page);
  VAR_1->ae_slices[VAR_2].page = ((void*)0);
 }
 return 0;
}
