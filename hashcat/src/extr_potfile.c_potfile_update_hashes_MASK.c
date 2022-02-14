
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* nodes; int * hashconfig; } ;
typedef TYPE_1__ pot_tree_entry_t ;
struct TYPE_9__ {struct TYPE_9__* next; int * hash_buf; } ;
typedef TYPE_2__ pot_hash_node_t ;
typedef int hashconfig_t ;
struct TYPE_10__ {int * hashconfig; } ;
typedef TYPE_3__ hashcat_ctx_t ;
typedef int hash_t ;


 int FUNC_0 (TYPE_3__*,int *,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*,void**,int ) ;

void FUNC_2 (hashcat_ctx_t *VAR_1, hash_t *VAR_2, char *VAR_3, int VAR_4, pot_tree_entry_t *VAR_5)
{
  hashconfig_t *VAR_6 = VAR_1->hashconfig;



  pot_hash_node_t VAR_7;

  VAR_7.hash_buf = VAR_2;
  VAR_7.next = ((void*)0);



  pot_tree_entry_t VAR_8;

  VAR_8.nodes = &VAR_7;
  VAR_8.hashconfig = VAR_6;



  void **VAR_9 = (void **) FUNC_1 (&VAR_8, (void **) &VAR_5, VAR_0);

  if (VAR_9)
  {
    pot_tree_entry_t *VAR_10 = (pot_tree_entry_t *) *VAR_9;

    pot_hash_node_t *VAR_11 = VAR_10->nodes;

    while (VAR_11)
    {
      FUNC_0 (VAR_1, VAR_11->hash_buf, VAR_3, VAR_4);

      VAR_11 = VAR_11->next;
    }
  }
}
