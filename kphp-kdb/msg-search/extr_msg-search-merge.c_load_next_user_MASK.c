
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ magic; scalar_t__ user_id; int hash_cnt; int list_cnt; } ;
typedef TYPE_1__ user_header_t ;
typedef int pair_t ;
struct TYPE_7__ {scalar_t__ user_id; int hash_cnt; } ;


 int * VAR_0 ;
 int* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 TYPE_2__ VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 () ;
 int * VAR_9 ;
 char** VAR_10 ;
 int FUNC_2 (int ,char*,char*,long long,...) ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;

int FUNC_5 (void) {
  int VAR_16, VAR_17 = sizeof(user_header_t);

  VAR_12 += VAR_8;
  VAR_13 += VAR_8;
  VAR_8 = VAR_6.user_id = 0;
  FUNC_0 (VAR_12 <= VAR_15);

  while (1) {
    if (VAR_12 == VAR_15) {
      VAR_12 = VAR_15 = VAR_11;
    }
    if (VAR_15 - VAR_12 < VAR_17) {
      FUNC_3 (VAR_11, VAR_12, VAR_15 - VAR_12);
      VAR_15 -= VAR_12 - VAR_11;
      VAR_12 = VAR_11;
      VAR_16 = FUNC_4 (VAR_9[0], VAR_15, VAR_11 + VAR_2 - VAR_15);
      if (VAR_16 < 0) {
 FUNC_2 (VAR_14, "fatal: error reading file %s at position %lld: %m\n", VAR_10[0], (long long) VAR_13);
 FUNC_1();
 return -1;
      }
      VAR_15 += VAR_16;
    }
    if (VAR_15 == VAR_12) {
      return 0;
    }
    if (VAR_15 - VAR_12 < VAR_17) {
      FUNC_2 (VAR_14, "error reading file %s at pos %lld: %ld bytes available, %d required\n",
        VAR_10[0], (long long) VAR_13, (long) (VAR_15 - VAR_12), VAR_17);
      return 0;
    }

    VAR_7 = (user_header_t *) VAR_12;

    FUNC_0 (VAR_7->magic == VAR_3);
    FUNC_0 (VAR_7->user_id > 0);
    FUNC_0 ((unsigned) VAR_7->hash_cnt <= VAR_5 && (unsigned) VAR_7->list_cnt <= VAR_4);

    VAR_8 = sizeof (user_header_t) + VAR_7->hash_cnt * 16 + VAR_7->list_cnt * 4;

    if (VAR_15 - VAR_12 < VAR_8) {
      VAR_17 = VAR_8;
      continue;
    }

    FUNC_3 (&VAR_6, VAR_7, sizeof (user_header_t));
    VAR_0 = (pair_t *) (VAR_12 + sizeof (user_header_t));
    VAR_1 = (int *) (VAR_12 + sizeof (user_header_t) + VAR_6.hash_cnt * 16);

    return VAR_6.user_id;
  }

  return -1;
}
