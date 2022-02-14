
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int VAR_3 ;
 void* FUNC_1 (int,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 () ;
 int VAR_5 ;
 void* FUNC_4 (int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void *FUNC_5 (int VAR_10) {
  if (VAR_10<0) return 0;
  void *VAR_11;

  if (FUNC_3() > VAR_7) {
    FUNC_2 (VAR_8, "Out of memory\n");
  }

  if (FUNC_3 () > VAR_7) {
    FUNC_2 (VAR_8, "too much memory used: %lld of %lld\n", (long long) FUNC_3 (), (long long) VAR_7);
    FUNC_2 (VAR_8, "memory distributes as follow: %d to current, %d to cache, %d to metafiles, %d to init data\n", VAR_4, VAR_3, VAR_2, VAR_5);
  }
  FUNC_0 (FUNC_3() <= VAR_7);

  if (VAR_10 < VAR_0) {
    if (!(VAR_11 = FUNC_1 (VAR_10, VAR_1))) {
      FUNC_2 (VAR_8, "Out of memory\n");
    }
    FUNC_0 (VAR_11);
    VAR_9 += VAR_10;
  } else {
    if (!(VAR_11 = FUNC_4 (VAR_10))) {
      FUNC_2 (VAR_8, "Out of memory\n");
    }
    FUNC_0 (VAR_11);
    VAR_6 += VAR_10;
  }

  FUNC_0(VAR_11);
  return VAR_11;
}
