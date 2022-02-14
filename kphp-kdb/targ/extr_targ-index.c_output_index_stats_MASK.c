
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct treespace_header {int used_ints; } ;
struct TYPE_2__ {scalar_t__ data_end; scalar_t__ stale_ads_data_offset; scalar_t__ stale_ads_directory_offset; scalar_t__ fresh_ads_data_offset; scalar_t__ fresh_ads_directory_offset; scalar_t__ word_data_offset; scalar_t__ user_data_offset; scalar_t__ word_directory_offset; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 double VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,char*,double,...) ;
 double VAR_10 ;
 double VAR_11 ;
 int FUNC_1 () ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static void FUNC_2 (void) {
  FUNC_0 (VAR_18, "binlog loaded in %.3f seconds, binlog position %d, timestamp %d\n", VAR_5, FUNC_1 (), VAR_12);
  FUNC_0 (VAR_18, "word directory: %f words, %ld bytes, %d short words\n", VAR_15, VAR_1.user_data_offset - VAR_1.word_directory_offset, VAR_16);
  FUNC_0 (VAR_18, "user data: %f users, max_uid=%d, %ld bytes\n", VAR_23, VAR_13, VAR_1.word_data_offset - VAR_1.user_data_offset);
  FUNC_0 (VAR_18, "word data: %f words, %ld bytes, %d word-user pairs\n", VAR_15 - VAR_16, VAR_1.fresh_ads_directory_offset - VAR_1.word_data_offset, VAR_24);
  FUNC_0 (VAR_18, "fresh ads: %f ads, %ld bytes in directory, %ld ad info bytes (%d of them in userlists)\n", VAR_14, VAR_1.stale_ads_directory_offset - VAR_1.fresh_ads_directory_offset, VAR_1.stale_ads_data_offset - VAR_1.fresh_ads_data_offset, VAR_19);
  FUNC_0 (VAR_18, "stale ads: %f ads, %ld bytes in directory, %ld ad info bytes (%d of them in userlists)\n", VAR_17, VAR_1.fresh_ads_data_offset - VAR_1.stale_ads_directory_offset, VAR_1.data_end - VAR_1.stale_ads_data_offset, VAR_20);
  FUNC_0 (VAR_18, "loaded %f ancient ads, %d bytes\n", VAR_3, VAR_4);
  FUNC_0 (VAR_18, "total index size %f bytes\n", VAR_1.data_end);
  FUNC_0 (VAR_18, "index generated in %.3f seconds, used %ld dyn_heap bytes, %d heap bytes for %d userlists, %d+%d treespace ints\n", VAR_10 - VAR_11, (long) (VAR_6 - VAR_7 + VAR_8 - VAR_9), VAR_22 << 2, VAR_21, ((struct treespace_header *)VAR_0)->used_ints, ((struct treespace_header *)VAR_2)->used_ints);
}
