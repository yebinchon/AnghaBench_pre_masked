
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
struct hfi1_pportdata {int led_override_timer_active; } ;
struct hfi1_devdata {struct hfi1_pportdata* pport; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 struct hfi1_devdata* FUNC_3 (struct ib_device*) ;
 int FUNC_4 (struct ib_mad_hdr*) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct opa_smp *VAR_2, u32 VAR_3, u8 *VAR_4,
       struct ib_device *VAR_5, u8 VAR_6,
       u32 *VAR_7, u32 VAR_8)
{
 struct hfi1_devdata *VAR_9 = FUNC_3(VAR_5);
 struct hfi1_pportdata *VAR_10 = VAR_9->pport;
 struct opa_led_info *VAR_11 = (struct opa_led_info *)VAR_4;
 u32 VAR_12 = FUNC_0(VAR_3);
 u32 VAR_13;

 if (VAR_12 != 1 || FUNC_5(sizeof(*VAR_11), VAR_8)) {
  VAR_2->status |= VAR_0;
  return FUNC_4((struct ib_mad_hdr *)VAR_2);
 }






 FUNC_6();
 VAR_13 = !!FUNC_1(&VAR_10->led_override_timer_active);
 VAR_11->rsvd_led_mask = FUNC_2(VAR_13 << VAR_1);

 if (VAR_7)
  *VAR_7 += sizeof(struct opa_led_info);

 return FUNC_4((struct ib_mad_hdr *)VAR_2);
}
