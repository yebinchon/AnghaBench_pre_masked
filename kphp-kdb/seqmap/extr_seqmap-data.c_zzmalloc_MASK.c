
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 () ;
 void* FUNC_4 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void *FUNC_5 (int VAR_6) {
  if (VAR_6 < 0) { return 0; }
  void *VAR_7;

  if (FUNC_3 () > VAR_3) {
    FUNC_2 (VAR_4, "too much memory used: %lld of %lld\n", (long long) FUNC_3 (), (long long) VAR_3);

  }
  FUNC_0 (FUNC_3 () <= VAR_3);

  if (VAR_6 < VAR_0) {
    if (!(VAR_7 = FUNC_1 (VAR_6, VAR_1))) {
      FUNC_2 (VAR_4, "Out of memory\n");
    }
    FUNC_0 (VAR_7);
    VAR_5 += VAR_6;
  } else {
    if (!(VAR_7 = FUNC_4 (VAR_6))) {
      FUNC_2 (VAR_4, "Out of memory\n");
    }
    FUNC_0 (VAR_7);
    VAR_2 += VAR_6;
  }

  FUNC_0(VAR_7);
  return VAR_7;
}
