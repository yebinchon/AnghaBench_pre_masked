
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_6__ {scalar_t__ nr; } ;
struct src_data {int head_status; TYPE_3__ generic; TYPE_3__ tag; TYPE_3__ r_branch; TYPE_3__ branch; } ;
struct TYPE_5__ {int nr; TYPE_1__* items; } ;
struct TYPE_4__ {char const* string; struct src_data* util; } ;


 int FUNC_0 (char*,char*,TYPE_3__*,struct strbuf*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,char*,char const*) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 scalar_t__ FUNC_4 (char*,char const*) ;

__attribute__((used)) static void FUNC_5(struct strbuf *VAR_1,
    const char *VAR_2)
{
 int VAR_3 = 0;
 char *VAR_4 = "";

 FUNC_3(VAR_1, "Merge ");
 for (VAR_3 = 0; VAR_3 < VAR_0.nr; VAR_3++) {
  struct src_data *VAR_5 = VAR_0.items[VAR_3].util;
  const char *VAR_6 = "";

  FUNC_3(VAR_1, VAR_4);
  VAR_4 = "; ";

  if (VAR_5->head_status == 1) {
   FUNC_3(VAR_1, VAR_0.items[VAR_3].string);
   continue;
  }
  if (VAR_5->head_status == 3) {
   VAR_6 = ", ";
   FUNC_3(VAR_1, "HEAD");
  }
  if (VAR_5->branch.nr) {
   FUNC_3(VAR_1, VAR_6);
   VAR_6 = ", ";
   FUNC_0("branch ", "branches ", &VAR_5->branch,
     VAR_1);
  }
  if (VAR_5->r_branch.nr) {
   FUNC_3(VAR_1, VAR_6);
   VAR_6 = ", ";
   FUNC_0("remote-tracking branch ", "remote-tracking branches ",
     &VAR_5->r_branch, VAR_1);
  }
  if (VAR_5->tag.nr) {
   FUNC_3(VAR_1, VAR_6);
   VAR_6 = ", ";
   FUNC_0("tag ", "tags ", &VAR_5->tag, VAR_1);
  }
  if (VAR_5->generic.nr) {
   FUNC_3(VAR_1, VAR_6);
   FUNC_0("commit ", "commits ", &VAR_5->generic,
     VAR_1);
  }
  if (FUNC_4(".", VAR_0.items[VAR_3].string))
   FUNC_2(VAR_1, " of %s", VAR_0.items[VAR_3].string);
 }

 if (!FUNC_4("master", VAR_2))
  FUNC_1(VAR_1, '\n');
 else
  FUNC_2(VAR_1, " into %s\n", VAR_2);
}
