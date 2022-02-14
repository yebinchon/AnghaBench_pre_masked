
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(int VAR_1, u32 *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < 7; VAR_3++)
  VAR_2[VAR_3] = FUNC_1(VAR_0 + FUNC_0(VAR_1, VAR_3));
 return VAR_2[1];
}
