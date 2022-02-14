
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int i915; } ;


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
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct intel_uncore*,int ,int ,int ) ;
 int FUNC_3 (struct intel_uncore*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct intel_uncore *VAR_13)
{
 u32 VAR_14 = VAR_6 |
    VAR_11 |
    VAR_7 |
    VAR_9 |
    VAR_10 |
    VAR_8;


 FUNC_3(VAR_13, VAR_12, VAR_14);

 if (FUNC_1(VAR_13->i915))
  FUNC_3(VAR_13, VAR_2, VAR_4);
 else
  FUNC_3(VAR_13, VAR_3, VAR_4);

 if (FUNC_0(VAR_13->i915, 9)) {

  FUNC_2(VAR_13, VAR_0,
     0, VAR_1);


  FUNC_3(VAR_13, VAR_5, 0x1FF);
 }
}
