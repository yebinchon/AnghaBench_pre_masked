
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {int return_path; int dr_slid; } ;
struct TYPE_4__ {TYPE_1__ dr; } ;
struct opa_smp {scalar_t__ attr_id; scalar_t__ class_version; int method; int status; int hop_cnt; TYPE_2__ route; int mkey; int attr_mod; } ;
struct opa_mad {int dummy; } ;
struct ib_mad_hdr {int dummy; } ;
struct ib_device {scalar_t__ phys_port_cnt; } ;
struct hfi1_ibport {int dummy; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;







 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct hfi1_ibport*,struct ib_mad_hdr*,int,int ,int ,int ,int ) ;
 int FUNC_2 (struct opa_smp*) ;
 scalar_t__* FUNC_3 (struct opa_smp*) ;
 scalar_t__ FUNC_4 (struct opa_smp*) ;
 scalar_t__ FUNC_5 (struct opa_smp*) ;
 int FUNC_6 (struct ib_mad_hdr*) ;
 int FUNC_7 (struct opa_smp*,struct ib_device*,scalar_t__,scalar_t__*) ;
 int FUNC_8 (scalar_t__,struct opa_smp*,scalar_t__,scalar_t__*,struct ib_device*,scalar_t__,scalar_t__*,scalar_t__) ;
 int FUNC_9 (struct hfi1_ibport*,struct opa_smp*) ;
 int FUNC_10 (struct opa_smp*,struct ib_device*,scalar_t__,scalar_t__*,int) ;
 int FUNC_11 (scalar_t__,struct opa_smp*,scalar_t__,scalar_t__*,struct ib_device*,scalar_t__,scalar_t__*,scalar_t__,int) ;
 struct hfi1_ibport* FUNC_12 (struct ib_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct ib_device *VAR_6, int VAR_7,
       u8 VAR_8, const struct opa_mad *VAR_9,
       struct opa_mad *VAR_10,
       u32 *VAR_11, int VAR_12)
{
 struct opa_smp *VAR_13 = (struct opa_smp *)VAR_10;
 struct hfi1_ibport *VAR_14 = FUNC_12(VAR_6, VAR_8);
 u8 *VAR_15;
 u32 VAR_16, VAR_17;
 __be16 VAR_18;
 int VAR_19;

 *VAR_10 = *VAR_9;
 VAR_15 = FUNC_3(VAR_13);
 VAR_17 = (u32)FUNC_4(VAR_13);

 VAR_16 = FUNC_0(VAR_13->attr_mod);
 VAR_18 = VAR_13->attr_id;
 if (VAR_13->class_version != VAR_5) {
  VAR_13->status |= VAR_4;
  VAR_19 = FUNC_6((struct ib_mad_hdr *)VAR_13);
  return VAR_19;
 }
 VAR_19 = FUNC_1(VAR_14, (struct ib_mad_hdr *)VAR_13, VAR_7, VAR_13->mkey,
    VAR_13->route.dr.dr_slid, VAR_13->route.dr.return_path,
    VAR_13->hop_cnt);
 if (VAR_19) {
  u32 VAR_20 = FUNC_0(VAR_13->attr_mod);
  if (VAR_18 == VAR_2 &&
      (VAR_13->method == 135 ||
       VAR_13->method == 131) &&
      VAR_20 && VAR_20 <= VAR_6->phys_port_cnt &&
      VAR_8 != VAR_20)
   (void)FUNC_1(FUNC_12(VAR_6, VAR_20),
       (struct ib_mad_hdr *)VAR_13, 0,
       VAR_13->mkey, VAR_13->route.dr.dr_slid,
       VAR_13->route.dr.return_path,
       VAR_13->hop_cnt);
  VAR_19 = VAR_0;
  return VAR_19;
 }

 *VAR_11 = FUNC_5(VAR_13);

 switch (VAR_13->method) {
 case 135:
  switch (VAR_18) {
  default:
   FUNC_2(VAR_13);
   VAR_19 = FUNC_8(VAR_18, VAR_13, VAR_16, VAR_15,
            VAR_6, VAR_8, VAR_11,
            VAR_17);
   break;
  case 128:
   VAR_19 = FUNC_7(VAR_13, VAR_6, VAR_8,
           VAR_11);
   break;
  }
  break;
 case 131:
  switch (VAR_18) {
  default:
   VAR_19 = FUNC_11(VAR_18, VAR_13, VAR_16, VAR_15,
            VAR_6, VAR_8, VAR_11,
            VAR_17, VAR_12);
   break;
  case 128:
   VAR_19 = FUNC_10(VAR_13, VAR_6, VAR_8,
           VAR_11, VAR_12);
   break;
  }
  break;
 case 130:
 case 133:
 case 132:
 case 134:





  VAR_19 = VAR_1;
  break;
 case 129:
  FUNC_9(VAR_14, VAR_13);

  VAR_19 = VAR_1;
  break;
 default:
  VAR_13->status |= VAR_3;
  VAR_19 = FUNC_6((struct ib_mad_hdr *)VAR_13);
  break;
 }

 return VAR_19;
}
