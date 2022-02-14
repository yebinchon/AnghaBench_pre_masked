
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conf_info {void* command; void* key; void* name; } ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(struct conf_info *VAR_0, const struct conf_info *VAR_1)
{
 *VAR_0 = *VAR_1;
 VAR_0->name = FUNC_0(VAR_1->name);
 VAR_0->key = FUNC_0(VAR_1->key);
 VAR_0->command = FUNC_0(VAR_1->command);
}
