
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ s64 ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (char*,int ,int ,scalar_t__) ;

int FUNC_3(u32 VAR_1, u32 VAR_2, u32 *VAR_3, u32 *VAR_4)
{
 __be32 VAR_5;
 __be32 VAR_6;
 s64 VAR_7;

 VAR_7 = FUNC_1(VAR_1, VAR_2, &VAR_5,
           &VAR_6);
 if (VAR_7) {
  FUNC_2("OPAL failed to get queue state for VCPU %d/%d : %lld\n",
         VAR_1, VAR_2, VAR_7);
  return -VAR_0;
 }

 if (VAR_3)
  *VAR_3 = FUNC_0(VAR_5);
 if (VAR_4)
  *VAR_4 = FUNC_0(VAR_6);

 return 0;
}
