
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct opa_smp {int status; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;
struct hfi1_pportdata {int dummy; } ;
struct hfi1_devdata {struct hfi1_pportdata* pport; } ;
struct buffer_control {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct opa_smp*,int,int*,struct ib_device*,int,int*,int) ;
 struct hfi1_devdata* FUNC_2 (struct ib_device*) ;
 scalar_t__ FUNC_3 (struct hfi1_pportdata*,int ,struct buffer_control*) ;
 int FUNC_4 (struct ib_mad_hdr*) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (struct hfi1_devdata*,struct buffer_control*) ;

__attribute__((used)) static int FUNC_7(struct opa_smp *VAR_2, u32 VAR_3, u8 *VAR_4,
         struct ib_device *VAR_5, u8 VAR_6, u32 *VAR_7,
         u32 VAR_8)
{
 u32 VAR_9 = FUNC_0(VAR_3);
 struct hfi1_devdata *VAR_10 = FUNC_2(VAR_5);
 struct hfi1_pportdata *VAR_11;
 struct buffer_control *VAR_12 = (struct buffer_control *)VAR_4;

 if (VAR_9 != 1 || FUNC_5(sizeof(*VAR_12), VAR_8)) {
  VAR_2->status |= VAR_1;
  return FUNC_4((struct ib_mad_hdr *)VAR_2);
 }
 VAR_11 = VAR_10->pport + (VAR_6 - 1);
 FUNC_6(VAR_10, VAR_12);
 if (FUNC_3(VAR_11, VAR_0, VAR_12) < 0) {
  VAR_2->status |= VAR_1;
  return FUNC_4((struct ib_mad_hdr *)VAR_2);
 }

 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
      VAR_8);
}
