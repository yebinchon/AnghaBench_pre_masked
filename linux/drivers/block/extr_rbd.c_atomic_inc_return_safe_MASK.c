
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atomic_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int,int ) ;

__attribute__((used)) static int FUNC_2(atomic_t *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = (unsigned int)FUNC_1(VAR_2, 1, 0);
 if (VAR_3 <= (unsigned int)VAR_1)
  return (int)VAR_3;

 FUNC_0(VAR_2);

 return -VAR_0;
}
