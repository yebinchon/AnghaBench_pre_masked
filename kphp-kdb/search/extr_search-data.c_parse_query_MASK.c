
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 char* VAR_4 ;
 scalar_t__ FUNC_1 () ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int,char*,scalar_t__,scalar_t__) ;

char *FUNC_5 (char *VAR_5, int VAR_6) {
  VAR_3 = VAR_1 = 0;
  VAR_2 = 0;

  if (VAR_6) {
    VAR_5 = FUNC_3 (VAR_5);
  }

  if (VAR_0) {
    VAR_4 = VAR_5;

    VAR_2 = FUNC_1 ();
    if (!VAR_2 || *VAR_4) {
      return VAR_4;
    }

    VAR_2 = FUNC_0 (VAR_2);
    if (!VAR_2) {
      return VAR_4;
    }

    FUNC_4 (2, "successfully compiled extended query, %d nodes used, root=%p\n", VAR_1, VAR_2);

    return 0;
  }
  VAR_5 = FUNC_2 (VAR_5);

  return 0;
}
