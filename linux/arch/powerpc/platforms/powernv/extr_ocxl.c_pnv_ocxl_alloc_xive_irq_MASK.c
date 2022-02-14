
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ s64 ;
typedef int __be64 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int *,int *,int *,int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;

int FUNC_4(u32 *VAR_1, u64 *VAR_2)
{
 __be64 VAR_3, VAR_4;
 s64 VAR_5;
 u32 VAR_6;

 VAR_6 = FUNC_2();
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_6, &VAR_3, ((void*)0), &VAR_4, ((void*)0),
    ((void*)0));
 if (VAR_5 || !VAR_4) {
  FUNC_3(VAR_6);
  return -VAR_0;
 }
 *VAR_1 = VAR_6;
 *VAR_2 = FUNC_0(VAR_4);
 return 0;

}
