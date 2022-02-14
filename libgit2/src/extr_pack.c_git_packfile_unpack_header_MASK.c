
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long git_off_t ;
typedef int git_object_t ;
typedef int git_mwindow_file ;
typedef int git_mwindow ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 unsigned char* FUNC_1 (int *,int **,unsigned long,int,unsigned int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (unsigned long*,size_t*,int *,unsigned char*,unsigned int) ;

int FUNC_4(
  size_t *VAR_1,
  git_object_t *VAR_2,
  git_mwindow_file *VAR_3,
  git_mwindow **VAR_4,
  git_off_t *VAR_5)
{
 unsigned char *VAR_6;
 unsigned int VAR_7;
 unsigned long VAR_8;
 int VAR_9;
 VAR_6 = FUNC_1(VAR_3, VAR_4, *VAR_5, 20, &VAR_7);
 if (VAR_6 == ((void*)0))
  return VAR_0;

 VAR_9 = FUNC_3(&VAR_8, VAR_1, VAR_2, VAR_6, VAR_7);
 FUNC_0(VAR_4);
 if (VAR_9 == VAR_0)
  return VAR_9;
 else if (VAR_9 < 0)
  return FUNC_2("header length is zero");

 *VAR_5 += VAR_8;
 return 0;
}
