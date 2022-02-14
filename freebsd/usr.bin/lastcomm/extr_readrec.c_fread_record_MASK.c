
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 size_t FUNC_1 (void*,int,size_t,int *) ;

__attribute__((used)) static int
FUNC_2(void *VAR_3, size_t VAR_4, FILE *VAR_5)
{
 size_t VAR_6;

 if ((VAR_6 = FUNC_1(VAR_3, 1, VAR_4, VAR_5)) == VAR_4)
  return (0);
 else if (FUNC_0(VAR_5) || VAR_6 == 0)
  return (VAR_1);
 else {

  VAR_2 = VAR_0;
  return (VAR_1);
 }
}
