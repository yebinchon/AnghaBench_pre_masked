
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
 int VAR_4 ;
 int FUNC_0 (int) ;




 int FUNC_1 (int ) ;
 int FUNC_2 (struct hfi1_pportdata*,int ,int*) ;
 struct hfi1_pportdata* FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct ib_mad_hdr*) ;
 scalar_t__ FUNC_6 (int,int) ;
 int FUNC_7 (struct ib_device*,int) ;

__attribute__((used)) static int FUNC_8(struct opa_smp *VAR_5, u32 VAR_6, u8 *VAR_7,
     struct ib_device *VAR_8, u8 VAR_9,
     u32 *VAR_10, u32 VAR_11)
{
 struct hfi1_pportdata *VAR_12 = FUNC_3(FUNC_7(VAR_8, VAR_9));
 u32 VAR_13 = FUNC_0(VAR_6);
 u8 VAR_14 = (VAR_6 & 0x00ff0000) >> 16;
 u8 *VAR_15 = VAR_7;
 int VAR_16 = 256;

 if (VAR_13 != 1 || FUNC_6(VAR_16, VAR_11)) {
  VAR_5->status |= VAR_4;
  return FUNC_5((struct ib_mad_hdr *)VAR_5);
 }

 switch (VAR_14) {
 case 130:
  FUNC_2(VAR_12, VAR_1, VAR_15);
  break;
 case 131:
  FUNC_2(VAR_12, VAR_0, VAR_15);
  break;
 case 129:
  FUNC_2(VAR_12, VAR_2, VAR_15);
  break;
 case 128:
  FUNC_2(VAR_12, VAR_3, VAR_15);
  break;
 default:
  FUNC_4("OPA SubnGet(VL Arb) AM Invalid : 0x%x\n",
   FUNC_1(VAR_5->attr_mod));
  VAR_5->status |= VAR_4;
  VAR_16 = 0;
  break;
 }

 if (VAR_16 > 0 && VAR_10)
  *VAR_10 += VAR_16;

 return FUNC_5((struct ib_mad_hdr *)VAR_5);
}
