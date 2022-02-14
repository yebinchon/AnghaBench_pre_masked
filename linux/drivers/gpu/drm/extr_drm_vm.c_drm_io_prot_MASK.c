
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_start; scalar_t__ vm_end; int vm_flags; } ;
struct drm_local_map {scalar_t__ type; int flags; } ;
typedef int pgprot_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static pgprot_t FUNC_5(struct drm_local_map *VAR_2,
       struct vm_area_struct *VAR_3)
{
 pgprot_t VAR_4 = FUNC_4(VAR_3->vm_flags);


 VAR_4 = FUNC_1(VAR_4);



 if (VAR_2->type == VAR_0 && !(VAR_2->flags & VAR_1))
  VAR_4 = FUNC_2(VAR_4);
 else
  VAR_4 = FUNC_3(VAR_4);
 return VAR_4;
}
