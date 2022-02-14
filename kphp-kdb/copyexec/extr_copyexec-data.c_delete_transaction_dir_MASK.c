
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int ,...) ;

__attribute__((used)) static void FUNC_2 (void) {
  FUNC_1 (3, "delete_transaction_dir (\"%s\")\n", VAR_1);
  VAR_0 = 0;
  int VAR_2 = FUNC_0 (VAR_1);
  if (VAR_2 < 0) {
    FUNC_1 (1, "delete_file (\"%s\") returns error code %d. %m\n", VAR_1, VAR_2);
  }
}
