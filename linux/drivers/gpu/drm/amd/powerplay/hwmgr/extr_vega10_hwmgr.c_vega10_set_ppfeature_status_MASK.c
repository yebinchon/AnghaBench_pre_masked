
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct pp_hwmgr {int dummy; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_0 (char*,unsigned long long) ;
 int FUNC_1 (struct pp_hwmgr*,int,unsigned long long) ;
 int FUNC_2 (struct pp_hwmgr*,unsigned long long*) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_2, uint64_t VAR_3)
{
 uint64_t VAR_4;
 uint64_t VAR_5;
 uint64_t VAR_6;
 int VAR_7 = 0;

 if (VAR_3 >= (1ULL << VAR_1))
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_2, &VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_6 =
  VAR_4 & ~VAR_3;
 VAR_5 =
  ~VAR_4 & VAR_3;

 FUNC_0("features_to_disable 0x%llx\n", VAR_6);
 FUNC_0("features_to_enable 0x%llx\n", VAR_5);

 if (VAR_6) {
  VAR_7 = FUNC_1(VAR_2, 0, VAR_6);
  if (VAR_7)
   return VAR_7;
 }

 if (VAR_5) {
  VAR_7 = FUNC_1(VAR_2, 1, VAR_5);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
