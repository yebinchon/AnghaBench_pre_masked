
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_5__ {int pos; } ;
typedef TYPE_1__ stats_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,struct connection*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,char*,int ,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_3 (struct connection *VAR_11) {
  stats_buffer_t VAR_12;
  FUNC_1 (&VAR_12, VAR_11, VAR_8, VAR_4);
  FUNC_0 (&VAR_12, VAR_0);
  VAR_2;
  VAR_3;

  FUNC_2 (&VAR_12,
    "tree_nodes\t%d\n"
    "privacy_nodes\t%d\n"
      "reverse_friends_nodes\t%d\n"
    "total_privacy_len\t%d\n"
    "memory_users\t%d\n",
    VAR_6,
    VAR_7,
      VAR_5,
    VAR_9,
    VAR_10);

  FUNC_2 (&VAR_12, "version\t%s\n", VAR_1);
  return VAR_12.pos;
}
