
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int type; int key; int key_len; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,struct item*) ;

void FUNC_2 (struct item *VAR_1, int VAR_2) {
  VAR_0 = FUNC_0 (VAR_0, VAR_1->key_len, VAR_1->key);
  VAR_1->type = (VAR_1->type & ~7) | VAR_2;
  VAR_0 = FUNC_1 (VAR_0, VAR_1);
}
