
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uahash_t ;
struct TYPE_4__ {int flags; int id; } ;
typedef TYPE_1__ pattern_t ;
typedef int ip_t ;
typedef int byte ;
struct TYPE_5__ {TYPE_1__** first; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char const*,int) ;
 int FUNC_1 (int ,int ,char const*,int) ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_6 (ip_t VAR_8, uahash_t VAR_9, const char *VAR_10, byte VAR_11, int VAR_12) {
  int VAR_13 = 0;
  if (VAR_12 >= 0) {
    VAR_13 = FUNC_1 (VAR_8, VAR_9, VAR_10, VAR_12);
  } else {
    VAR_13 = FUNC_0 (VAR_8, VAR_9, VAR_10, -VAR_12);
  }

  FUNC_4 (VAR_2, 0);
  pattern_t **VAR_14 = VAR_3.first;
  pattern_t **VAR_15 = VAR_14 + FUNC_5 (VAR_3);
  for (; VAR_14 != VAR_15; ++VAR_14) {
    if (VAR_11 & VAR_1) {
      FUNC_3 (VAR_2, (*VAR_14)->id);
    }
    if (VAR_11 & VAR_0) {
      FUNC_3 (VAR_2, (*VAR_14)->flags);
    }
  }

  ++VAR_4;
  if (VAR_13 != 0) {
    ++VAR_5;
    VAR_7 += VAR_13;
    FUNC_2 (VAR_6, VAR_13);
  }
  return VAR_13;
}
