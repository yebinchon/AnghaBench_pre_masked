
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_6__ {int pos; } ;
typedef TYPE_1__ stats_buffer_t ;
struct TYPE_7__ {long long* compression_bytes; int* word_list_compression_methods; int left_subtree_size_threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 () ;
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
 int FUNC_5 (int) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_6 (double,long long) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,struct connection*,int ,int ) ;
 int FUNC_9 (TYPE_1__*,char*,int ,...) ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;

int FUNC_10 (struct connection *VAR_51) {
  stats_buffer_t VAR_52;
  FUNC_8 (&VAR_52, VAR_51, VAR_37, VAR_5);
  FUNC_7 (&VAR_52, VAR_0);
  FUNC_9 (&VAR_52, "malloc_memory_used\t%lld\n", FUNC_4 ());
  VAR_3;
  VAR_4;
  FUNC_9 (&VAR_52,
    "index_items\t%d\n"
    "index_words\t%d\n"
    "index_hapax_legomena\t%d\n"
    "index_items_with_hash\t%d\n"
    "index_data_bytes\t%ld\n",
    VAR_24, VAR_26, VAR_23,
    VAR_25, VAR_22);

  int VAR_53;
  long long VAR_54 = VAR_2.compression_bytes[0] + VAR_2.compression_bytes[1];
  for (VAR_53 = 0; VAR_53 < 4; VAR_53++) {
    long long VAR_55 = VAR_2.compression_bytes[2*VAR_53+0],
              VAR_56 = VAR_2.compression_bytes[2*VAR_53+1],
              VAR_57 = VAR_55 + VAR_56;
    if (VAR_57 > 0) {
      if (VAR_54 > 0) {
        FUNC_9 (&VAR_52, "%s\t%lld(%.6lf%%)=%lld(%.6lf%%)+%lld(%.6lf%%)\n",
                       FUNC_5 (VAR_53),
                       VAR_57, FUNC_6 (100.0 * VAR_57, VAR_54),
                       VAR_55, FUNC_6 (100.0 * VAR_55, VAR_2.compression_bytes[0]),
                       VAR_56, FUNC_6 (100.0 * VAR_56, VAR_2.compression_bytes[1]));
      } else {
        FUNC_9 (&VAR_52, "%s\t%lld=%lld+%lld\n",
                       FUNC_5 (VAR_53),
                       VAR_57,
                       VAR_55,
                       VAR_56);
      }
    }
  }

  FUNC_9 (&VAR_52,
      "index_compression_methods\t%s+%s\n"
      "left_subtree_size_threshold\t%d\n",
    FUNC_5 (VAR_2.word_list_compression_methods[0]),
    FUNC_5 (VAR_2.word_list_compression_methods[1]),
    VAR_2.left_subtree_size_threshold);

  FUNC_2(VAR_36);
  FUNC_2(VAR_18);
  FUNC_2(VAR_34);
  FUNC_2(VAR_17);
  FUNC_2(VAR_13);
  FUNC_2(VAR_43);
  FUNC_2(VAR_31);
  FUNC_2(VAR_28);
  FUNC_2(VAR_15);
  FUNC_2(VAR_20);
  FUNC_2(VAR_9);
  FUNC_2(VAR_6);
  FUNC_9 (&VAR_52,
      "items\t%d\n"
      "items_marked_as_deleted\t%d\n"
      "items_freed\t%d\n"
      "index_items_deleted\t%d\n"
      "tree_nodes_allocated\t%d\n"
      "tree_nodes_unused\t%d\n"
      "rebuild_hashmap_calls\t%lld\n"
      "last_search_query\t%s\n",
    VAR_41,
    VAR_12,
    VAR_40,
    VAR_32,
    VAR_7,
    VAR_19,
    VAR_33,
    VAR_29);
  FUNC_1(VAR_14);
  FUNC_1(VAR_8);
  FUNC_1(VAR_10);
  FUNC_3(VAR_49);
  FUNC_3(VAR_50);
  FUNC_3(VAR_48);

  FUNC_0(VAR_44);
  FUNC_0(VAR_42);
  FUNC_0(VAR_21);
  FUNC_0(VAR_47);
  FUNC_0(VAR_27);
  FUNC_0(VAR_38);
  FUNC_0(VAR_46);
  FUNC_0(VAR_45);
  FUNC_0(VAR_39);
  FUNC_0(VAR_30);
  FUNC_0(VAR_11);
  FUNC_0(VAR_16);
  FUNC_0(VAR_35);

  FUNC_9 (&VAR_52, "version\t%s\n", VAR_1);

  return VAR_52.pos;
}
