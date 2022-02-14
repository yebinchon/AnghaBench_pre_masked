
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct index_item {int extra; } ;
struct TYPE_7__ {int extra; int mask; int words; } ;
typedef TYPE_1__ item_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (long long) ;
 struct index_item* FUNC_3 (long long) ;
 TYPE_1__* FUNC_4 (long long,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (TYPE_1__*,struct index_item*) ;
 int FUNC_8 (char const*,int,int ,int,int ,int ,long long,int*) ;
 int FUNC_9 (TYPE_1__*,int,int*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int,char*,char const*,int,long long,int,int) ;

__attribute__((used)) static int FUNC_11 (const char *VAR_12, int VAR_13, long long VAR_14, int VAR_15, int VAR_16) {
  item_t *VAR_17;
  struct index_item *VAR_18;

  FUNC_0 (VAR_12 && VAR_13 >= 0 && VAR_13 < 65536 && !VAR_12[VAR_13]);
  FUNC_0 (VAR_14 > 0);

  if (!FUNC_2 (VAR_14)) {
    return 0;
  }

  if (VAR_7) {
    return 1;
  }

  FUNC_10 (4, "change_item: text=%s, len = %d, item_id = %016llx, rate = %d, rate2 = %d\n",
    VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);

  VAR_18 = FUNC_3 (VAR_14);
  if (VAR_18) {
    VAR_9++;
    VAR_18->extra |= VAR_1;

  }

  VAR_17 = FUNC_4 (VAR_14, VAR_2);
  if (VAR_17) {
    if (VAR_17->extra & VAR_1) {
      VAR_6--;
      VAR_17->extra ^= VAR_1;
    }
    FUNC_6 (VAR_17, &VAR_17->words);
  } else {
    VAR_17 = FUNC_4 (VAR_14, VAR_0);
    if (!VAR_17) {
      return 0;
    }
  }

  if (VAR_18) {
    FUNC_7 (VAR_17, VAR_18);
  }

  int VAR_19[4], VAR_20 = 1 + 2, VAR_21 = 2;
  VAR_19[0] = VAR_15;
  VAR_19[1] = VAR_16;
  if (!VAR_4 || !(VAR_17->mask & 4)) {
    VAR_19[VAR_21++] = VAR_8;
    VAR_20 += 4;
  }

  FUNC_1 ();
  int VAR_22;
  int VAR_23 = FUNC_8 (VAR_12, VAR_13, VAR_3, 65536, VAR_11, VAR_10, VAR_14, &VAR_22);
  FUNC_5 (VAR_17, VAR_23);
  VAR_17->words = VAR_5;
  FUNC_9 (VAR_17, VAR_20, VAR_19);
  return 1;
}
