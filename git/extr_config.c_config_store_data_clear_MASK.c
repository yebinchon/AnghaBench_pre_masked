
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_store_data {int * seen; int * parsed; int * value_regex; int * key; } ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct config_store_data*,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct config_store_data *VAR_1)
{
 FUNC_0(VAR_1->key);
 if (VAR_1->value_regex != ((void*)0) &&
     VAR_1->value_regex != VAR_0) {
  FUNC_2(VAR_1->value_regex);
  FUNC_0(VAR_1->value_regex);
 }
 FUNC_0(VAR_1->parsed);
 FUNC_0(VAR_1->seen);
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
}
