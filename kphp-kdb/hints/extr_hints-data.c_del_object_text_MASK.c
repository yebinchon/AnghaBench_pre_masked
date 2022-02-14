
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_hints_del_object_text {int type; scalar_t__ object_id; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *,int,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int ** VAR_4 ;
 scalar_t__ VAR_5 ;

int FUNC_2 (struct lev_hints_del_object_text *VAR_6) {
  if ((VAR_6->type & 0xff) == 0 || !FUNC_0 (VAR_6->object_id)) {
    return 0;
  }

  if (VAR_5 || VAR_3) {
    return 1;
  }

  VAR_4[VAR_6->type & 0xff][0]++;

  FUNC_1 (&VAR_2, &VAR_1, -(VAR_6->type & 0xff), (int)VAR_6->object_id, ((void*)0));
  VAR_0++;

  return 1;
}
