
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct opa_smp {int status; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;
struct hfi1_pportdata {int dummy; } ;
struct hfi1_devdata {struct hfi1_pportdata* pport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct opa_smp*,int,int*,struct ib_device*,int,int*,int) ;
 struct hfi1_devdata* FUNC_3 (struct ib_device*) ;
 int FUNC_4 (struct hfi1_pportdata*) ;
 int FUNC_5 (struct ib_mad_hdr*) ;
 int FUNC_6 (struct hfi1_devdata*,void*) ;
 scalar_t__ FUNC_7 (size_t,int) ;

__attribute__((used)) static int FUNC_8(struct opa_smp *VAR_3, u32 VAR_4, u8 *VAR_5,
        struct ib_device *VAR_6, u8 VAR_7,
        u32 *VAR_8, u32 VAR_9)
{
 u32 VAR_10 = FUNC_1(VAR_4);
 int VAR_11 = FUNC_0(VAR_4);
 struct hfi1_devdata *VAR_12 = FUNC_3(VAR_6);
 void *VAR_13 = (void *)VAR_5;
 struct hfi1_pportdata *VAR_14;
 int VAR_15;






 size_t VAR_16 = 4 * sizeof(u64);

 if (VAR_10 != 1 || VAR_11 || FUNC_7(VAR_16, VAR_9)) {
  VAR_3->status |= VAR_2;
  return FUNC_5((struct ib_mad_hdr *)VAR_3);
 }


 VAR_14 = VAR_12->pport + (VAR_7 - 1);
 VAR_15 = FUNC_4(VAR_14);




 if (!VAR_11 &&
     (VAR_15 == VAR_1 || VAR_15 == VAR_0)) {
  VAR_3->status |= VAR_2;
  return FUNC_5((struct ib_mad_hdr *)VAR_3);
 }

 FUNC_6(VAR_12, VAR_13);

 return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
     VAR_9);
}
