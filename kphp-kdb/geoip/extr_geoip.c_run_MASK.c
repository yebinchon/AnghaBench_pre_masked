
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (int) ;
 int* VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (int*,int,int ) ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 () ;
 int VAR_1 ;
 int FUNC_7 (int *) ;
 unsigned int FUNC_8 () ;
 unsigned int FUNC_9 () ;
 unsigned int FUNC_10 () ;
 int FUNC_11 (unsigned int*,unsigned int*) ;
 int FUNC_12 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_13 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_14 (void) {
  while (1) {
    if (!FUNC_4 (VAR_0, 1000000, VAR_5)) {
      break;
    }
    FUNC_6 ();
    if (*VAR_0 == 10 || *VAR_0 == 13 || *VAR_0 == '#') {
      continue;
    }
    unsigned VAR_8, VAR_9, VAR_10, VAR_11;
    if (!VAR_1) {
      VAR_8 = FUNC_10 ();
      FUNC_2 (!FUNC_3 ());
      VAR_9 = FUNC_10 ();
      FUNC_2 (!FUNC_3 ());
      FUNC_2 (VAR_8 == FUNC_9 ());
      FUNC_2 (!FUNC_3 ());
      FUNC_2 (VAR_9 == FUNC_9 ());
      FUNC_2 (!FUNC_3 ());
      VAR_10 = FUNC_8 ();
      FUNC_2 (VAR_10);
      FUNC_2 (!FUNC_3 ());
      FUNC_2 (FUNC_12 ());
      FUNC_2 (FUNC_3 ());
    } else if (VAR_1 == 1) {
      FUNC_11 (&VAR_8, &VAR_9);
      FUNC_2 (!FUNC_3 ());
      VAR_10 = FUNC_9 ();
      FUNC_2 (FUNC_3 ());
    } else if (VAR_1 == 2) {
      VAR_8 = FUNC_10 ();
      FUNC_2 (!FUNC_3 ());
      VAR_9 = FUNC_10 ();
      FUNC_2 (!FUNC_3 ());
      VAR_10 = FUNC_8 ();
      FUNC_2 (VAR_10);
      FUNC_2 (!FUNC_3 ());
      VAR_11 = FUNC_8 ();
      FUNC_2 (!FUNC_3 ());
      FUNC_2 (FUNC_13 () == 6);
      FUNC_2 (FUNC_3 ());
      VAR_10 = (VAR_10 << 16) + VAR_11;
    } else {
      FUNC_2 (0);
    }
    if (VAR_7 >= 3) {

      FUNC_5 (VAR_4, "add: start_ip = %u.%u.%u.%u, end_ip = %u.%u.%u.%u, color = %d\n", (VAR_8 >> 24) & 0xff, (VAR_8 >> 16) & 0xff, (VAR_8 >> 8) & 0xff, (VAR_8 >> 0) & 0xff, (VAR_9 >> 24) & 0xff, (VAR_9 >> 16) & 0xff, (VAR_9 >> 8) & 0xff, (VAR_9 >> 0) & 0xff, VAR_10);
    }
    FUNC_1 (&VAR_2, VAR_8, VAR_9, VAR_10, VAR_9 - VAR_8);
    VAR_3 ++;
  }
  if (VAR_7) {
    FUNC_5 (VAR_4, "total %d rules\n", VAR_3);
    FUNC_5 (VAR_4, "total %d vertices\n", VAR_6);
  }
  FUNC_7 (&VAR_2);
}
