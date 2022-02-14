
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,struct object_id*) ;

int FUNC_2(void)
{
 struct object_id VAR_3;
 return FUNC_0(VAR_0) ||
  (FUNC_1(VAR_2, &VAR_3) < 0 && FUNC_1(VAR_1, &VAR_3) < 0);
}
