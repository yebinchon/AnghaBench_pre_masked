
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct note_data {int buf; scalar_t__ edit_path; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct note_data *VAR_0)
{
 if (VAR_0->edit_path) {
  FUNC_2(VAR_0->edit_path);
  FUNC_0(VAR_0->edit_path);
 }
 FUNC_1(&VAR_0->buf);
}
