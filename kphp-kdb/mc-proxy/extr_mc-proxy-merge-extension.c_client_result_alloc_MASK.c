
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gather_entry {int res_bytes; scalar_t__ data; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1 (struct gather_entry *VAR_0, char **VAR_1) {


  if (!VAR_0->res_bytes) {
    return 0;
  }
  VAR_0->data = FUNC_0 (VAR_0->res_bytes + 4);
  *VAR_1 = (char *) VAR_0->data;
  return VAR_0->res_bytes + 4;
}
