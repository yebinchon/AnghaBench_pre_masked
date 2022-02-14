
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_value_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

ecma_value_t
FUNC_3 (ecma_value_t VAR_2,
                        bool VAR_3)
{
  ecma_value_t VAR_4 = VAR_0;

  FUNC_1 (VAR_1,
                               VAR_2,
                               VAR_4);

  VAR_4 = FUNC_2 (VAR_3 ? VAR_1 : -VAR_1);

  FUNC_0 (VAR_1);

  return VAR_4;
}
