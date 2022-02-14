
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int pattern_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int*,int*) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int *,int,size_t,int) ;
 int FUNC_4 (void*,void*,size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ,void*,size_t,int) ;

__attribute__((used)) static void
FUNC_6(pattern_t* VAR_2, int VAR_3, int VAR_4)
{
  uint32_t VAR_5, VAR_6;
  FUNC_1(VAR_2, VAR_3, &VAR_5, &VAR_6);
  size_t VAR_7 = VAR_6 - VAR_5;
  uint64_t* VAR_8 = FUNC_2(VAR_7);
  FUNC_3(VAR_8, VAR_5, VAR_7, VAR_4);



  FUNC_5(VAR_0, (void*)VAR_8, VAR_7, VAR_5);

  FUNC_0(VAR_8);
}
