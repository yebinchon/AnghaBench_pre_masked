
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int odb; } ;
struct TYPE_5__ {TYPE_1__ data; int raw; } ;
typedef TYPE_2__ git_blob ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(void *VAR_0)
{
 git_blob *VAR_1 = (git_blob *) VAR_0;
 if (!VAR_1->raw)
  FUNC_1(VAR_1->data.odb);
 FUNC_0(VAR_1);
}
