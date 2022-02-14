
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
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct hfi1_devdata* FUNC_1 (struct ib_device*) ;
 int FUNC_2 (struct hfi1_devdata*,void*) ;
 int FUNC_3 (struct ib_mad_hdr*) ;
 scalar_t__ FUNC_4 (size_t,int) ;

__attribute__((used)) static int FUNC_5(struct opa_smp *VAR_1, u32 VAR_2, u8 *VAR_3,
        struct ib_device *VAR_4, u8 VAR_5,
        u32 *VAR_6, u32 VAR_7)
{
 u32 VAR_8 = FUNC_0(VAR_2);
 struct hfi1_devdata *VAR_9 = FUNC_1(VAR_4);
 void *VAR_10 = (void *)VAR_3;
 size_t VAR_11 = 4 * sizeof(u64);

 if (VAR_8 != 1 || FUNC_4(VAR_11, VAR_7)) {
  VAR_1->status |= VAR_0;
  return FUNC_3((struct ib_mad_hdr *)VAR_1);
 }

 FUNC_2(VAR_9, VAR_10);

 if (VAR_6)
  *VAR_6 += VAR_11;

 return FUNC_3((struct ib_mad_hdr *)VAR_1);
}
