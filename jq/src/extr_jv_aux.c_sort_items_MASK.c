
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_entry {int index; void* key; void* object; } ;
typedef int jv ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 struct sort_entry* FUNC_6 (int,int) ;
 int FUNC_7 (struct sort_entry*,int,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct sort_entry* FUNC_8(jv VAR_2, jv VAR_3) {
  FUNC_0(FUNC_5(VAR_2) == VAR_0);
  FUNC_0(FUNC_5(VAR_3) == VAR_0);
  FUNC_0(FUNC_2(FUNC_3(VAR_2)) == FUNC_2(FUNC_3(VAR_3)));
  int VAR_4 = FUNC_2(FUNC_3(VAR_2));
  struct sort_entry* VAR_5 = FUNC_6(sizeof(struct sort_entry), VAR_4);
  for (int VAR_6=0; VAR_6<VAR_4; VAR_6++) {
    VAR_5[VAR_6].object = FUNC_1(FUNC_3(VAR_2), VAR_6);
    VAR_5[VAR_6].key = FUNC_1(FUNC_3(VAR_3), VAR_6);
    VAR_5[VAR_6].index = VAR_6;
  }
  FUNC_4(VAR_2);
  FUNC_4(VAR_3);
  FUNC_7(VAR_5, VAR_4, sizeof(struct sort_entry), VAR_1);
  return VAR_5;
}
