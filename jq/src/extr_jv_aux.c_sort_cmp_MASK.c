
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_entry {int index; int key; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const void* VAR_0, const void* VAR_1) {
  const struct sort_entry* VAR_2 = VAR_0;
  const struct sort_entry* VAR_3 = VAR_1;
  int VAR_4 = FUNC_0(FUNC_1(VAR_2->key), FUNC_1(VAR_3->key));

  return VAR_4 ? VAR_4 : (VAR_2->index - VAR_3->index);
}
