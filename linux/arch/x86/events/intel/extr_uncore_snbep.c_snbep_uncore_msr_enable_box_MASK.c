
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_uncore_box {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 unsigned int FUNC_1 (struct intel_uncore_box*) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct intel_uncore_box *VAR_1)
{
 u64 VAR_2;
 unsigned VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3) {
  FUNC_0(VAR_3, VAR_2);
  VAR_2 &= ~VAR_0;
  FUNC_2(VAR_3, VAR_2);
 }
}
