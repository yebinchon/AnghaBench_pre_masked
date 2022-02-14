
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {scalar_t__ chip_id; int device; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 scalar_t__ VAR_1 ;
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
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (struct pp_hwmgr*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_22, const bool VAR_23)
{
 uint32_t VAR_24 = VAR_23 ? 1 : 0;
 uint32_t VAR_25 = 0;
 int32_t VAR_26 = 0;
 uint32_t VAR_27;

 if (VAR_22->chip_id == VAR_1)
  VAR_27 = VAR_15;
 else
  VAR_27 = VAR_4;

 VAR_25 = FUNC_1(VAR_11) ? VAR_24 : 0;
 FUNC_0(VAR_22->device, VAR_0,
        VAR_7, VAR_5, VAR_25);
 VAR_27 &= ~VAR_16;
 VAR_27 |= VAR_25 << VAR_17;

 VAR_25 = FUNC_1(VAR_10) ? VAR_24 : 0;
 FUNC_0(VAR_22->device, VAR_0,
        VAR_6, VAR_5, VAR_25);
 VAR_27 &= ~VAR_2;
 VAR_27 |= VAR_25 << VAR_3;

 VAR_25 = FUNC_1(VAR_13) ? VAR_24 : 0;
 FUNC_0(VAR_22->device, VAR_0,
        VAR_9, VAR_5, VAR_25);
 VAR_27 &= ~VAR_20;
 VAR_27 |= VAR_25 << VAR_21;

 VAR_25 = FUNC_1(VAR_12) ? VAR_24 : 0;
 FUNC_0(VAR_22->device, VAR_0,
        VAR_8, VAR_5, VAR_25);
 VAR_27 &= ~VAR_18;
 VAR_27 |= VAR_25 << VAR_19;

 if (VAR_23)
  VAR_26 = FUNC_2(VAR_22, VAR_14, VAR_27);

 return VAR_26;
}
