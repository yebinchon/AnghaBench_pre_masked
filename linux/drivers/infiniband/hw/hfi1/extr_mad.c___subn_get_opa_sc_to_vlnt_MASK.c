
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
 int FUNC_0 (int) ;
 struct hfi1_devdata* FUNC_1 (struct ib_device*) ;
 int FUNC_2 (struct hfi1_pportdata*,int ,void*) ;
 int FUNC_3 (struct ib_mad_hdr*) ;
 scalar_t__ FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct opa_smp *VAR_2, u32 VAR_3, u8 *VAR_4,
         struct ib_device *VAR_5, u8 VAR_6,
         u32 *VAR_7, u32 VAR_8)
{
 u32 VAR_9 = FUNC_0(VAR_3);
 struct hfi1_devdata *VAR_10 = FUNC_1(VAR_5);
 struct hfi1_pportdata *VAR_11;
 void *VAR_12 = (void *)VAR_4;
 int VAR_13 = sizeof(struct sc2vlnt);

 if (VAR_9 != 1 || FUNC_4(VAR_13, VAR_8)) {
  VAR_2->status |= VAR_1;
  return FUNC_3((struct ib_mad_hdr *)VAR_2);
 }

 VAR_11 = VAR_10->pport + (VAR_6 - 1);

 FUNC_2(VAR_11, VAR_0, VAR_12);

 if (VAR_7)
  *VAR_7 += VAR_13;

 return FUNC_3((struct ib_mad_hdr *)VAR_2);
}
