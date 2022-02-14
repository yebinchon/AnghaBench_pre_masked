
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct opa_smp {int status; } ;
struct opa_led_info {int rsvd_led_mask; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;
struct hfi1_devdata {int pport; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct opa_smp*,int,int *,struct ib_device*,int ,int*,int) ;
 int FUNC_2 (int ) ;
 struct hfi1_devdata* FUNC_3 (struct ib_device*) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (struct ib_mad_hdr*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct opa_smp *VAR_2, u32 VAR_3, u8 *VAR_4,
       struct ib_device *VAR_5, u8 VAR_6,
       u32 *VAR_7, u32 VAR_8)
{
 struct hfi1_devdata *VAR_9 = FUNC_3(VAR_5);
 struct opa_led_info *VAR_10 = (struct opa_led_info *)VAR_4;
 u32 VAR_11 = FUNC_0(VAR_3);
 int VAR_12 = !!(FUNC_2(VAR_10->rsvd_led_mask) & VAR_1);

 if (VAR_11 != 1 || FUNC_7(sizeof(*VAR_10), VAR_8)) {
  VAR_2->status |= VAR_0;
  return FUNC_5((struct ib_mad_hdr *)VAR_2);
 }

 if (VAR_12)
  FUNC_4(VAR_9->pport, 2000, 1500);
 else
  FUNC_6(VAR_9->pport);

 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
           VAR_8);
}
