
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sc2vlnt {int dummy; } ;
struct opa_smp {int status; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;
struct hfi1_pportdata {int dummy; } ;
struct hfi1_devdata {struct hfi1_pportdata* pport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct opa_smp*,int,int*,struct ib_device*,int,int*,int) ;
 struct hfi1_devdata* FUNC_2 (struct ib_device*) ;
 int FUNC_3 (struct hfi1_pportdata*) ;
 int FUNC_4 (struct hfi1_pportdata*,int ,void*) ;
 int FUNC_5 (struct ib_mad_hdr*) ;
 scalar_t__ FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct opa_smp *VAR_4, u32 VAR_5, u8 *VAR_6,
         struct ib_device *VAR_7, u8 VAR_8,
         u32 *VAR_9, u32 VAR_10)
{
 u32 VAR_11 = FUNC_0(VAR_5);
 struct hfi1_devdata *VAR_12 = FUNC_2(VAR_7);
 struct hfi1_pportdata *VAR_13;
 void *VAR_14 = (void *)VAR_6;
 int VAR_15;
 int VAR_16 = sizeof(struct sc2vlnt);

 if (VAR_11 != 1 || FUNC_6(VAR_16, VAR_10)) {
  VAR_4->status |= VAR_3;
  return FUNC_5((struct ib_mad_hdr *)VAR_4);
 }


 VAR_13 = VAR_12->pport + (VAR_8 - 1);
 VAR_15 = FUNC_3(VAR_13);
 if (VAR_15 == VAR_2 || VAR_15 == VAR_1) {
  VAR_4->status |= VAR_3;
  return FUNC_5((struct ib_mad_hdr *)VAR_4);
 }

 VAR_13 = VAR_12->pport + (VAR_8 - 1);

 FUNC_4(VAR_13, VAR_0, VAR_14);

 return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_9, VAR_10);
}
