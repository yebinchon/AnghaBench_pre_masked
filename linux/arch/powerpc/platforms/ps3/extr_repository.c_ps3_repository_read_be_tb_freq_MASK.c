
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 int FUNC_0 (unsigned int,scalar_t__*) ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;

int FUNC_2(unsigned int VAR_0, u64 *VAR_1)
{
 int VAR_2;
 u64 VAR_3;

 *VAR_1 = 0;
 VAR_2 = FUNC_0(VAR_0, &VAR_3);
 return VAR_2 ? VAR_2
  : FUNC_1(VAR_3, VAR_1);
}
