
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transport {int pack_lockfile; struct helper_data* data; } ;
struct strbuf {char* buf; int len; } ;
struct ref {int status; scalar_t__ name; scalar_t__ symref; int old_oid; } ;
struct TYPE_2__ {int self_contained_and_connected; scalar_t__ check_self_contained_and_connected; } ;
struct helper_data {int name; TYPE_1__ transport_options; scalar_t__ check_connectivity; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct helper_data*,struct strbuf*) ;
 int FUNC_4 (struct helper_data*,struct strbuf*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (struct strbuf*,char) ;
 int FUNC_7 (struct strbuf*,char*,int ,scalar_t__) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (int ,int ,char const*) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static int FUNC_12(struct transport *VAR_2,
       int VAR_3, struct ref **VAR_4)
{
 struct helper_data *VAR_5 = VAR_2->data;
 int VAR_6;
 struct strbuf VAR_7 = VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  const struct ref *VAR_8 = VAR_4[VAR_6];
  if (VAR_8->status & VAR_0)
   continue;

  FUNC_7(&VAR_7, "fetch %s %s\n",
       FUNC_2(&VAR_8->old_oid),
       VAR_8->symref ? VAR_8->symref : VAR_8->name);
 }

 FUNC_6(&VAR_7, '\n');
 FUNC_4(VAR_5, &VAR_7);

 while (1) {
  if (FUNC_3(VAR_5, &VAR_7))
   FUNC_1(128);

  if (FUNC_5(VAR_7.buf, "lock ")) {
   const char *VAR_9 = VAR_7.buf + 5;
   if (VAR_2->pack_lockfile)
    FUNC_10(FUNC_0("%s also locked %s"), VAR_5->name, VAR_9);
   else
    VAR_2->pack_lockfile = FUNC_11(VAR_9);
  }
  else if (VAR_5->check_connectivity &&
    VAR_5->transport_options.check_self_contained_and_connected &&
    !FUNC_9(VAR_7.buf, "connectivity-ok"))
   VAR_5->transport_options.self_contained_and_connected = 1;
  else if (!VAR_7.len)
   break;
  else
   FUNC_10(FUNC_0("%s unexpectedly said: '%s'"), VAR_5->name, VAR_7.buf);
 }
 FUNC_8(&VAR_7);
 return 0;
}
