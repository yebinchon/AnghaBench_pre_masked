
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPSTR ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int *,int const,int ,int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_5 ;

void FUNC_6(const int VAR_6, const char* VAR_7) {
  char* VAR_8 = ((void*)0);
  const char* VAR_9;

  FUNC_1(VAR_0 | VAR_1 |
      VAR_2, ((void*)0), VAR_6,
      FUNC_3(VAR_3, VAR_4), (LPSTR)&VAR_8, 0, ((void*)0));

  if (VAR_8) {
    VAR_9 = VAR_8;
  } else {
    VAR_9 = "Unknown error";
  }



  if (VAR_7) {
    FUNC_5(VAR_5, "%s: (%d) %s", VAR_7, VAR_6, VAR_9);
  } else {
    FUNC_5(VAR_5, "(%d) %s", VAR_6, VAR_9);
  }

  if (VAR_8) {
    FUNC_2(VAR_8);
  }

  FUNC_0();
  FUNC_4();
}
