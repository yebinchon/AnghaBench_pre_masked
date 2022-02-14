
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_get_file_data {int offset; int limit; } ;
struct lev_storage_file {int size; scalar_t__ data; } ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1 (struct rpc_get_file_data *VAR_0, const struct lev_storage_file *VAR_1) {
  int VAR_2 = VAR_1->size - VAR_0->offset;
  if (VAR_2 > VAR_0->limit) {
    VAR_2 = VAR_0->limit;
  }
  char *VAR_3 = (char *) VAR_1->data;
  if (VAR_2 < 0) {
    VAR_2 = 0;
  } else {
    VAR_3 += VAR_0->offset;
  }
  FUNC_0 (VAR_3, VAR_2);
}
