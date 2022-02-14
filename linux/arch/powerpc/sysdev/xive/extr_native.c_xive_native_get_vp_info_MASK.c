
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ s64 ;
typedef int __be64 ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int *,int *,int *,int *) ;

int FUNC_3(u32 VAR_1, u32 *VAR_2, u32 *VAR_3)
{
 __be64 VAR_4;
 __be32 VAR_5;
 s64 VAR_6;

 VAR_6 = FUNC_2(VAR_1, ((void*)0), &VAR_4, ((void*)0), &VAR_5);
 if (VAR_6)
  return -VAR_0;
 *VAR_2 = FUNC_1(VAR_4) & 0xffffffffu;
 *VAR_3 = FUNC_0(VAR_5);

 return 0;
}
