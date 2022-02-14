
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ s64 ;
typedef int __be64 ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int *,int *) ;

__attribute__((used)) static int FUNC_3(u32 VAR_1, u32 *VAR_2, u8 *VAR_3,
          u32 *VAR_4)
{
 s64 VAR_5;
 __be64 VAR_6;
 __be32 VAR_7;

 VAR_5 = FUNC_2(VAR_1, &VAR_6, VAR_3, &VAR_7);

 *VAR_2 = FUNC_1(VAR_6);
 *VAR_4 = FUNC_0(VAR_7);

 return VAR_5 == 0 ? 0 : -VAR_0;
}
