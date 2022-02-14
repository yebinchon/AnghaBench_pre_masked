
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(const char* VAR_7) {
  char* VAR_8;




  VAR_8 = FUNC_1(VAR_7);
  if (VAR_8 == ((void*)0))
    return VAR_0;

  FUNC_4(&VAR_5, VAR_1);
  FUNC_2(&VAR_4);




  if (VAR_6 != ((void*)0))
    FUNC_0(VAR_6);

  VAR_6 = VAR_8;

  VAR_3[0] = VAR_6;
  if (VAR_2 > 1)
     VAR_3[1] = ((void*)0);

  FUNC_3(&VAR_4);

  return 0;
}
