
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(int VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_0, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 return !(VAR_3 & FUNC_0(VAR_2));
}
