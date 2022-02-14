
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_blkif_ring {int persistent_gnt_in_use; } ;
struct persistent_gnt {int active; int last_used; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct xen_blkif_ring *VAR_1,
                               struct persistent_gnt *VAR_2)
{
 if (!VAR_2->active)
  FUNC_1("freeing a grant already unused\n");
 VAR_2->last_used = VAR_0;
 VAR_2->active = 0;
 FUNC_0(&VAR_1->persistent_gnt_in_use);
}
