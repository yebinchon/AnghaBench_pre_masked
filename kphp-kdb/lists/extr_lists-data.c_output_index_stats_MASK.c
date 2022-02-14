
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tot_lists; } ;
struct TYPE_3__ {int tot_lists; scalar_t__ data_end_offset; int extra_data_offset; int revlist_data_offset; int list_data_offset; int list_index_offset; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 double VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,long,long,...) ;
 double VAR_7 ;
 double VAR_8 ;
 double VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_1 (void) {
  FUNC_0 (VAR_11, "%ld total lists: %ld lists from old index, %d in memory\n",
    VAR_1.tot_lists, VAR_0.tot_lists, VAR_12);
  FUNC_0 (VAR_11, "%ld total list entries (%.3ld average); %d in-memory entries\n",
    VAR_10, VAR_1.tot_lists ? (double) VAR_10 / VAR_1.tot_lists : 0, VAR_2);

  if (VAR_1.data_end_offset > 0) {
    FUNC_0 (VAR_11, "index offsets: list_index=%ld list_data=%ld revlist_data=%d extra_data=%d end=%ld\n",
  VAR_1.list_index_offset, VAR_1.list_data_offset, VAR_1.revlist_data_offset, VAR_1.extra_data_offset, VAR_1.data_end_offset);
  }
  FUNC_0 (VAR_11, "total time: %.4lds = %.4lds + %.04fs + %.04fs (read index + read binlog + generate index)\n",
     VAR_7 - VAR_8 + VAR_9 + VAR_3,
     VAR_9, VAR_3, VAR_7 - VAR_8);
  FUNC_0 (VAR_11, "used memory: %ld bytes out of %ld\n", (long) (VAR_4 - VAR_5), (long) (VAR_6 - VAR_5));
}
