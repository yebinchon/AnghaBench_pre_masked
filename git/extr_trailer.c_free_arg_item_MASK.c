
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct arg_item* command; struct arg_item* key; struct arg_item* name; } ;
struct arg_item {struct arg_item* value; struct arg_item* token; TYPE_1__ conf; } ;


 int FUNC_0 (struct arg_item*) ;

__attribute__((used)) static void FUNC_1(struct arg_item *VAR_0)
{
 FUNC_0(VAR_0->conf.name);
 FUNC_0(VAR_0->conf.key);
 FUNC_0(VAR_0->conf.command);
 FUNC_0(VAR_0->token);
 FUNC_0(VAR_0->value);
 FUNC_0(VAR_0);
}
