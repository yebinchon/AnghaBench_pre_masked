
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ISzAllocPtr ;


 size_t VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,int) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (size_t,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (void**,int,size_t) ;

__attribute__((used)) static void *FUNC_8(ISzAllocPtr VAR_2, size_t VAR_3)
{


  void *VAR_4;
  void *VAR_5;
  size_t VAR_6;
  FUNC_6(VAR_2);




  VAR_6 = VAR_3 + VAR_1 * 1 + VAR_0;
  if (VAR_6 < VAR_3)
    return ((void*)0);

  VAR_4 = FUNC_1(VAR_6);

  if (!VAR_4)
    return ((void*)0);
  VAR_5 = FUNC_0(VAR_4, VAR_1);

  FUNC_2(" size="); FUNC_4(VAR_3, 8);
  FUNC_2(" a_size="); FUNC_4(VAR_6, 8);
  FUNC_2(" ptr="); FUNC_3(VAR_4);
  FUNC_2(" a_ptr="); FUNC_3(VAR_5);
  FUNC_5();

  ((void **)VAR_5)[-1] = VAR_4;

  return VAR_5;
}
