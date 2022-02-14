
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct ref {int * peer_ref; int new_oid; scalar_t__ forced_update; int old_oid; int name; scalar_t__ deletion; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char,char*,struct ref*,int *,char const*,int,int) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (struct strbuf*,int *,int ) ;
 int FUNC_4 (struct strbuf*,char*) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(struct ref *VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_2->deletion)
  FUNC_1('-', "[deleted]", VAR_2, ((void*)0), ((void*)0),
     VAR_3, VAR_4);
 else if (FUNC_0(&VAR_2->old_oid))
  FUNC_1('*',
   (FUNC_2(VAR_2->name, "refs/tags/") ? "[new tag]" :
   "[new branch]"),
   VAR_2, VAR_2->peer_ref, ((void*)0), VAR_3, VAR_4);
 else {
  struct strbuf VAR_5 = VAR_1;
  char VAR_6;
  const char *VAR_7;

  FUNC_3(&VAR_5, &VAR_2->old_oid,
      VAR_0);
  if (VAR_2->forced_update) {
   FUNC_4(&VAR_5, "...");
   VAR_6 = '+';
   VAR_7 = "forced update";
  } else {
   FUNC_4(&VAR_5, "..");
   VAR_6 = ' ';
   VAR_7 = ((void*)0);
  }
  FUNC_3(&VAR_5, &VAR_2->new_oid,
      VAR_0);

  FUNC_1(VAR_6, VAR_5.buf, VAR_2, VAR_2->peer_ref, VAR_7,
     VAR_3, VAR_4);
  FUNC_5(&VAR_5);
 }
}
