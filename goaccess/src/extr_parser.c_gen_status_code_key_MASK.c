
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* data; char* data_key; char* root; char* root_key; } ;
struct TYPE_5__ {int status; } ;
typedef TYPE_1__ GLogItem ;
typedef TYPE_2__ GKeyData ;


 char* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2 (GKeyData * VAR_0, GLogItem * VAR_1)
{
  const char *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);

  if (!VAR_1->status)
    return 1;

  VAR_3 = FUNC_1 (VAR_1->status);
  VAR_2 = FUNC_0 (VAR_1->status);

  VAR_0->data = (char *) VAR_2;
  VAR_0->data_key = (char *) VAR_2;

  VAR_0->root = (char *) VAR_3;
  VAR_0->root_key = (char *) VAR_3;

  return 0;
}
