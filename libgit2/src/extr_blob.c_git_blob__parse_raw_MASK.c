
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* data; size_t size; } ;
struct TYPE_6__ {TYPE_1__ raw; } ;
struct TYPE_7__ {int raw; TYPE_2__ data; } ;
typedef TYPE_3__ git_blob ;


 int FUNC_0 (TYPE_3__*) ;

int FUNC_1(void *VAR_0, const char *VAR_1, size_t VAR_2)
{
 git_blob *VAR_3 = (git_blob *) VAR_0;
 FUNC_0(VAR_3);
 VAR_3->raw = 1;
 VAR_3->data.raw.data = VAR_1;
 VAR_3->data.raw.size = VAR_2;
 return 0;
}
