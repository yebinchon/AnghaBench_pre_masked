
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int mgmt_class; } ;
struct opa_mad {TYPE_1__ mad_hdr; } ;
struct ib_wc {int byte_len; } ;
struct ib_grh {int dummy; } ;
struct ib_device {int dummy; } ;
struct hfi1_ibport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (struct hfi1_ibport*,int) ;
 int FUNC_1 (struct hfi1_ibport*,int ) ;
 int FUNC_2 (struct hfi1_ibport*,struct opa_mad const*,struct ib_wc const*) ;
 int FUNC_3 (struct hfi1_ibport*,struct opa_mad const*,struct ib_wc const*) ;
 int FUNC_4 (struct hfi1_ibport*,struct ib_wc const*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct ib_device*,int ,struct opa_mad const*,struct opa_mad*,int*) ;
 int FUNC_7 (struct ib_device*,int,int ,struct opa_mad const*,struct opa_mad*,int*,int) ;
 size_t FUNC_8 (int,int) ;
 struct hfi1_ibport* FUNC_9 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_10(struct ib_device *VAR_4, int VAR_5,
    u8 VAR_6, const struct ib_wc *VAR_7,
    const struct ib_grh *VAR_8,
    const struct opa_mad *VAR_9,
    struct opa_mad *VAR_10, size_t *VAR_11,
    u16 *VAR_12)
{
 int VAR_13;
 int VAR_14;
 int VAR_15 = 0;
 u32 VAR_16 = VAR_7->byte_len - sizeof(*VAR_8);
 struct hfi1_ibport *VAR_17 = FUNC_9(VAR_4, VAR_6);

 VAR_14 = FUNC_1(VAR_17, VAR_3);
 if (VAR_14 < 0) {
  FUNC_5("failed to find limited mgmt pkey, defaulting 0x%x\n",
   FUNC_0(VAR_17, 1));
  VAR_14 = 1;
 }
 *VAR_12 = (u16)VAR_14;

 switch (VAR_9->mad_hdr.mgmt_class) {
 case 129:
 case 128:
  VAR_15 = FUNC_3(VAR_17, VAR_9, VAR_7);
  if (VAR_15) {
   VAR_13 = FUNC_4(VAR_17, VAR_7);
   if (VAR_13)
    return VAR_0;
  }
  VAR_13 = FUNC_7(VAR_4, VAR_5, VAR_6, VAR_9,
           VAR_10, &VAR_16, VAR_15);
  goto bail;
 case 130:
  VAR_13 = FUNC_2(VAR_17, VAR_9, VAR_7);
  if (VAR_13)
   return VAR_0;

  VAR_13 = FUNC_6(VAR_4, VAR_6, VAR_9, VAR_10, &VAR_16);
  goto bail;

 default:
  VAR_13 = VAR_2;
 }

bail:
 if (VAR_13 & VAR_1)
  *VAR_11 = FUNC_8(VAR_16, 8);
 else if (VAR_13 & VAR_2)
  *VAR_11 = VAR_7->byte_len - sizeof(struct ib_grh);

 return VAR_13;
}
