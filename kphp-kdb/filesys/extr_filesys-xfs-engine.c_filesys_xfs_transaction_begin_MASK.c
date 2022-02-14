
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_filesys_xfs_transaction {int id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int,char*,int ) ;

__attribute__((used)) static void FUNC_6 (struct lev_filesys_xfs_transaction *VAR_4) {
  VAR_0 = 0;
  FUNC_5 (1, "Begin transaction %d.\n", VAR_4->id);
  int VAR_5 = 0;
  FUNC_4 (1);
  FUNC_0 (VAR_1);
  VAR_5 = FUNC_3 (VAR_1, 0777);
  if (VAR_5 < 0) {
    FUNC_2 ("mkdir (%s) fail. %m\n", VAR_1);
    FUNC_1 (1);
  }
  VAR_3 = VAR_4->id;
  VAR_2 = 0;
}
