
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct intel_guc {int doorbell_bitmap; } ;


 int FUNC_0 (char*,scalar_t__,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct intel_guc*,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(struct intel_guc *VAR_1, u16 VAR_2)
{
 bool VAR_3;

 FUNC_1(VAR_2 >= VAR_0);

 VAR_3 = FUNC_2(VAR_1, VAR_2);

 if (FUNC_3(VAR_2, VAR_1->doorbell_bitmap) == VAR_3)
  return 1;

 FUNC_0("Doorbell %u has unexpected state: valid=%s\n",
    VAR_2, FUNC_4(VAR_3));

 return 0;
}
