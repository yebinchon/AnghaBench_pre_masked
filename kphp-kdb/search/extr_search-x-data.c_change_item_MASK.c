
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct item {int extra; int words; int sum_sqr_freq_text; int sum_freq_title_freq_text; int sum_sqr_freq_title; } ;
struct index_item {int extra; } ;
struct TYPE_4__ {int freqs; int word; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,int,int *,int *,int *) ;
 int FUNC_3 (char const*,int,int ,TYPE_1__*,int,int ,long long) ;
 int FUNC_4 (long long) ;
 struct index_item* FUNC_5 (long long) ;
 struct item* FUNC_6 (long long,int ) ;
 int FUNC_7 (struct item*,int ,int ) ;
 int FUNC_8 (struct item*) ;
 int VAR_6 ;
 int FUNC_9 (struct item*,struct index_item*) ;
 int VAR_7 ;
 int FUNC_10 (struct item*,int,int*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (int,char*,char const*,int,long long,int,int) ;

__attribute__((used)) static int FUNC_12 (const char *VAR_10, int VAR_11, long long VAR_12, int VAR_13, int VAR_14) {
  struct item *VAR_15;
  struct index_item *VAR_16;

  FUNC_0 (VAR_10 && VAR_11 >= 0 && VAR_11 < 65536 && !VAR_10[VAR_11]);
  FUNC_0 (VAR_12 > 0);

  if (!FUNC_4 (VAR_12)) {
    return 0;
  }

  FUNC_11 (4, "change_item: text=%s, len = %d, item_id = %016llx, rate = %d, rate2 = %d\n",
    VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);

  VAR_16 = FUNC_5 (VAR_12);
  if (VAR_16) {
    VAR_6++;
    VAR_16->extra |= VAR_1;
  }

  VAR_15 = FUNC_6 (VAR_12, VAR_2);
  if (VAR_15) {
    if (VAR_15->extra & VAR_1) {
      VAR_5--;
      VAR_15->extra ^= VAR_1;
    }
    FUNC_8 (VAR_15);
  } else {
    VAR_15 = FUNC_6 (VAR_12, VAR_0);
    if (!VAR_15) {
      return 0;
    }
  }

  if (VAR_16) {
    FUNC_9 (VAR_15, VAR_16);
  }

  int VAR_17[3];
  VAR_17[0] = VAR_13;
  VAR_17[1] = VAR_14;
  VAR_17[2] = VAR_7;
  FUNC_10 (VAR_15, 1 + 2 + 4, VAR_17);







  FUNC_1 ();
  int VAR_18, VAR_19 = FUNC_3 (VAR_10, VAR_11, VAR_9, VAR_3, 65536, VAR_8, VAR_12);
  for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++) {
    FUNC_7 (VAR_15, VAR_3[VAR_18].word, VAR_3[VAR_18].freqs);
  }
  FUNC_2 (VAR_3, VAR_19, &VAR_15->sum_sqr_freq_title, &VAR_15->sum_freq_title_freq_text, &VAR_15->sum_sqr_freq_text);
  VAR_15->words = VAR_4;
  return 1;
}
