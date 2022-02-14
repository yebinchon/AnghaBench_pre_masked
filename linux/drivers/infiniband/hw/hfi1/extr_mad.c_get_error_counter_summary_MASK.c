
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct ib_device {int dummy; } ;
struct hfi1_pportdata {int dummy; } ;
struct hfi1_ibport {int dummy; } ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct hfi1_devdata* FUNC_0 (struct ib_device*) ;
 struct hfi1_pportdata* FUNC_1 (struct hfi1_ibport*) ;
 int FUNC_2 (struct hfi1_devdata*,int ,int ) ;
 scalar_t__ FUNC_3 (struct hfi1_pportdata*,int ,int ) ;
 struct hfi1_ibport* FUNC_4 (struct ib_device*,int) ;

__attribute__((used)) static u64 FUNC_5(struct ib_device *VAR_13, u8 VAR_14,
         u8 VAR_15, u8 VAR_16)
{
 struct hfi1_devdata *VAR_17 = FUNC_0(VAR_13);
 struct hfi1_ibport *VAR_18 = FUNC_4(VAR_13, VAR_14);
 struct hfi1_pportdata *VAR_19 = FUNC_1(VAR_18);
 u64 VAR_20 = 0, VAR_21;

 VAR_20 += FUNC_3(VAR_19, VAR_10,
      VAR_0);

 VAR_20 += FUNC_3(VAR_19, VAR_12,
      VAR_0);
 VAR_20 += FUNC_3(VAR_19, VAR_11,
      VAR_0);
 VAR_20 += FUNC_2(VAR_17, VAR_4,
            VAR_0);

 VAR_20 += (FUNC_2(VAR_17, VAR_5,
      VAR_0) >> VAR_15);

 VAR_21 = FUNC_2(VAR_17, VAR_6, VAR_0);
 VAR_21 += FUNC_2(VAR_17, VAR_3, VAR_0);
 VAR_20 += (VAR_21 >> VAR_16);
 VAR_20 += FUNC_2(VAR_17, VAR_2,
            VAR_0);
 VAR_20 += FUNC_2(VAR_17, VAR_8, VAR_0);
 VAR_20 += FUNC_2(VAR_17, VAR_1,
            VAR_0);

 VAR_20 += FUNC_3(VAR_19, VAR_9,
      VAR_0);
 VAR_21 = FUNC_2(VAR_17, VAR_7, VAR_0);

 VAR_20 += VAR_21 < 0x100 ? (VAR_21 & 0xff) : 0xff;

 return VAR_20;
}
