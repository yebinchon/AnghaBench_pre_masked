
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_generic {int dummy; } ;
struct lev_crc32 {long long pos; int crc32; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,long long,int ,long long,...) ;
 int VAR_2 ;
 int FUNC_2 () ;
 long long VAR_3 ;
 long long VAR_4 ;
 int FUNC_3 (struct lev_generic*) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5 (struct lev_generic *VAR_6, int VAR_7) {
  FUNC_4 (0);
  if (!(VAR_1 & 2)) {
    long long VAR_8 = FUNC_2() + VAR_7;
    if (~VAR_2 != ((struct lev_crc32 *) VAR_6)->crc32) {
      FUNC_1 (VAR_5, "crc mismatch at binlog position %lld, file %d offset %lld\n", VAR_8, VAR_0, VAR_8 - VAR_4 + VAR_3);
      FUNC_0 (~VAR_2 == ((struct lev_crc32 *) VAR_6)->crc32);
    }
    if (VAR_8 != ((struct lev_crc32 *) VAR_6)->pos) {
      FUNC_1 (VAR_5, "position at binlog position %lld, file %d offset %lld: expected position %lld\n", VAR_8, VAR_0, VAR_8 - VAR_4 + VAR_3, ((struct lev_crc32 *) VAR_6)->pos);
      FUNC_0 (VAR_8 == ((struct lev_crc32 *) VAR_6)->pos);
    }
  }
  FUNC_3 (VAR_6);
}
