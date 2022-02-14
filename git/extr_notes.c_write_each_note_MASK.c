
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_each_note_data {int root; } ;
struct object_id {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,struct write_each_note_data*) ;
 scalar_t__ FUNC_3 (int ,char*,unsigned int,struct object_id const*) ;

__attribute__((used)) static int FUNC_4(const struct object_id *VAR_2,
  const struct object_id *VAR_3, char *VAR_4,
  void *VAR_5)
{
 struct write_each_note_data *VAR_6 =
  (struct write_each_note_data *) VAR_5;
 size_t VAR_7 = FUNC_1(VAR_4);
 unsigned int VAR_8 = 0100644;

 if (VAR_4[VAR_7 - 1] == '/') {

  VAR_7--;
  VAR_4[VAR_7] = '\0';
  VAR_8 = 040000;
 }
 FUNC_0(VAR_7 <= VAR_1 + VAR_0);


 return FUNC_2(VAR_4, VAR_6) ||
  FUNC_3(VAR_6->root, VAR_4, VAR_8, VAR_3);
}
