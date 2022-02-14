
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kfs_file_handle_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 char* VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*,...) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_6 (kfs_file_handle_t VAR_6) {
  VAR_2 = -FUNC_3 (VAR_0);
  bool VAR_7 = FUNC_5 (VAR_6);
  VAR_2 += FUNC_3 (VAR_0);

  if (!VAR_7) {
    FUNC_2 (VAR_4, "fatal: error while loading index file %s\n", VAR_1);
    FUNC_1 (1);
  }

  if (VAR_5 > 0) {
    FUNC_2 (VAR_4, "load index: done, jump_log_pos=%s, time %.6ds\n", VAR_3, VAR_2);
  }


  FUNC_4();

  FUNC_0();
}
