
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ vm_pindex_t ;
typedef int vm_ooffset_t ;
typedef TYPE_4__* vm_object_t ;
struct ucred {int dummy; } ;
struct sglist {int sg_nseg; TYPE_1__* sg_segs; } ;
struct TYPE_8__ {int sgp_pglist; } ;
struct TYPE_9__ {TYPE_2__ sgp; } ;
struct TYPE_10__ {TYPE_3__ un_pager; int handle; } ;
struct TYPE_7__ {int ss_paddr; int ss_len; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sglist*) ;
 TYPE_4__* FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static vm_object_t
FUNC_5(void *VAR_3, vm_ooffset_t VAR_4, vm_prot_t VAR_5,
    vm_ooffset_t VAR_6, struct ucred *VAR_7)
{
 struct sglist *VAR_8;
 vm_object_t VAR_9;
 vm_pindex_t VAR_10, VAR_11;
 int VAR_12;




 if (VAR_6 & VAR_1)
  return (((void*)0));





 VAR_10 = 0;
 VAR_8 = VAR_3;
 for (VAR_12 = 0; VAR_12 < VAR_8->sg_nseg; VAR_12++) {
  if ((VAR_8->sg_segs[VAR_12].ss_paddr % VAR_2) != 0 ||
      (VAR_8->sg_segs[VAR_12].ss_len % VAR_2) != 0)
   return (((void*)0));
  VAR_10 += VAR_8->sg_segs[VAR_12].ss_len / VAR_2;
 }





 VAR_4 = FUNC_2(VAR_4);
 VAR_11 = FUNC_0(VAR_6) + FUNC_0(VAR_4);
 if (VAR_11 > VAR_10 || VAR_11 < FUNC_0(VAR_6) ||
     VAR_11 < FUNC_0(VAR_4))
  return (((void*)0));
 VAR_9 = FUNC_4(VAR_0, VAR_10);
 VAR_9->handle = FUNC_3(VAR_8);
 FUNC_1(&VAR_9->un_pager.sgp.sgp_pglist);
 return (VAR_9);
}
