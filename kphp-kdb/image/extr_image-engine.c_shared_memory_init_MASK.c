
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int shm_filename ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (char*,int,int) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*,int,char*,int,int,int,int) ;

int FUNC_7 (void) {
  int VAR_9;
  VAR_8 = (VAR_5 > 0) ? VAR_5 : -1;
  FUNC_0 (VAR_8 > 0);
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
    char VAR_10[128];

    int VAR_11 = FUNC_6 (VAR_10, sizeof (VAR_10) - 2, "/img%d_%d_%d_%d", FUNC_2 (), VAR_6, VAR_7, VAR_9);
    FUNC_0 (VAR_11 < (int) sizeof (VAR_10));
    VAR_10[VAR_11] = 0;
    VAR_4[VAR_9] = FUNC_4 (VAR_10, VAR_3 | VAR_1 | VAR_2, 0640);
    if (VAR_4[VAR_9] < 0) {
      FUNC_3 ("Couldn't create share memory object %s\n%m\n", VAR_10);
      VAR_8 = VAR_9;
      return 0;
    }
    FUNC_1 (VAR_4[VAR_9], VAR_0);
    if (FUNC_5 (VAR_10) < 0) {
      FUNC_3 ("shm_unlink (%s) failed. %m\n", VAR_10);
      VAR_8 = VAR_9;
      return 0;
    }
  }
  return 1;
}
