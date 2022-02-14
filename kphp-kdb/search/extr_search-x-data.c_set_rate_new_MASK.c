
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
 int FUNC_3 (struct item*,int,int) ;
 int FUNC_4 (int,char*,long long,int,int) ;

__attribute__((used)) static int FUNC_5 (long long VAR_2, int VAR_3, int VAR_4) {
  FUNC_4 (4, "set_rate_new(%016llx), p = %d, rate = %d\n", VAR_2, VAR_3, VAR_4);

  struct item *VAR_5 = FUNC_2 (VAR_2, VAR_1);
  struct item *VAR_6 = (struct item*) FUNC_1 (VAR_2);

  if (VAR_6) {
    FUNC_3 (VAR_6, VAR_3, VAR_4);
    FUNC_0 (!VAR_5);
    return 1;
  }

  if (!VAR_5 || (VAR_5->extra & VAR_0)) {
    return 0;
  }
  FUNC_3 (VAR_5, VAR_3, VAR_4);
  return 1;
}
