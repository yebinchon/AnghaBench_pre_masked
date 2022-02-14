
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_2__ {int pattern; scalar_t__ icase; } ;
typedef int GScroll ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,char*,int,int,int,int ) ;
 TYPE_1__ VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int,int) ;
 char* FUNC_4 (int *,int,int,int,char*,int,scalar_t__*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int,int,char*,int ) ;
 int * FUNC_7 (int,int,int,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int VAR_7 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char,char,char,char,char,char,char,char) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*) ;

int
FUNC_14 (WINDOW * VAR_8, GScroll * VAR_9)
{
  int VAR_10, VAR_11, VAR_12 = 1;
  int VAR_13 = VAR_2;
  int VAR_14 = VAR_1;
  char *VAR_15 = ((void*)0);
  WINDOW *VAR_16;

  FUNC_3 (VAR_7, VAR_10, VAR_11);

  VAR_16 = FUNC_7 (VAR_14, VAR_13, (VAR_10 - VAR_14) / 2, (VAR_11 - VAR_13) / 2);
  FUNC_5 (VAR_16, VAR_4);
  FUNC_11 (VAR_16, '|', '|', '-', '-', '+', '+', '+', '+');
  FUNC_1 (VAR_16, VAR_3, " %s", 1, 1, VAR_13 - 2, VAR_5);
  FUNC_6 (VAR_16, 2, 1, " %s", VAR_0);

  VAR_6.icase = 0;
  VAR_15 = FUNC_4 (VAR_16, 4, 2, VAR_13 - 3, "", 1, &VAR_6.icase);
  if (VAR_15 != ((void*)0) && *VAR_15 != '\0') {
    FUNC_9 (VAR_9);
    FUNC_8 ();
    VAR_6.pattern = FUNC_13 (VAR_15);
    VAR_12 = 0;
  }
  if (VAR_15 != ((void*)0))
    FUNC_2 (VAR_15);
  FUNC_10 (VAR_8);
  FUNC_0 (VAR_16);
  FUNC_12 (VAR_8);

  return VAR_12;
}
