
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct static_pending_operation {int dummy; } ;
struct stat {int st_mode; } ;
typedef enum pending_operation_tp { ____Placeholder_pending_operation_tp } pending_operation_tp ;
typedef scalar_t__ dyn_mark_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int*,char const* const,char*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (int,char*,char const* const,struct stat*) ;
 int FUNC_10 (struct static_pending_operation*,int,char*,char const* const,struct stat*) ;
 int FUNC_11 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (int,char*,char*) ;
 int FUNC_13 (int,void*,int) ;

void FUNC_14 (int VAR_9, int *VAR_10, const char *const VAR_11, void *VAR_12, int VAR_13, struct stat *VAR_14, struct static_pending_operation *VAR_15, dyn_mark_t VAR_16) {
  enum pending_operation_tp VAR_17;
  char *VAR_18;
  if (FUNC_1 (VAR_14->st_mode)) {
    VAR_17 = VAR_8;
    VAR_18 = (char *) VAR_12;
  } else if (FUNC_0 (VAR_14->st_mode)) {
    VAR_17 = VAR_6;
    VAR_18 = ((void*)0);
  } else {
    char VAR_19[VAR_4];
    FUNC_4 (VAR_9, VAR_10, VAR_11, VAR_19);
    FUNC_12 (4, "full_tmp_filename = %s\n", VAR_19);
    int VAR_20 = FUNC_8 (VAR_19, VAR_0 | VAR_2 | VAR_3 | VAR_1, 0660);
    if (VAR_20 < 0) {
      FUNC_7 ("fail to open file '%s', flags: O_CREAT | O_TRUNC | O_WRONLY | O_EXCL. %m\n", VAR_19);
      FUNC_6 (1);
    }
    FUNC_2 (VAR_20 >= 0);
    FUNC_2 (VAR_13 == FUNC_13 (VAR_20, VAR_12, VAR_13));
    FUNC_2 (!FUNC_3 (VAR_20));
    VAR_17 = VAR_7;
    VAR_18 = VAR_19 + VAR_5 + 1;
  }
  if (VAR_15) {
    FUNC_10 (VAR_15, VAR_17, VAR_18, VAR_11, VAR_14);
  } else {
    if (VAR_16) {
      FUNC_5 (VAR_16);
    }
    FUNC_11 (FUNC_9 (VAR_17, VAR_18, VAR_11, VAR_14));
  }
}
