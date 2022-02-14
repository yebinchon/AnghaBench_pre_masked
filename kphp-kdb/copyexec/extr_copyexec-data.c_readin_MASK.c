
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int,char*,int,long long) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void *FUNC_5 (int VAR_6, size_t VAR_7) {
  FUNC_4 (4, "readin (fd: %d, len: %lld)\n", VAR_6, (long long) VAR_7);
  FUNC_0 (VAR_7 >= 0);
  if (VAR_4 + VAR_7 <= VAR_5) {
    return VAR_4;
  }
  if (VAR_5 < VAR_1 + VAR_0) {
    return 0;
  }
  FUNC_2 (VAR_1, VAR_4, VAR_5 - VAR_4);
  VAR_5 -= VAR_4 - VAR_1;
  VAR_4 = VAR_1;
  int VAR_8;
  do {
    VAR_8 = FUNC_3 (VAR_6, VAR_5, VAR_1 + VAR_0 - VAR_5);
  } while (VAR_8 < 0 && VAR_3 == VAR_2);
  if (VAR_8 < 0) {
    FUNC_1 ("error reading file: %m\n");
  } else {
    VAR_5 += VAR_8;
  }
  if (VAR_4 + VAR_7 <= VAR_5) {
    return VAR_4;
  } else {
    return 0;
  }
}
