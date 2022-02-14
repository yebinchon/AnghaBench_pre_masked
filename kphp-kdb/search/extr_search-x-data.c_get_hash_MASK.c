
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int extra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 long long FUNC_1 (struct item*) ;
 scalar_t__ FUNC_2 (long long) ;
 struct item* FUNC_3 (long long,int ) ;
 int FUNC_4 (int,char*,long long,struct item*,struct item*) ;

int FUNC_5 (long long *VAR_2, long long VAR_3) {
  struct item *VAR_4 = FUNC_3 (VAR_3, VAR_1);
  struct item *VAR_5 = (struct item*) FUNC_2 (VAR_3);

  FUNC_4 (2, "get_hash(%016llx): %p %p\n", VAR_3, VAR_4, VAR_5);

  if (VAR_5) {
    FUNC_0 (!VAR_4);
    *VAR_2 = FUNC_1 (VAR_5);
    return 1;
  }

  if (!VAR_4 || (VAR_4->extra & VAR_0)) {
    return 0;
  }
  *VAR_2 = FUNC_1 (VAR_4);
  return 1;
}
