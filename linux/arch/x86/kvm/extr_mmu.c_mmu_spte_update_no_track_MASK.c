
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static u64 FUNC_7(u64 *VAR_0, u64 VAR_1)
{
 u64 VAR_2 = *VAR_0;

 FUNC_0(!FUNC_3(VAR_1));

 if (!FUNC_3(VAR_2)) {
  FUNC_4(VAR_0, VAR_1);
  return VAR_2;
 }

 if (!FUNC_5(VAR_2))
  FUNC_1(VAR_0, VAR_1);
 else
  VAR_2 = FUNC_2(VAR_0, VAR_1);

 FUNC_0(FUNC_6(VAR_2) != FUNC_6(VAR_1));

 return VAR_2;
}
