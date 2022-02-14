
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tree_t ;
struct index_item {int dummy; } ;
struct TYPE_6__ {int * words; } ;
typedef TYPE_1__ item_t ;
struct TYPE_7__ {int freqs; int word; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (int) ;
 int * VAR_2 ;
 int FUNC_1 (char const* const,int,int ,TYPE_4__*,int,int ,long long) ;
 int FUNC_2 (long long) ;
 struct index_item* FUNC_3 (long long) ;
 int ** FUNC_4 (struct index_item*,int) ;
 TYPE_1__* FUNC_5 (long long,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7 (const char *const VAR_5, int VAR_6, long long VAR_7) {
  item_t *VAR_8 = ((void*)0);
  struct index_item *VAR_9 = ((void*)0);
  tree_t **VAR_10;

  FUNC_0 (VAR_5 && VAR_6 >= 0 && VAR_6 < 256 && !VAR_5[VAR_6]);
  FUNC_0 (VAR_7 > 0);
  if (!FUNC_2 (VAR_7)) {
    return 0;
  }
  if (VAR_3) {
    return 1;
  }

  VAR_9 = FUNC_3 (VAR_7);
  if (VAR_9 != ((void*)0)) {
    VAR_10 = FUNC_4 (VAR_9, 1);
    VAR_8 = (item_t *) VAR_9;
  } else {
    VAR_8 = FUNC_5 (VAR_7, VAR_0);
    if (VAR_8 == ((void*)0)) {
      return 0;
    }
    VAR_10 = &(VAR_8->words);
  }

  VAR_2 = *VAR_10;
  int VAR_11, VAR_12 = FUNC_1 (VAR_5, VAR_6, 0, VAR_1, 65536, VAR_4, VAR_7);
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
    FUNC_6 (VAR_8, VAR_1[VAR_11].word, VAR_1[VAR_11].freqs);
  }
  *VAR_10 = VAR_2;

  return 1;
}
