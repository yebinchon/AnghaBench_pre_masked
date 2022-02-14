
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct object_id {int dummy; } ;
struct TYPE_6__ {TYPE_1__* submodule_cache; } ;
struct TYPE_5__ {int gitmodules_read; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ,int ,struct object_id*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (struct object_id const*,struct object_id*,struct strbuf*) ;
 int VAR_1 ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* VAR_2 ;

void FUNC_4(const struct object_id *VAR_3)
{
 struct strbuf VAR_4 = VAR_0;
 struct object_id VAR_5;

 FUNC_3(VAR_2);

 if (FUNC_1(VAR_3, &VAR_5, &VAR_4)) {
  FUNC_0(VAR_1, VAR_4.buf,
      &VAR_5, VAR_2);
 }
 FUNC_2(&VAR_4);

 VAR_2->submodule_cache->gitmodules_read = 1;
}
