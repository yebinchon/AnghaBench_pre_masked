
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int x; } ;
typedef TYPE_1__ tree_ext_small_t ;
struct tree_payload {scalar_t__ text; int global_id; int date; int flags; int value; } ;
struct TYPE_8__ {scalar_t__ N; } ;


 struct tree_payload* FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 TYPE_3__ VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (scalar_t__) ;
 char* FUNC_5 (scalar_t__) ;
 char* FUNC_6 (scalar_t__,int*) ;
 int FUNC_7 (int**,int ) ;
 int FUNC_8 (int**,int ) ;

__attribute__((used)) static inline int FUNC_9 (tree_ext_small_t *VAR_6) {
  int VAR_7 = VAR_3, *VAR_8 = VAR_2;
  struct tree_payload *VAR_9 = FUNC_0 (VAR_6);
  if (VAR_7 & 1024) {
    int VAR_10;

    if (VAR_9->text) {
      *((char **)(VAR_8 - VAR_1 - 1)) = VAR_9->text == VAR_5 ? 0 : FUNC_5 (VAR_9->text);
      VAR_10 = FUNC_4 (VAR_9->text);
    } else {
      FUNC_3 (FUNC_2 (VAR_6) != VAR_4);
      *((char **)(VAR_8 - VAR_1 - 1)) = FUNC_6 (VAR_0.N - FUNC_1 (VAR_6), &VAR_10);
    }

    *--VAR_8 = VAR_10;
    VAR_8 -= VAR_1;
  }
  if (VAR_7 & 512) {
    FUNC_8 (&VAR_8, VAR_9->value);
  }
  if (VAR_7 & 256) {
    *--VAR_8 = VAR_9->global_id;
  }
  if (VAR_7 & 128) {
    *--VAR_8 = VAR_9->date;
  }
  if (VAR_7 & 64) {
    *--VAR_8 = VAR_9->flags;
  }
  FUNC_7 (&VAR_8, VAR_6->x);
  VAR_2 = VAR_8;
  return 0;
}
