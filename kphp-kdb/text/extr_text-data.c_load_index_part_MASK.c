
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
 int FUNC_2 (int ,char*,long long,long long,unsigned int,...) ;
 int VAR_3 ;
 int VAR_4 ;
 long long VAR_5 ;
 int VAR_6 ;
 long long FUNC_3 (int ,long long,int ) ;
 int FUNC_4 (int ,struct iovec*,int) ;
 int VAR_7 ;
 void* FUNC_5 (long long) ;

void *FUNC_6 (void *VAR_8, long long VAR_9, long long VAR_10, int VAR_11) {
  int VAR_12;
  static struct iovec VAR_13[2];
  static unsigned VAR_14;
  FUNC_0 (VAR_10 >= 0 && VAR_10 <= (long long) (VAR_2 - VAR_1));
  FUNC_0 (VAR_10 <= VAR_11 || !VAR_11);
  FUNC_0 (VAR_9 >= 0 && VAR_9 <= VAR_5 && VAR_9 + VAR_10 <= VAR_5);
  if (!VAR_8) {
    VAR_8 = FUNC_5 (VAR_10);
  }
  FUNC_0 (FUNC_3 (VAR_4, VAR_9, VAR_0) == VAR_9);
  VAR_13[0].iov_base = VAR_8;
  VAR_13[0].iov_len = VAR_10;
  VAR_13[1].iov_base = &VAR_14;
  VAR_13[1].iov_len = 4;
  VAR_12 = FUNC_4 (VAR_4, VAR_13, 1 + VAR_3);
  VAR_10 += VAR_3 * 4;
  if (VAR_12 != VAR_10) {
    FUNC_2 (VAR_7, "error reading data from index file: read %lld bytes instead of %lld at position %u: %m\n", VAR_12, VAR_10, VAR_9);
    FUNC_0 (VAR_12 == VAR_10);
    return 0;
  }
  if (VAR_3) {
    unsigned VAR_15 = FUNC_1 (VAR_8, VAR_10 - 4);
    if (VAR_15 != VAR_14) {
      FUNC_2 (VAR_7, "error reading %lld bytes from index file at position %lld: crc32 mismatch: expected %08x, actual %08x\n", VAR_10, VAR_9, VAR_14, VAR_15);
      FUNC_0 (VAR_15 == VAR_14);
      return 0;
    }
  }
  VAR_6 += VAR_12;
  return VAR_8;
}
