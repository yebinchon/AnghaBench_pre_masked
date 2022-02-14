
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;

int FUNC_3(u64 *VAR_0, u64 *VAR_1, u64 *VAR_2)
{
 int VAR_3;
 u64 VAR_4;

 FUNC_0(&VAR_4);
 *VAR_0 = 0;
 VAR_3 = FUNC_2(VAR_4, VAR_1);
 return VAR_3 ? VAR_3
  : FUNC_1(VAR_2);
}
