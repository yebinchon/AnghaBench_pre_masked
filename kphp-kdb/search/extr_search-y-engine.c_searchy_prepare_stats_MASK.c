
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_6__ {int pos; } ;
typedef TYPE_1__ stats_buffer_t ;
struct TYPE_7__ {int left_subtree_size_threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 () ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,struct connection*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,char*,int ,...) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;

int FUNC_7 (struct connection *VAR_34) {
  stats_buffer_t VAR_35;
  FUNC_5 (&VAR_35, VAR_34, VAR_23, VAR_5);
  FUNC_4 (&VAR_35, VAR_0);
  FUNC_6 (&VAR_35, "malloc_memory_used\t%lld\n", FUNC_3 ());
  VAR_3;
  VAR_4;
  FUNC_6 (&VAR_35,
    "index_items\t%d\n"
    "index_words\t%d\n"
    "index_data_bytes\t%lld\n",
    VAR_14, VAR_15, VAR_13);

  FUNC_6 (&VAR_35, "left_subtree_size_threshold\t%d\n", VAR_2.left_subtree_size_threshold);
  FUNC_2(VAR_20);
  FUNC_2(VAR_16);
  FUNC_2(VAR_22);
  FUNC_2(VAR_10);
  FUNC_2(VAR_21);

  FUNC_6 (&VAR_35,
      "items\t%d\n"
      "items_marked_as_deleted\t%d\n"
      "items_freed\t%d\n"
      "index_items_deleted\t%d\n"
      "tree_nodes_allocated\t%d\n"
      "tree_nodes_unused\t%d\n",
    VAR_27,
    VAR_9,
    VAR_26,
    VAR_19,
    VAR_6,
    VAR_11);

  FUNC_1(VAR_28);
  FUNC_0(VAR_8);
  FUNC_0(VAR_18);
  FUNC_0(VAR_30);
  FUNC_0(VAR_29);
  FUNC_0(VAR_12);
  FUNC_0(VAR_33);
  FUNC_0(VAR_24);
  FUNC_0(VAR_32);
  FUNC_0(VAR_31);
  FUNC_0(VAR_25);
  FUNC_0(VAR_17);
  FUNC_0(VAR_7);

  FUNC_6 (&VAR_35, "version\t%s\n", VAR_1);

  return VAR_35.pos;
}
