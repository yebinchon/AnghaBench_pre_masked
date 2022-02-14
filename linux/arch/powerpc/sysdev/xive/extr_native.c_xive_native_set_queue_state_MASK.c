
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (char*,int ,int ,scalar_t__) ;

int FUNC_2(u32 VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 s64 VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_1("OPAL failed to set queue state for VCPU %d/%d : %lld\n",
         VAR_1, VAR_2, VAR_5);
  return -VAR_0;
 }

 return 0;
}
