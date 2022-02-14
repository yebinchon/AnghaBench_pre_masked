
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct debug_drvdata {int edpcsr_present; int edcidsr_present; int edvidsr_present; int pc_has_offset; scalar_t__ base; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(void *VAR_7)
{
 struct debug_drvdata *VAR_8 = VAR_7;
 u32 VAR_9, VAR_10;
 u32 VAR_11, VAR_12;

 FUNC_1(VAR_8->base);


 VAR_11 = FUNC_3(VAR_8->base + VAR_1);
 VAR_12 = FUNC_3(VAR_8->base + VAR_2);

 FUNC_0(VAR_8->base);


 VAR_9 = VAR_11 & VAR_6;
 VAR_10 = VAR_12 & VAR_5;

 VAR_8->edpcsr_present = 0;
 VAR_8->edcidsr_present = 0;
 VAR_8->edvidsr_present = 0;
 VAR_8->pc_has_offset = 0;

 switch (VAR_9) {
 case 128:
  VAR_8->edvidsr_present = 1;

 case 129:
  VAR_8->edcidsr_present = 1;

 case 130:







  VAR_8->edpcsr_present =
   ((FUNC_2(VAR_0) && VAR_10 != 0) ||
    (VAR_10 != VAR_3));

  VAR_8->pc_has_offset =
   (VAR_10 == VAR_4);
  break;
 default:
  break;
 }
}
