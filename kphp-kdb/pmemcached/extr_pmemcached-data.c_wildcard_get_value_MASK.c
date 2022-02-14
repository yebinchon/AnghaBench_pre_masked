
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ x; } ;
typedef TYPE_1__ tree_t ;
struct wildcard_entry {int data_len; scalar_t__ data; } ;
struct data {int data_len; int flags; int delay; scalar_t__ data; } ;


 TYPE_1__* FUNC_0 (int ,char const*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct wildcard_entry*) ;

struct data FUNC_2 (const char *VAR_1, int VAR_2) {
  tree_t *VAR_3 = FUNC_0 (VAR_0, VAR_1, VAR_2);
  struct data VAR_4;
  if (!VAR_3) {
    VAR_4.data_len = -1;
    VAR_4.data = 0;
  } else {
    struct wildcard_entry *VAR_5 = (struct wildcard_entry *)VAR_3->x;
    VAR_4.data_len = VAR_5->data_len;
    VAR_4.flags = 1;
    VAR_4.delay = -1;
    VAR_4.data = VAR_5->data;
    FUNC_1 (VAR_5);
  }
  return VAR_4;
}
