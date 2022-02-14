
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 void* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (void*,size_t,int,int,int,int ) ;

void *FUNC_3(void *VAR_1, size_t VAR_2,
 int VAR_3, int VAR_4, int VAR_5, off_t VAR_6)
{
 void *VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_7 == VAR_0)
  FUNC_1(FUNC_0("mmap failed"));
 return VAR_7;
}
