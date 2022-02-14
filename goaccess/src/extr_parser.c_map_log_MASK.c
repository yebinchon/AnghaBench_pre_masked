
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ data_key; scalar_t__ root_key; void* root_nkey; int uniq_nkey; void* data_nkey; } ;
struct TYPE_14__ {int uniq_nkey; scalar_t__ uniq_key; } ;
struct TYPE_13__ {int (* key_data ) (TYPE_3__*,TYPE_2__*) ;scalar_t__ datamap; scalar_t__ rootmap; scalar_t__ visitor; } ;
typedef TYPE_1__ GParse ;
typedef int GModule ;
typedef TYPE_2__ GLogItem ;
typedef TYPE_3__ GKeyData ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (char*,int ) ;
 char* FUNC_4 (int ,void*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,TYPE_1__ const*) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_8 (GLogItem * VAR_0, const GParse * VAR_1, GModule VAR_2)
{
  GKeyData VAR_3;
  char *VAR_4 = ((void*)0);

  FUNC_5 (&VAR_3);
  if (VAR_1->key_data (&VAR_3, VAR_0) == 1)
    return;


  if (VAR_1->datamap && VAR_3.data_key)
    VAR_3.data_nkey = FUNC_2 (VAR_3.data_key, VAR_2);


  if (VAR_1->visitor && VAR_0->uniq_key && FUNC_1 (VAR_0)) {
    VAR_4 = FUNC_4 (VAR_0->uniq_nkey, VAR_3.data_nkey);

    VAR_3.uniq_nkey = FUNC_3 (VAR_4, VAR_2);
    FUNC_0 (VAR_4);
  }


  if (VAR_1->rootmap && VAR_3.root_key)
    VAR_3.root_nkey = FUNC_2 (VAR_3.root_key, VAR_2);


  if (VAR_1->datamap && VAR_3.data_key)
    FUNC_6 (VAR_0, &VAR_3, VAR_1);
}
