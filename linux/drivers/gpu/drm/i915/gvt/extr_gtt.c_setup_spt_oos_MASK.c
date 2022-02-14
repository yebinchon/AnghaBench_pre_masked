
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu_oos_page {int id; int list; int vm_list; void* mem; } ;
struct intel_gvt_gtt {int oos_page_free_list_head; int oos_page_use_list_head; } ;
struct intel_gvt {struct intel_gvt_gtt gtt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct intel_gvt*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct intel_vgpu_oos_page*) ;
 struct intel_vgpu_oos_page* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct intel_gvt *VAR_3)
{
 struct intel_gvt_gtt *VAR_4 = &VAR_3->gtt;
 struct intel_vgpu_oos_page *VAR_5;
 int VAR_6;
 int VAR_7;

 FUNC_0(&VAR_4->oos_page_free_list_head);
 FUNC_0(&VAR_4->oos_page_use_list_head);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_1);
  if (!VAR_5) {
   VAR_7 = -VAR_0;
   goto fail;
  }
  VAR_5->mem = (void *)FUNC_1(VAR_1, 0);
  if (!VAR_5->mem) {
   VAR_7 = -VAR_0;
   FUNC_4(VAR_5);
   goto fail;
  }

  FUNC_0(&VAR_5->list);
  FUNC_0(&VAR_5->vm_list);
  VAR_5->id = VAR_6;
  FUNC_6(&VAR_5->list, &VAR_4->oos_page_free_list_head);
 }

 FUNC_3("%d oos pages preallocated\n", VAR_6);

 return 0;
fail:
 FUNC_2(VAR_3);
 return VAR_7;
}
