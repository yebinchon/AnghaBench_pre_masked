
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct opa_smp {int status; int attr_mod; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;
struct hfi1_pportdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;




 int FUNC_1 (struct opa_smp*,int,int*,struct ib_device*,int,int*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hfi1_pportdata*,int ,int*) ;
 struct hfi1_pportdata* FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct ib_mad_hdr*) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (struct ib_device*,int) ;

__attribute__((used)) static int FUNC_9(struct opa_smp *VAR_4, u32 VAR_5, u8 *VAR_6,
     struct ib_device *VAR_7, u8 VAR_8,
     u32 *VAR_9, u32 VAR_10)
{
 struct hfi1_pportdata *VAR_11 = FUNC_4(FUNC_8(VAR_7, VAR_8));
 u32 VAR_12 = FUNC_0(VAR_5);
 u8 VAR_13 = (VAR_5 & 0x00ff0000) >> 16;
 u8 *VAR_14 = VAR_6;
 int VAR_15 = 256;

 if (VAR_12 != 1 || FUNC_7(VAR_15, VAR_10)) {
  VAR_4->status |= VAR_2;
  return FUNC_6((struct ib_mad_hdr *)VAR_4);
 }

 switch (VAR_13) {
 case 130:
  (void)FUNC_3(VAR_11, VAR_1, VAR_14);
  break;
 case 131:
  (void)FUNC_3(VAR_11, VAR_0, VAR_14);
  break;




 case 129:

 case 128:
  VAR_4->status |= VAR_3;
  break;
 default:
  FUNC_5("OPA SubnSet(VL Arb) AM Invalid : 0x%x\n",
   FUNC_2(VAR_4->attr_mod));
  VAR_4->status |= VAR_2;
  break;
 }

 return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
         VAR_10);
}
