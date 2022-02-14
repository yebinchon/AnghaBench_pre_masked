
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
struct vmctx {int dummy; } ;
struct vm_guest_paging {int cpl; int cpu_mode; } ;
struct seg_desc {int access; int limit; int base; } ;
struct iovec {int dummy; } ;


 void* FUNC_0 (struct vmctx*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct vmctx*,int,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct iovec*) ;
 int FUNC_5 (struct vmctx*,int,int ,void*,int) ;
 scalar_t__ FUNC_6 (int ,int,void*,void*,void*) ;
 scalar_t__ FUNC_7 (int ,int ,struct seg_desc*,int,int,int,int ,void**) ;
 int FUNC_8 (struct vmctx*,int,struct vm_guest_paging*,void*,int,int ,struct iovec*,int ,int*) ;
 int FUNC_9 (struct vmctx*,int,int*,struct iovec*,int) ;
 int FUNC_10 (struct vmctx*,int,int ,int *,int *,int *) ;
 int FUNC_11 (struct vmctx*,int,int) ;

__attribute__((used)) static int
FUNC_12(struct vmctx *VAR_8, int VAR_9, struct vm_guest_paging *VAR_10,
    int VAR_11, uint32_t VAR_12, int *VAR_13)
{
 struct iovec VAR_14[2];
 struct seg_desc VAR_15;
 int VAR_16, VAR_17, VAR_18;
 uint64_t VAR_19, VAR_20, VAR_21;
 uint32_t VAR_22;
 uint16_t VAR_23;

 *VAR_13 = 0;

 VAR_20 = FUNC_0(VAR_8, VAR_9, VAR_4);
 VAR_21 = FUNC_0(VAR_8, VAR_9, VAR_5);
 VAR_23 = FUNC_0(VAR_8, VAR_9, VAR_7);

 VAR_18 = FUNC_10(VAR_8, VAR_9, VAR_7, &VAR_15.base,
     &VAR_15.limit, &VAR_15.access);
 FUNC_3(VAR_18 == 0);






 if (VAR_11 == VAR_2 || VAR_11 == VAR_3)
  VAR_17 = 4;
 else
  VAR_17 = 2;






 if (FUNC_1(VAR_15.access))
  VAR_16 = 4;
 else
  VAR_16 = 2;

 VAR_22 = FUNC_0(VAR_8, VAR_9, VAR_6);
 VAR_22 -= VAR_17;

 if (FUNC_7(VAR_10->cpu_mode, VAR_7,
     &VAR_15, VAR_22, VAR_17, VAR_16, VAR_1, &VAR_19)) {
  FUNC_5(VAR_8, VAR_9, VAR_0, VAR_23, 1);
  *VAR_13 = 1;
  return (0);
 }

 if (FUNC_6(VAR_10->cpl, VAR_17, VAR_20, VAR_21, VAR_19)) {
  FUNC_11(VAR_8, VAR_9, 1);
  *VAR_13 = 1;
  return (0);
 }

 VAR_18 = FUNC_8(VAR_8, VAR_9, VAR_10, VAR_19, VAR_17, VAR_1,
     VAR_14, FUNC_4(VAR_14), VAR_13);
 if (VAR_18 || *VAR_13)
  return (VAR_18);

 FUNC_9(VAR_8, VAR_9, &VAR_12, VAR_14, VAR_17);
 FUNC_2(VAR_8, VAR_9, VAR_6, VAR_22);
 return (0);
}
