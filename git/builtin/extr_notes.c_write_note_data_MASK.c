
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_2__ {int len; int buf; } ;
struct note_data {scalar_t__ edit_path; TYPE_1__ buf; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ,int ,struct object_id*) ;

__attribute__((used)) static void FUNC_4(struct note_data *VAR_1, struct object_id *VAR_2)
{
 if (FUNC_3(VAR_1->buf.buf, VAR_1->buf.len, VAR_0, VAR_2)) {
  FUNC_1(FUNC_0("unable to write note object"));
  if (VAR_1->edit_path)
   FUNC_1(FUNC_0("the note contents have been left in %s"),
    VAR_1->edit_path);
  FUNC_2(128);
 }
}
