
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct opa_smp {int status; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {int port_cap_flags; } ;
struct hfi1_ibport {TYPE_1__ rvp; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;
 int FUNC_0 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_1 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_2 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_3 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_4 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_5 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_6 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_7 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_8 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_9 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_10 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_11 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_12 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_13 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_14 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_15 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_16 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_17 (struct ib_mad_hdr*) ;
 struct hfi1_ibport* FUNC_18 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_19(__be16 VAR_5, struct opa_smp *VAR_6, u32 VAR_7,
       u8 *VAR_8, struct ib_device *VAR_9, u8 VAR_10,
       u32 *VAR_11, u32 VAR_12)
{
 int VAR_13;
 struct hfi1_ibport *VAR_14 = FUNC_18(VAR_9, VAR_10);

 switch (VAR_5) {
 case 144:
  VAR_13 = FUNC_7(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
           VAR_11, VAR_12);
  break;
 case 143:
  VAR_13 = FUNC_8(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
           VAR_11, VAR_12);
  break;
 case 141:
  VAR_13 = FUNC_10(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
           VAR_11, VAR_12);
  break;
 case 142:
  VAR_13 = FUNC_9(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
            VAR_11, VAR_12);
  break;
 case 128:
  VAR_13 = FUNC_15(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
           VAR_11, VAR_12);
  break;
 case 131:
  VAR_13 = FUNC_12(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
           VAR_11, VAR_12);
  break;
 case 129:
  VAR_13 = FUNC_14(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
            VAR_11, VAR_12);
  break;
 case 130:
  VAR_13 = FUNC_13(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
      VAR_11, VAR_12);
  break;
 case 132:
  VAR_13 = FUNC_11(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
      VAR_11, VAR_12);
  break;
 case 138:
  VAR_13 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
      VAR_11, VAR_12);
  break;
 case 137:
  VAR_13 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
      VAR_11, VAR_12);
  break;
 case 139:
  VAR_13 = FUNC_16(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
         VAR_11, VAR_12);
  break;
 case 135:
  VAR_13 = FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
            VAR_11, VAR_12);
  break;
 case 133:
  VAR_13 = FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9,
        VAR_10, VAR_11, VAR_12);
  break;
 case 134:
  VAR_13 = FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9,
         VAR_10, VAR_11, VAR_12);
  break;
 case 136:
  VAR_13 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
           VAR_11, VAR_12);
  break;
 case 145:
  VAR_13 = FUNC_6(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
           VAR_11, VAR_12);
  break;
 case 140:
  if (VAR_14->rvp.port_cap_flags & VAR_3)
   return VAR_1 | VAR_0;
  if (VAR_14->rvp.port_cap_flags & VAR_2)
   return VAR_1;

 default:
  VAR_6->status |= VAR_4;
  VAR_13 = FUNC_17((struct ib_mad_hdr *)VAR_6);
  break;
 }
 return VAR_13;
}
