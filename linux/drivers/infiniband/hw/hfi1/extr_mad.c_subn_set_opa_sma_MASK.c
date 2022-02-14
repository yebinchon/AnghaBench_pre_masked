
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
 int FUNC_5 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ,int) ;
 int FUNC_6 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ,int) ;
 int FUNC_7 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_8 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_9 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_10 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_11 (struct opa_smp*,int ,int *,struct ib_device*,int ,int *,int ) ;
 int FUNC_12 (struct ib_mad_hdr*) ;
 struct hfi1_ibport* FUNC_13 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_14(__be16 VAR_5, struct opa_smp *VAR_6, u32 VAR_7,
       u8 *VAR_8, struct ib_device *VAR_9, u8 VAR_10,
       u32 *VAR_11, u32 VAR_12, int VAR_13)
{
 int VAR_14;
 struct hfi1_ibport *VAR_15 = FUNC_13(VAR_9, VAR_10);

 switch (VAR_5) {
 case 138:
  VAR_14 = FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
           VAR_11, VAR_12, VAR_13);
  break;
 case 139:
  VAR_14 = FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
            VAR_11, VAR_12);
  break;
 case 128:
  VAR_14 = FUNC_10(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
           VAR_11, VAR_12);
  break;
 case 131:
  VAR_14 = FUNC_7(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
           VAR_11, VAR_12);
  break;
 case 129:
  VAR_14 = FUNC_9(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
            VAR_11, VAR_12);
  break;
 case 130:
  VAR_14 = FUNC_8(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
      VAR_11, VAR_12);
  break;
 case 132:
  VAR_14 = FUNC_6(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
      VAR_11, VAR_12, VAR_13);
  break;
 case 135:
  VAR_14 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
      VAR_11, VAR_12);
  break;
 case 136:
  VAR_14 = FUNC_11(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
         VAR_11, VAR_12);
  break;
 case 133:
  VAR_14 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9,
        VAR_10, VAR_11, VAR_12);
  break;
 case 134:
  VAR_14 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
           VAR_11, VAR_12);
  break;
 case 140:
  VAR_14 = FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
           VAR_11, VAR_12);
  break;
 case 137:
  if (VAR_15->rvp.port_cap_flags & VAR_3)
   return VAR_1 | VAR_0;
  if (VAR_15->rvp.port_cap_flags & VAR_2)
   return VAR_1;

 default:
  VAR_6->status |= VAR_4;
  VAR_14 = FUNC_12((struct ib_mad_hdr *)VAR_6);
  break;
 }
 return VAR_14;
}
