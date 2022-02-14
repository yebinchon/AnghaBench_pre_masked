
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport {struct helper_data* data; } ;
struct strbuf {char* buf; } ;
struct ref {char* name; struct ref* next; int old_oid; int status; int symref; } ;
struct helper_data {int get_refs_list_called; scalar_t__ push; } ;
struct child_process {int in; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 struct ref* FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 struct child_process* FUNC_5 (struct transport*) ;
 int FUNC_6 (char*,int *) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*,int *) ;
 scalar_t__ FUNC_9 (struct helper_data*,struct strbuf*) ;
 int FUNC_10 (struct ref*,struct ref*) ;
 int VAR_3 ;
 int FUNC_11 (struct strbuf*) ;
 char* FUNC_12 (char*,char) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static struct ref *FUNC_15(struct transport *VAR_4,
         int VAR_5)
{
 struct helper_data *VAR_6 = VAR_4->data;
 struct child_process *VAR_7;
 struct ref *VAR_8 = ((void*)0);
 struct ref **VAR_9 = &VAR_8;
 struct ref *VAR_10;
 struct strbuf VAR_11 = VAR_1;

 VAR_6->get_refs_list_called = 1;
 VAR_7 = FUNC_5(VAR_4);

 if (VAR_6->push && VAR_5)
  FUNC_13(VAR_7->in, "list for-push\n");
 else
  FUNC_13(VAR_7->in, "list\n");

 while (1) {
  char *VAR_12, *VAR_13;
  if (FUNC_9(VAR_6, &VAR_11))
   FUNC_3(128);

  if (!*VAR_11.buf)
   break;

  VAR_12 = FUNC_12(VAR_11.buf, ' ');
  if (!VAR_12)
   FUNC_2(FUNC_0("malformed response in ref list: %s"), VAR_11.buf);
  VAR_13 = FUNC_12(VAR_12 + 1, ' ');
  *VAR_12 = '\0';
  if (VAR_13)
   *VAR_13 = '\0';
  *VAR_9 = FUNC_1(VAR_12 + 1);
  if (VAR_11.buf[0] == '@')
   (*VAR_9)->symref = FUNC_14(VAR_11.buf + 1);
  else if (VAR_11.buf[0] != '?')
   FUNC_6(VAR_11.buf, &(*VAR_9)->old_oid);
  if (VAR_13) {
   if (FUNC_7(VAR_13 + 1, "unchanged")) {
    (*VAR_9)->status |= VAR_0;
    if (FUNC_8((*VAR_9)->name, &(*VAR_9)->old_oid) < 0)
     FUNC_2(FUNC_0("could not read ref %s"),
         (*VAR_9)->name);
   }
  }
  VAR_9 = &((*VAR_9)->next);
 }
 if (VAR_2)
  FUNC_4(VAR_3, "Debug: Read ref listing.\n");
 FUNC_11(&VAR_11);

 for (VAR_10 = VAR_8; VAR_10; VAR_10 = VAR_10->next)
  FUNC_10(VAR_10, VAR_8);

 return VAR_8;
}
