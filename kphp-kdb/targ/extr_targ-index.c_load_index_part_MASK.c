
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {unsigned int* iov_base; long long iov_len; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (void*,long long) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*,long long,long long,...) ;
 long long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long long FUNC_3 (int ,long long,int ) ;
 void* FUNC_4 (long long) ;
 int FUNC_5 (int ,struct iovec*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_6 (long long) ;

void *FUNC_7 (void *VAR_8, long long VAR_9, long long VAR_10, int VAR_11) {
  int VAR_12;
  static struct iovec VAR_13[2];
  static unsigned VAR_14;
  FUNC_0 (VAR_10 >= 0 && VAR_10 <= (long long) (VAR_2 - VAR_1));
  FUNC_0 (VAR_10 <= VAR_11 || !VAR_11);
  FUNC_0 (VAR_9 >= 0 && VAR_9 <= VAR_3 && VAR_9 + VAR_10 <= VAR_3);
  if (!VAR_8) {
    VAR_8 = FUNC_6 (VAR_10);
  } else if (VAR_8 == (void *) -1) {
    VAR_8 = FUNC_4 (VAR_10);
  }
  FUNC_0 (FUNC_3 (VAR_4, VAR_9, VAR_0) == VAR_9);
  VAR_13[0].iov_base = VAR_8;
  VAR_13[0].iov_len = VAR_10;
  VAR_13[1].iov_base = &VAR_14;
  VAR_13[1].iov_len = 4;
  VAR_12 = FUNC_5 (VAR_4, VAR_13, 2);
  if (VAR_12 != VAR_10 + 4) {
    FUNC_2 (VAR_6, "error reading data from index file: read %lld bytes instead of %lld at position %lld: %m\n", VAR_12, VAR_10 + 4, VAR_9);
    FUNC_0 (VAR_12 == VAR_10 + 4);
    return 0;
  }
  if (VAR_7 > 3) {
    FUNC_2 (VAR_6, "loaded %lld bytes from index at position %lld\n", VAR_10 + 4, VAR_9);
  }
  unsigned VAR_15 = FUNC_1 (VAR_8, VAR_10);
  if (VAR_15 != VAR_14) {
    FUNC_2 (VAR_6, "error reading %lld bytes from index file at position %lld: crc32 mismatch: expected %08x, actual %08x\n", VAR_10, VAR_9, VAR_14, VAR_15);
    FUNC_0 (VAR_15 == VAR_14);
    return 0;
  }
  VAR_5 += VAR_12;
  return VAR_8;
}
