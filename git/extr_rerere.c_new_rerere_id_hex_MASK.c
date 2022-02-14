
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rerere_id {int variant; int collection; } ;


 int FUNC_0 (char*) ;
 struct rerere_id* FUNC_1 (int) ;

__attribute__((used)) static struct rerere_id *FUNC_2(char *VAR_0)
{
 struct rerere_id *VAR_1 = FUNC_1(sizeof(*VAR_1));
 VAR_1->collection = FUNC_0(VAR_0);
 VAR_1->variant = -1;
 return VAR_1;
}
