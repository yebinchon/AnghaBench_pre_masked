
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ stdio_out; } ;
typedef TYPE_1__ process_info_t ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int,char*) ;
 int FUNC_2 (intptr_t,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (char*,int,int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (char*,int ,int *) ;
 int FUNC_8 (char*) ;

int FUNC_9(process_info_t* VAR_3, FILE* VAR_4) {
  char VAR_5[1024];
  int VAR_6, VAR_7;
  FILE* VAR_8;

  VAR_6 = FUNC_2((intptr_t)VAR_3->stdio_out, VAR_1 | VAR_2);
  if (VAR_6 == -1)
    return -1;
  VAR_8 = FUNC_1(VAR_6, "rt");
  if (VAR_8 == ((void*)0)) {
    FUNC_0(VAR_6);
    return -1;
  }

  VAR_7 = FUNC_6(VAR_8, 0, VAR_0);
  if (VAR_7 < 0)
    return -1;

  while (FUNC_5(VAR_5, sizeof(VAR_5), VAR_8) != ((void*)0))
    FUNC_7(VAR_5, FUNC_8(VAR_5), VAR_4);

  if (FUNC_4(VAR_8))
    return -1;

  FUNC_3(VAR_8);
  return 0;
}
