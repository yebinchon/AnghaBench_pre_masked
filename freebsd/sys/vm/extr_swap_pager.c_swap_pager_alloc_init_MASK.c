
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vm_ooffset_t ;
typedef TYPE_3__* vm_object_t ;
struct ucred {int dummy; } ;
struct TYPE_6__ {scalar_t__ writemappings; } ;
struct TYPE_7__ {TYPE_1__ swp; } ;
struct TYPE_8__ {scalar_t__ charge; struct ucred* cred; void* handle; TYPE_2__ un_pager; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ucred*) ;
 int FUNC_2 (scalar_t__,struct ucred*) ;
 TYPE_3__* FUNC_3 (int ,int ) ;

__attribute__((used)) static vm_object_t
FUNC_4(void *VAR_2, struct ucred *VAR_3, vm_ooffset_t VAR_4,
    vm_ooffset_t VAR_5)
{
 vm_object_t VAR_6;

 if (VAR_3 != ((void*)0)) {
  if (!FUNC_2(VAR_4, VAR_3))
   return (((void*)0));
  FUNC_1(VAR_3);
 }






 VAR_6 = FUNC_3(VAR_0, FUNC_0(VAR_5 +
     VAR_1 + VAR_4));

 VAR_6->un_pager.swp.writemappings = 0;
 VAR_6->handle = VAR_2;
 if (VAR_3 != ((void*)0)) {
  VAR_6->cred = VAR_3;
  VAR_6->charge = VAR_4;
 }
 return (VAR_6);
}
