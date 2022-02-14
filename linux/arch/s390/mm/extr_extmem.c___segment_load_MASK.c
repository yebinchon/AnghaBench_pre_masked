
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct dcss_segment {unsigned long start_addr; unsigned long end; int flags; unsigned long start; char* res_name; char* name; int vm_segtype; int do_nonshared; struct dcss_segment* res; int list; int ref_count; int dcss_name; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,int ,unsigned long*,unsigned long*) ;
 int FUNC_2 (unsigned long) ;
 int VAR_10 ;
 int FUNC_3 (char*,int ) ;
 int VAR_11 ;
 int FUNC_4 (struct dcss_segment*) ;
 struct dcss_segment* FUNC_5 (int,int) ;
 struct dcss_segment* FUNC_6 (int,int) ;
 int FUNC_7 (int *,int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (char**,int ,int) ;
 int FUNC_9 (char*,char*,void*,void*,int ) ;
 int FUNC_10 (char*,char*,unsigned long) ;
 int VAR_14 ;
 int FUNC_11 (struct dcss_segment*) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (struct dcss_segment*) ;
 scalar_t__ FUNC_14 (int *,struct dcss_segment*) ;
 scalar_t__ FUNC_15 (struct dcss_segment*) ;
 int * VAR_15 ;
 int FUNC_16 (char*,char*,int) ;
 int FUNC_17 (unsigned long,unsigned long) ;
 int FUNC_18 (unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_19 (char *VAR_16, int VAR_17, unsigned long *VAR_18, unsigned long *VAR_19)
{
 unsigned long VAR_20, VAR_21, VAR_22;
 struct dcss_segment *VAR_23;
 int VAR_24, VAR_25;

 VAR_20 = VAR_21 = 0;
 VAR_23 = FUNC_5(sizeof(*VAR_23), VAR_3 | VAR_2);
 if (VAR_23 == ((void*)0)) {
  VAR_24 = -VAR_1;
  goto out;
 }
 FUNC_3 (VAR_16, VAR_23->dcss_name);
 VAR_24 = FUNC_11 (VAR_23);
 if (VAR_24 < 0)
  goto out_free;

 if (FUNC_15(VAR_23)) {
  VAR_24 = -VAR_0;
  goto out_free;
 }

 VAR_24 = FUNC_17(VAR_23->start_addr, VAR_23->end - VAR_23->start_addr + 1);

 if (VAR_24)
  goto out_free;

 VAR_23->res = FUNC_6(sizeof(struct resource), VAR_3);
 if (VAR_23->res == ((void*)0)) {
  VAR_24 = -VAR_1;
  goto out_shared;
 }
 VAR_23->res->flags = VAR_4 | VAR_5;
 VAR_23->res->start = VAR_23->start_addr;
 VAR_23->res->end = VAR_23->end;
 FUNC_8(&VAR_23->res_name, VAR_23->dcss_name, 8);
 FUNC_0(VAR_23->res_name, 8);
 VAR_23->res_name[8] = '\0';
 FUNC_16(VAR_23->res_name, " (DCSS)", sizeof(VAR_23->res_name));
 VAR_23->res->name = VAR_23->res_name;
 VAR_24 = VAR_23->vm_segtype;
 if (VAR_24 == VAR_8 ||
     ((VAR_24 == VAR_9 || VAR_24 == VAR_7) && !VAR_17))
  VAR_23->res->flags |= VAR_6;
 if (FUNC_14(&VAR_11, VAR_23->res)) {
  VAR_24 = -VAR_0;
  FUNC_4(VAR_23->res);
  goto out_shared;
 }

 if (VAR_17)
  VAR_25 = FUNC_1(&VAR_12, VAR_23->dcss_name,
    &VAR_20, &VAR_21);
 else
  VAR_25 = FUNC_1(&VAR_13, VAR_23->dcss_name,
    &VAR_20, &VAR_21);
 if (VAR_25 < 0) {
  FUNC_1(&VAR_14, VAR_23->dcss_name,
    &VAR_22, &VAR_22);
  VAR_24 = VAR_25;
  goto out_resource;
 }
 if (VAR_25 > 1) {
  FUNC_10("Loading DCSS %s failed with rc=%ld\n", VAR_16, VAR_21);
  VAR_24 = FUNC_2(VAR_21);
  FUNC_1(&VAR_14, VAR_23->dcss_name,
    &VAR_22, &VAR_22);
  goto out_resource;
 }
 VAR_23->start_addr = VAR_20;
 VAR_23->end = VAR_21;
 VAR_23->do_nonshared = VAR_17;
 FUNC_12(&VAR_23->ref_count, 1);
 FUNC_7(&VAR_23->list, &VAR_10);
 *VAR_18 = VAR_23->start_addr;
 *VAR_19 = VAR_23->end;
 if (VAR_17)
  FUNC_9("DCSS %s of range %px to %px and type %s loaded as "
   "exclusive-writable\n", VAR_16, (void*) VAR_23->start_addr,
   (void*) VAR_23->end, VAR_15[VAR_23->vm_segtype]);
 else {
  FUNC_9("DCSS %s of range %px to %px and type %s loaded in "
   "shared access mode\n", VAR_16, (void*) VAR_23->start_addr,
   (void*) VAR_23->end, VAR_15[VAR_23->vm_segtype]);
 }
 goto out;
 out_resource:
 FUNC_13(VAR_23->res);
 FUNC_4(VAR_23->res);
 out_shared:
 FUNC_18(VAR_23->start_addr, VAR_23->end - VAR_23->start_addr + 1);
 out_free:
 FUNC_4(VAR_23);
 out:
 return VAR_24;
}
