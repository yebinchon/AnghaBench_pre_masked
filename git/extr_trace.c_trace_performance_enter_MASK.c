
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 size_t VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

uint64_t FUNC_4(void)
{
 uint64_t VAR_3;

 if (!FUNC_3(&VAR_2))
  return 0;

 VAR_3 = FUNC_2();
 VAR_1[VAR_0] = VAR_3;
 if (VAR_0 + 1 < FUNC_0(VAR_1))
  VAR_0++;
 else
  FUNC_1("Too deep indentation");
 return VAR_3;
}
