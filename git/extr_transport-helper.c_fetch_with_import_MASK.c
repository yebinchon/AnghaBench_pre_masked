
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct transport {struct helper_data* data; } ;
struct strbuf {int dummy; } ;
struct ref {int status; char* symref; char* name; int old_oid; } ;
struct TYPE_4__ {scalar_t__ nr; } ;
struct helper_data {TYPE_2__ rs; TYPE_1__* helper; } ;
struct child_process {int dummy; } ;
struct TYPE_3__ {int in; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (int ,...) ;
 scalar_t__ FUNC_3 (struct child_process*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct transport*) ;
 scalar_t__ FUNC_6 (struct transport*,struct child_process*) ;
 scalar_t__ FUNC_7 (char*,int *) ;
 int FUNC_8 (struct helper_data*,struct strbuf*) ;
 int FUNC_9 (struct strbuf*,char*,char*) ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (struct strbuf*) ;
 int FUNC_12 (int ,char*) ;
 char* FUNC_13 (char*) ;

__attribute__((used)) static int FUNC_14(struct transport *VAR_2,
        int VAR_3, struct ref **VAR_4)
{
 struct child_process VAR_5;
 struct helper_data *VAR_6 = VAR_2->data;
 int VAR_7;
 struct ref *VAR_8;
 struct strbuf VAR_9 = VAR_1;

 FUNC_5(VAR_2);

 if (FUNC_6(VAR_2, &VAR_5))
  FUNC_2(FUNC_0("couldn't run fast-import"));

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_8 = VAR_4[VAR_7];
  if (VAR_8->status & VAR_0)
   continue;

  FUNC_9(&VAR_9, "import %s\n",
       VAR_8->symref ? VAR_8->symref : VAR_8->name);
  FUNC_8(VAR_6, &VAR_9);
  FUNC_11(&VAR_9);
 }

 FUNC_12(VAR_6->helper->in, "\n");
 if (FUNC_3(&VAR_5))
  FUNC_2(FUNC_0("error while running fast-import"));
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  char *VAR_10, *VAR_11;
  VAR_8 = VAR_4[VAR_7];
  if (VAR_8->status & VAR_0)
   continue;
  VAR_11 = VAR_8->symref ? VAR_8->symref : VAR_8->name;
  if (VAR_6->rs.nr)
   VAR_10 = FUNC_1(&VAR_6->rs, VAR_11);
  else
   VAR_10 = FUNC_13(VAR_11);
  if (VAR_10) {
   if (FUNC_7(VAR_10, &VAR_8->old_oid) < 0)
    FUNC_2(FUNC_0("could not read ref %s"), VAR_10);
   FUNC_4(VAR_10);
  }
 }
 FUNC_10(&VAR_9);
 return 0;
}
