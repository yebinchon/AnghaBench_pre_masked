
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {void* cl; int func; } ;
typedef int List ;
typedef int Apply ;


 int FUNC_0 (struct entry*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct entry*,int ) ;

void FUNC_2(Apply VAR_1, void *VAR_2, List *VAR_3) {
 struct entry *VAR_4;

 FUNC_0(VAR_4, VAR_0);
 VAR_4->func = VAR_1;
 VAR_4->cl = VAR_2;
 *VAR_3 = FUNC_1(VAR_4, *VAR_3);
}
