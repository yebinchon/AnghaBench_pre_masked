
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atomic64_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(atomic64_t *VAR_1, unsigned int VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2);

 if (VAR_3)
  VAR_3 = FUNC_2((VAR_0 - 1), VAR_3 - 1);

 FUNC_0(&VAR_1[VAR_3]);
}
