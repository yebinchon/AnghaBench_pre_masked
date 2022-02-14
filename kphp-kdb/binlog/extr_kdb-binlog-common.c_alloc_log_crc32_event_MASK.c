
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_crc32 {long long pos; unsigned int crc32; int timestamp; } ;


 int VAR_0 ;
 struct lev_crc32* FUNC_0 (int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char*,int,long long,unsigned int) ;
 long long VAR_4 ;
 long long VAR_5 ;
 long long VAR_6 ;
 unsigned int FUNC_3 () ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static inline void FUNC_4 (void) {
  unsigned VAR_9 = FUNC_3();
  long long VAR_10 = VAR_4;

  if (!VAR_1) {
    if (!VAR_2 && VAR_10 >= VAR_6 && FUNC_1() > 0) {
      return;
    }
  } else {
    if (!VAR_2 && VAR_5 >= VAR_6 && FUNC_1() > 0) {
      return;
    }
  }

  struct lev_crc32 *VAR_11 = FUNC_0 (VAR_0, sizeof (struct lev_crc32), 0);
  VAR_11->pos = VAR_10;
  VAR_11->crc32 = VAR_9;

  if (VAR_8 > 2) {
    FUNC_2 (VAR_7, "written log crc32 event: timestamp=%d, pos=%lld, crc32=%08x\n", VAR_11->timestamp, VAR_10, VAR_9);
  }

  VAR_3 = 0;
}
