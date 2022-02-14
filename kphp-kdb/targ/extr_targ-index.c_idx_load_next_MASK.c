
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,...) ;
 int VAR_2 ;
 long long FUNC_2 () ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 int VAR_8 ;
 int FUNC_4 (int ,int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int,char*,long long,int,int) ;

int FUNC_6 (int VAR_11) {
  FUNC_0 (VAR_11 > 0 && VAR_11 <= VAR_1 - VAR_0);
  long long VAR_12 = FUNC_2 ();
  if (VAR_11 + VAR_12 > VAR_2) {
    VAR_11 = VAR_2 - VAR_12;
    FUNC_0 (VAR_11 >= 0);
    if (!VAR_11) {
      FUNC_5 (4, "failed at pos %lld, ends at %lld bytes, need %d\n", VAR_12, VAR_2, VAR_11);
      return 0;
    }
  }
  FUNC_0 (VAR_7 >= VAR_0 && VAR_7 <= VAR_8 && VAR_8 <= VAR_1);
  if (VAR_8 >= VAR_7 + VAR_11) {
    return VAR_8 - VAR_7;
  }
  if (VAR_7 + VAR_11 > VAR_1) {
    FUNC_3 ();
    FUNC_0 (VAR_7 + VAR_11 <= VAR_1);
  }
  int VAR_13 = VAR_1 - VAR_8;
  long long VAR_14 = VAR_12 + (VAR_8 - VAR_7);
  if (VAR_14 + VAR_13 > VAR_2) {
    VAR_13 = VAR_2 - VAR_14;
  }
  FUNC_0 (VAR_13 > 0);
  int VAR_15 = FUNC_4 (VAR_3, VAR_8, VAR_13);
  if (VAR_15 != VAR_13) {
    FUNC_1 (VAR_9, "error reading %d bytes from snapshot %s at position %d: only %d bytes read: %m\n", VAR_13, VAR_4, VAR_6, VAR_15);
    FUNC_0 (VAR_15 == VAR_13);
  } else if (VAR_10 > 3) {
    FUNC_1 (VAR_9, "preloaded %d bytes from snapshot at position %d\n", VAR_15, VAR_6);
  }

  VAR_8 += VAR_15;
  VAR_6 += VAR_15;
  VAR_5 += VAR_15;
  return VAR_8 - VAR_7;
}
