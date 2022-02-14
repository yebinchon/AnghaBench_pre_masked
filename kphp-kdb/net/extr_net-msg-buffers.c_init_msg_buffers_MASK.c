
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 () ;
 long VAR_5 ;
 unsigned long VAR_6 ;

int FUNC_2 (long VAR_7) {
  if (!VAR_7) {
    VAR_7 = VAR_5 ?: VAR_1;
  }

  FUNC_0 (VAR_7 >= 0 && VAR_7 <= VAR_2);
  FUNC_0 (VAR_7 >= VAR_3 * VAR_0);

  VAR_5 = VAR_7;
  VAR_6 = (unsigned long) VAR_7 / VAR_0;

  if (!VAR_4) {
    FUNC_1 ();
  }

  return 1;
}
