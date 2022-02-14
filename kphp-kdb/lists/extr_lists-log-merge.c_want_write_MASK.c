
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_generic {scalar_t__ a; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_1 (int VAR_10, void *VAR_11) {
  struct lev_generic *VAR_12 = VAR_11;

  if (VAR_10 == VAR_1 && VAR_12->a > VAR_7) {
    VAR_7 = VAR_12->a;
    if (VAR_7 > VAR_6 && !VAR_2) {
      VAR_2 = 1;
      FUNC_0 (VAR_5, "reached binlog time %ld above cutoff time %ld at read position %d\n", VAR_7, VAR_6, VAR_3);
    }
  }

  if (VAR_7 <= VAR_8 && VAR_7 > VAR_9) {
    return VAR_10 != VAR_0;
  }

  if (VAR_8) {
    return 1;
  }

  if (VAR_10 == VAR_1 && VAR_4) {
    return 0;
  }

  return VAR_2;
}
