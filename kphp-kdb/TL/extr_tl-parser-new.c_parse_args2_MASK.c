
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int dummy; } ;
struct parse {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct parse) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct parse VAR_7 ;
 struct parse FUNC_6 () ;
 int FUNC_7 (int ,scalar_t__) ;
 int VAR_8 ;

struct tree *FUNC_8 (void) {
  FUNC_2 (VAR_8);
  FUNC_3 (VAR_6);
  if (VAR_1 && FUNC_1 (':')) {
    FUNC_7 (VAR_2, VAR_1);
    FUNC_0 (":");
  } else {
    FUNC_5 (VAR_7);
  }
  struct parse VAR_9 = FUNC_6 ();
  FUNC_3 (VAR_5);
  if (VAR_1) {
    FUNC_7 (VAR_2, VAR_1);
  } else {
    FUNC_5 (VAR_9);
  }
  struct parse VAR_10 = FUNC_6 ();
  FUNC_3 (VAR_4);
  if (VAR_1 && FUNC_1 ('*')) {
    FUNC_7 (VAR_2, VAR_1);
    FUNC_0 ("*");
  } else {
    FUNC_5 (VAR_10);
  }
  FUNC_0 ("[");
  while (1) {
    if (FUNC_1 (']')) { break; }
    FUNC_4 (VAR_3);
  }
  FUNC_0 ("]");
  VAR_0;
}
