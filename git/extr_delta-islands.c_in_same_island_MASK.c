
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
typedef scalar_t__ khiter_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,struct object_id const) ;
 int FUNC_3 (int ,scalar_t__) ;

int FUNC_4(const struct object_id *VAR_1, const struct object_id *VAR_2)
{
 khiter_t VAR_3, VAR_4;


 if (!VAR_0)
  return 1;





 VAR_3 = FUNC_2(VAR_0, *VAR_1);
 if (VAR_3 >= FUNC_1(VAR_0))
  return 1;





 VAR_4 = FUNC_2(VAR_0, *VAR_2);
 if (VAR_4 >= FUNC_1(VAR_0))
  return 0;

 return FUNC_0(FUNC_3(VAR_0, VAR_3),
    FUNC_3(VAR_0, VAR_4));
}
