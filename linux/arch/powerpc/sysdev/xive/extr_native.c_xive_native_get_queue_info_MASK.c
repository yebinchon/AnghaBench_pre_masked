
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef void* u32 ;
typedef scalar_t__ s64 ;
typedef int __be64 ;
typedef int __be32 ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (void*,void*,int *,int *,int *,int *,int *) ;
 int FUNC_3 (char*,void*,void*,scalar_t__) ;

int FUNC_4(u32 VAR_1, u32 VAR_2,
          u64 *VAR_3,
          u64 *VAR_4,
          u64 *VAR_5,
          u32 *VAR_6,
          u64 *VAR_7)
{
 __be64 VAR_8;
 __be64 VAR_9;
 __be64 VAR_10;
 __be32 VAR_11;
 __be64 VAR_12;
 s64 VAR_13;

 VAR_13 = FUNC_2(VAR_1, VAR_2, &VAR_8, &VAR_9,
          &VAR_10, &VAR_11, &VAR_12);
 if (VAR_13) {
  FUNC_3("OPAL failed to get queue info for VCPU %d/%d : %lld\n",
         VAR_1, VAR_2, VAR_13);
  return -VAR_0;
 }

 if (VAR_3)
  *VAR_3 = FUNC_1(VAR_8);
 if (VAR_4)
  *VAR_4 = FUNC_0(VAR_9);
 if (VAR_5)
  *VAR_5 = FUNC_1(VAR_10);
 if (VAR_6)
  *VAR_6 = FUNC_0(VAR_11);
 if (VAR_7)
  *VAR_7 = FUNC_1(VAR_12);

 return 0;
}
