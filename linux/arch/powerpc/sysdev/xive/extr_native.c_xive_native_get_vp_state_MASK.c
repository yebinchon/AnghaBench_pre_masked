
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ s64 ;
typedef int __be64 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,int ,scalar_t__) ;

int FUNC_3(u32 VAR_1, u64 *VAR_2)
{
 __be64 VAR_3;
 s64 VAR_4;

 VAR_4 = FUNC_1(VAR_1, &VAR_3);
 if (VAR_4) {
  FUNC_2("OPAL failed to get vp state for VCPU %d : %lld\n",
         VAR_1, VAR_4);
  return -VAR_0;
 }

 if (VAR_2)
  *VAR_2 = FUNC_0(VAR_3);
 return 0;
}
