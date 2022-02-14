
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,int ,int*,int*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,int ,int ,int*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int,char*,int,int,int) ;

void FUNC_4 (int VAR_4, int VAR_5) {
  socklen_t VAR_6 = sizeof(int);
  int VAR_7 = 0;
  int VAR_8, VAR_9;
  int VAR_10;

  if (VAR_5 <= 0) {
    VAR_5 = VAR_0;
  }


  if (FUNC_0 (VAR_4, VAR_1, VAR_2, &VAR_10, &VAR_6)) {
    if (VAR_3 > 0) {
      FUNC_1 ("getsockopt (SO_SNDBUF)");
    }
    return;
  }


  VAR_8 = VAR_7 = VAR_10;
  VAR_5 = VAR_0;

  while (VAR_8 <= VAR_5) {
    VAR_9 = ((unsigned int) VAR_8 + VAR_5) / 2;
    if (FUNC_2 (VAR_4, VAR_1, VAR_2, &VAR_9, VAR_6) == 0) {
      VAR_7 = VAR_9;
      VAR_8 = VAR_9 + 1;
    } else {
      VAR_5 = VAR_9 - 1;
    }
  }

  FUNC_3 (2, "<%d send buffer was %d, now %d\n", VAR_4, VAR_10, VAR_7);
}
