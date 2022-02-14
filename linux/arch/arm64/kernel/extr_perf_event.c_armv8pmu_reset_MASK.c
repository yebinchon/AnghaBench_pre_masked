
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct arm_pmu {scalar_t__ num_events; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_5)
{
 struct arm_pmu *VAR_6 = (struct arm_pmu *)VAR_5;
 u32 VAR_7, VAR_8 = VAR_6->num_events;


 for (VAR_7 = VAR_0; VAR_7 < VAR_8; ++VAR_7) {
  FUNC_0(VAR_7);
  FUNC_1(VAR_7);
 }


 FUNC_3(VAR_4);





 FUNC_2(VAR_3 | VAR_1 |
       VAR_2);
}
