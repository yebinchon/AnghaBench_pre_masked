
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_copyexec_main_transaction_skip {int first_transaction_id; int type; } ;
typedef int E ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int*,int) ;
 int VAR_3 ;
 int FUNC_3 (char*,int const) ;
 int FUNC_4 (char*,int ,int ,int*,int,void*,int) ;

__attribute__((used)) static void FUNC_5 (char *VAR_4) {
  void *VAR_5 = ((void*)0);
  int VAR_6 = 0;
  struct lev_copyexec_main_transaction_skip VAR_7;

  int VAR_8[3];
  VAR_8[2] = VAR_3;

  int VAR_9 = FUNC_2 (VAR_8, 8);
  if (VAR_9 != 8) {
    FUNC_3 ("random_tag creation failed, get_random_bytes returns %d instead of 8.\n", VAR_9);
    FUNC_0 (1);
  }

  const int VAR_10 = FUNC_1 ();
  if (VAR_10) {
    FUNC_3 ("Last synchronization point transaction id is %d.\n", VAR_10);
    VAR_7.type = VAR_1;
    VAR_7.first_transaction_id = VAR_10 + 1;
    VAR_5 = &VAR_7;
    VAR_6 = sizeof (VAR_7);
  }

  FUNC_4 (VAR_4, VAR_2, VAR_0, VAR_8, 12, VAR_5, VAR_6);

}
