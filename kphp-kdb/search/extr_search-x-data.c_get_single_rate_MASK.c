
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int extra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (long long) ;
 struct item* FUNC_2 (long long,int ) ;
 int FUNC_3 (struct item*,int) ;
 int FUNC_4 (int,char*,long long,struct item*,struct item*) ;

int FUNC_5 (int *VAR_2, long long VAR_3, int VAR_4) {
  struct item *VAR_5 = FUNC_2 (VAR_3, VAR_1);
  struct item *VAR_6 = (struct item*) FUNC_1 (VAR_3);

  FUNC_4 (2, "get_single_rate(%016llx): %p %p\n", VAR_3, VAR_5, VAR_6);

  if (VAR_6) {
    FUNC_0 (!VAR_5);
    *VAR_2 = FUNC_3 (VAR_6, VAR_4);
    return 1;
  }

  if (!VAR_5 || (VAR_5->extra & VAR_0)) {
    return 0;
  }
  *VAR_2 = FUNC_3 (VAR_5, VAR_4);
  return 1;
}
