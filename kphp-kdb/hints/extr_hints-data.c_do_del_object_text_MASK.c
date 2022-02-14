
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_hints_del_object_text {long long object_id; } ;


 scalar_t__ VAR_0 ;
 struct lev_hints_del_object_text* FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (long long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct lev_hints_del_object_text*) ;

int FUNC_4 (int VAR_1, long long VAR_2) {
  if (!FUNC_2 (VAR_1) || !FUNC_1 (VAR_2)) {
    return 0;
  }

  struct lev_hints_del_object_text *VAR_3 =
    FUNC_0 (VAR_0 + VAR_1, sizeof (struct lev_hints_del_object_text), 0);

  VAR_3->object_id = VAR_2;

  return FUNC_3 (VAR_3);
}
