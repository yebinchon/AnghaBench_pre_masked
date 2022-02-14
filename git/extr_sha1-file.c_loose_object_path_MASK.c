
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct repository {TYPE_1__* objects; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int odb; } ;


 char const* FUNC_0 (int ,struct strbuf*,struct object_id const*) ;

const char *FUNC_1(struct repository *VAR_0, struct strbuf *VAR_1,
         const struct object_id *VAR_2)
{
 return FUNC_0(VAR_0->objects->odb, VAR_1, VAR_2);
}
