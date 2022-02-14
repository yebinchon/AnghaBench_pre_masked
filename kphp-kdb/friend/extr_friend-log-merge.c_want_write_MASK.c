
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_generic {scalar_t__ a; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_1 (int VAR_7, void *VAR_8) {
  struct lev_generic *VAR_9 = VAR_8;

  if (VAR_7 == VAR_0 && VAR_9->a > VAR_6) {
    VAR_6 = VAR_9->a;
    if (VAR_6 > VAR_5 && !VAR_1) {
      VAR_1 = 1;
      FUNC_0 (VAR_4, "reached binlog time %ld above cutoff time %ld at read position %d\n", VAR_6, VAR_5, VAR_2);
    }
  }

  if (VAR_7 == VAR_0 && VAR_3) {
    return 0;
  }

  return VAR_1;
}
