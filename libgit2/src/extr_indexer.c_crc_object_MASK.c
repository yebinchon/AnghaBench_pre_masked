
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uint32_t ;
typedef unsigned int git_off_t ;
typedef int git_mwindow_file ;
typedef int git_mwindow ;


 void* VAR_0 ;
 long FUNC_0 (long,void*,unsigned int) ;
 int FUNC_1 (int **) ;
 void* FUNC_2 (int *,int **,unsigned int,size_t,unsigned int*) ;
 long FUNC_3 (long) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_5(uint32_t *VAR_1, git_mwindow_file *VAR_2, git_off_t VAR_3, git_off_t VAR_4)
{
 void *VAR_5;
 uint32_t VAR_6;
 unsigned int VAR_7, VAR_8;
 git_mwindow *VAR_9 = ((void*)0);

 VAR_6 = FUNC_0(0L, VAR_0, 0);
 while (VAR_4) {
  VAR_5 = FUNC_2(VAR_2, &VAR_9, VAR_3, (size_t)VAR_4, &VAR_7);
  if (VAR_5 == ((void*)0))
   return -1;

  VAR_8 = FUNC_4(VAR_7, (unsigned int)VAR_4);
  VAR_6 = FUNC_0(VAR_6, VAR_5, VAR_8);
  VAR_4 -= VAR_8;
  VAR_3 += VAR_8;
  FUNC_1(&VAR_9);
 }

 *VAR_1 = FUNC_3(VAR_6);
 return 0;
}
