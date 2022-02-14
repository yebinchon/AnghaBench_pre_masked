
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct notes_tree {struct non_note* prev_non_note; struct non_note* first_non_note; } ;
struct TYPE_3__ {int hash; } ;
struct non_note {char* path; unsigned int mode; struct non_note* next; TYPE_1__ oid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct non_note*) ;
 int FUNC_2 (int ,unsigned char const*) ;
 scalar_t__ FUNC_3 (struct non_note*,struct non_note*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct notes_tree *VAR_0, char *VAR_1,
  unsigned int VAR_2, const unsigned char *VAR_3)
{
 struct non_note *VAR_4 = VAR_0->prev_non_note, *VAR_5;
 VAR_5 = (struct non_note *) FUNC_6(sizeof(struct non_note));
 VAR_5->next = ((void*)0);
 VAR_5->path = VAR_1;
 VAR_5->mode = VAR_2;
 FUNC_2(VAR_5->oid.hash, VAR_3);
 VAR_0->prev_non_note = VAR_5;

 if (!VAR_0->first_non_note) {
  VAR_0->first_non_note = VAR_5;
  return;
 }

 if (FUNC_3(VAR_4, VAR_5) < 0)
  ;
 else if (FUNC_3(VAR_0->first_non_note, VAR_5) <= 0)
  VAR_4 = VAR_0->first_non_note;
 else {

  VAR_5->next = VAR_0->first_non_note;
  VAR_0->first_non_note = VAR_5;
  return;
 }


 while (VAR_4->next && FUNC_3(VAR_4->next, VAR_5) <= 0)
  VAR_4 = VAR_4->next;

 if (FUNC_3(VAR_4, VAR_5) == 0) {
  FUNC_0(FUNC_5(VAR_4->path, VAR_5->path) == 0);
  VAR_4->mode = VAR_5->mode;
  FUNC_4(&VAR_4->oid, &VAR_5->oid);
  FUNC_1(VAR_5);
  VAR_0->prev_non_note = VAR_4;
  return;
 }


 VAR_5->next = VAR_4->next;
 VAR_4->next = VAR_5;
}
