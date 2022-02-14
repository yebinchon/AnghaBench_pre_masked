
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_message {scalar_t__ magic; int total_bytes; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (struct raw_message*,struct raw_message*) ;
 int FUNC_4 (struct raw_message*,char*,int) ;
 int FUNC_5 (struct raw_message*) ;
 int VAR_2 ;

int FUNC_6 (struct raw_message *VAR_3) {
  FUNC_0 (VAR_3->magic == VAR_0 || VAR_3->magic == VAR_1);
  struct raw_message VAR_4;
  FUNC_3 (&VAR_4, VAR_3);
  static char VAR_5[10004];
  int VAR_6 = FUNC_4 (&VAR_4, VAR_5, 10004);
  int VAR_7 = (VAR_6 > 10000) ? 10000 : VAR_6;
  FUNC_2 (VAR_5, VAR_5 + VAR_7);
  if (VAR_6 > VAR_7) {
    FUNC_1 (VAR_2, "%d bytes not printed\n", VAR_3->total_bytes - VAR_7);
  }
  FUNC_5 (&VAR_4);
  return 0;
}
