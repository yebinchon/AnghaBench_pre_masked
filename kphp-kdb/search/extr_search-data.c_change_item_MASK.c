
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct index_item {int extra; } ;
struct TYPE_10__ {int extra; int mask; int words; } ;
typedef TYPE_1__ item_t ;
struct TYPE_11__ {int freqs; int word; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__* VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_7__*,int) ;
 int FUNC_3 (char const*,int,int ,TYPE_7__*,int,int ,long long) ;
 int FUNC_4 (long long) ;
 struct index_item* FUNC_5 (long long) ;
 int * FUNC_6 (struct index_item*,int ) ;
 TYPE_1__* FUNC_7 (long long,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int VAR_8 ;
 int FUNC_10 (TYPE_1__*,struct index_item*) ;
 int VAR_9 ;
 int FUNC_11 (TYPE_1__*,int,int*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (int,char*,char const*,int,long long,int,int) ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static int FUNC_13 (const char *VAR_13, int VAR_14, long long VAR_15, int VAR_16, int VAR_17) {
  item_t *VAR_18;
  struct index_item *VAR_19;

  FUNC_0 (VAR_13 && VAR_14 >= 0 && VAR_14 < 65536 && !VAR_13[VAR_14]);
  FUNC_0 (VAR_15 > 0);

  if (!FUNC_4 (VAR_15)) {
    return 0;
  }

  if (VAR_7) {
    return 1;
  }

  FUNC_12 (4, "change_item: text=%s, len = %d, item_id = %016llx, rate = %d, rate2 = %d\n",
    VAR_13, VAR_14, VAR_15, VAR_16, VAR_17);

  VAR_19 = FUNC_5 (VAR_15);
  if (VAR_19) {
    VAR_8++;
    VAR_19->extra |= VAR_1;
    FUNC_9 ((item_t *) VAR_19, FUNC_6 (VAR_19, 0));
  }

  VAR_18 = FUNC_7 (VAR_15, VAR_2);
  if (VAR_18) {
    if (VAR_18->extra & VAR_1) {
      VAR_6--;
      VAR_18->extra ^= VAR_1;
    }
    FUNC_9 (VAR_18, &VAR_18->words);
  } else {
    VAR_18 = FUNC_7 (VAR_15, VAR_0);
    if (!VAR_18) {
      return 0;
    }
  }

  if (VAR_19) {
    FUNC_10 (VAR_18, VAR_19);
  }

  int VAR_20[4], VAR_21 = 1 + 2, VAR_22 = 2;
  VAR_20[0] = VAR_16;
  VAR_20[1] = VAR_17;
  if (!VAR_4 || !(VAR_18->mask & 4)) {
    VAR_20[VAR_22++] = VAR_9;
    VAR_21 += 4;
  }

  FUNC_1 ();
  int VAR_23, VAR_24 = FUNC_3 (VAR_13, VAR_14, VAR_11, VAR_3, 65536, VAR_10, VAR_15);
  for (VAR_23 = 0; VAR_23 < VAR_24; VAR_23++) {
    FUNC_8 (VAR_18, VAR_3[VAR_23].word, VAR_3[VAR_23].freqs);
  }
  VAR_18->words = VAR_5;
  if (VAR_12) {
    VAR_20[VAR_22++] = FUNC_2 (VAR_3, VAR_24);
    VAR_21 |= 1 << 13;
  }
  FUNC_11 (VAR_18, VAR_21, VAR_20);
  return 1;
}
