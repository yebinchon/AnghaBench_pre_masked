
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct strbuf {int len; int buf; } ;
struct object_id {int dummy; } ;
struct TYPE_4__ {int len; int buf; } ;
struct note_data {TYPE_1__ buf; int edit_path; scalar_t__ given; scalar_t__ use_editor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct object_id const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*,int *) ;
 char* VAR_4 ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (struct strbuf*,char*,int ) ;
 int FUNC_9 (struct strbuf*,char) ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int,struct object_id const*) ;
 int FUNC_15 (int,int ,int ) ;

__attribute__((used)) static void FUNC_16(const struct object_id *VAR_5, struct note_data *VAR_6,
  const struct object_id *VAR_7)
{
 if (VAR_6->use_editor || !VAR_6->given) {
  int VAR_8;
  struct strbuf VAR_9 = VAR_3;


  VAR_6->edit_path = FUNC_5("NOTES_EDITMSG");
  VAR_8 = FUNC_7(VAR_6->edit_path, VAR_0 | VAR_1 | VAR_2, 0600);
  if (VAR_8 < 0)
   FUNC_4(FUNC_0("could not create file '%s'"), VAR_6->edit_path);

  if (VAR_6->given)
   FUNC_15(VAR_8, VAR_6->buf.buf, VAR_6->buf.len);
  else if (VAR_7)
   FUNC_2(VAR_8, VAR_7);

  FUNC_9(&VAR_9, '\n');
  FUNC_8(&VAR_9, "\n", FUNC_13("\n"));
  FUNC_8(&VAR_9, FUNC_0(VAR_4), FUNC_13(FUNC_0(VAR_4)));
  FUNC_9(&VAR_9, '\n');
  FUNC_15(VAR_8, VAR_9.buf, VAR_9.len);

  FUNC_14(VAR_8, VAR_5);

  FUNC_1(VAR_8);
  FUNC_10(&VAR_9);
  FUNC_11(&VAR_6->buf);

  if (FUNC_6(VAR_6->edit_path, &VAR_6->buf, ((void*)0))) {
   FUNC_3(FUNC_0("please supply the note contents using either -m or -F option"));
  }
  FUNC_12(&VAR_6->buf, 1);
 }
}
