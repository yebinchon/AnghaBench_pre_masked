
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int,int,int,int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_3 ;

void
FUNC_5 (WINDOW ** VAR_4, WINDOW ** VAR_5)
{
  int VAR_6 = 0, VAR_7 = 0;


  FUNC_1 (VAR_3, VAR_6, VAR_7);
  if (VAR_6 < VAR_0 || VAR_7 < VAR_1)
    FUNC_0 ("Minimum screen size - 0 columns by 7 lines");


  *VAR_4 = FUNC_3 (6, VAR_7, 0, 0);
  FUNC_2 (*VAR_4, VAR_2);
  if (*VAR_4 == ((void*)0))
    FUNC_0 ("Unable to allocate memory for header_win.");


  *VAR_5 = FUNC_3 (VAR_6 - 8, VAR_7, 7, 0);
  FUNC_2 (*VAR_5, VAR_2);
  if (*VAR_5 == ((void*)0))
    FUNC_0 ("Unable to allocate memory for main_win.");
  FUNC_4 (*VAR_5, *VAR_4);
}
