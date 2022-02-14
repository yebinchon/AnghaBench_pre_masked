
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcss_segment {int do_nonshared; scalar_t__ vm_segtype; unsigned long start_addr; unsigned long end; int dcss_name; int list; struct dcss_segment* res; int flags; int ref_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int ,unsigned long*,unsigned long*) ;
 int FUNC_1 (unsigned long) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct dcss_segment*) ;
 int FUNC_3 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*,...) ;
 int VAR_10 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct dcss_segment*) ;
 scalar_t__ FUNC_10 (int *,struct dcss_segment*) ;
 struct dcss_segment* FUNC_11 (char*) ;
 int FUNC_12 (unsigned long,unsigned long) ;

int
FUNC_13 (char *VAR_11, int VAR_12)
{
 struct dcss_segment *VAR_13;
 unsigned long VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18;

 VAR_14 = VAR_15 = 0;
 FUNC_4(&VAR_6);
 VAR_13 = FUNC_11 (VAR_11);
 if (VAR_13 == ((void*)0)) {
  VAR_17 = -VAR_2;
  goto out_unlock;
 }
 if (VAR_12 == VAR_13->do_nonshared) {
  FUNC_6("DCSS %s is already in the requested access "
   "mode\n", VAR_11);
  VAR_17 = 0;
  goto out_unlock;
 }
 if (FUNC_8(&VAR_13->ref_count) != 1) {
  FUNC_7("DCSS %s is in use and cannot be reloaded\n", VAR_11);
  VAR_17 = -VAR_0;
  goto out_unlock;
 }
 FUNC_9(VAR_13->res);
 if (VAR_12)
  VAR_13->res->flags &= ~VAR_3;
 else
  if (VAR_13->vm_segtype == VAR_5 ||
      VAR_13->vm_segtype == VAR_4)
   VAR_13->res->flags |= VAR_3;

 if (FUNC_10(&VAR_7, VAR_13->res)) {
  FUNC_7("DCSS %s overlaps with used memory resources and cannot be reloaded\n",
   VAR_11);
  VAR_17 = -VAR_1;
  FUNC_2(VAR_13->res);
  goto out_del_mem;
 }

 FUNC_0(&VAR_10, VAR_13->dcss_name, &VAR_16, &VAR_16);
 if (VAR_12)
  VAR_18 = FUNC_0(&VAR_8, VAR_13->dcss_name,
    &VAR_14, &VAR_15);
 else
  VAR_18 = FUNC_0(&VAR_9, VAR_13->dcss_name,
    &VAR_14, &VAR_15);
 if (VAR_18 < 0) {
  VAR_17 = VAR_18;
  goto out_del_res;
 }
 if (VAR_18 > 1) {
  FUNC_7("Reloading DCSS %s failed with rc=%ld\n",
   VAR_11, VAR_15);
  VAR_17 = FUNC_1(VAR_15);
  goto out_del_res;
 }
 VAR_13->start_addr = VAR_14;
 VAR_13->end = VAR_15;
 VAR_13->do_nonshared = VAR_12;
 VAR_17 = 0;
 goto out_unlock;
 out_del_res:
 FUNC_9(VAR_13->res);
 FUNC_2(VAR_13->res);
 out_del_mem:
 FUNC_12(VAR_13->start_addr, VAR_13->end - VAR_13->start_addr + 1);
 FUNC_3(&VAR_13->list);
 FUNC_0(&VAR_10, VAR_13->dcss_name, &VAR_16, &VAR_16);
 FUNC_2(VAR_13);
 out_unlock:
 FUNC_5(&VAR_6);
 return VAR_17;
}
