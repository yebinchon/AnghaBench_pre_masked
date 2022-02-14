
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transport {int progress; } ;
struct strbuf {int buf; } ;
struct ref {TYPE_1__* peer_ref; } ;
struct check_connected_options {int check_refs_only; int progress; struct transport* transport; } ;
struct TYPE_2__ {int name; } ;


 struct check_connected_options VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,struct ref const**,struct check_connected_options*) ;
 scalar_t__ FUNC_2 (int ,int ,char const*) ;
 int FUNC_3 (int ,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct strbuf*,char const*) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct ref const*,char const*) ;
 int FUNC_7 (struct ref const*) ;

__attribute__((used)) static void FUNC_8(const struct ref *VAR_6,
          const struct ref *VAR_7,
          const struct ref *VAR_8,
          const char *VAR_9,
          const char *VAR_10,
          struct transport *VAR_11,
          int VAR_12,
          int VAR_13)
{
 const struct ref *VAR_14 = VAR_7;

 if (VAR_12) {
  struct check_connected_options VAR_15 = VAR_0;

  VAR_15.transport = VAR_11;
  VAR_15.progress = VAR_11->progress;
  VAR_15.check_refs_only = !!VAR_13;

  if (FUNC_1(VAR_2, &VAR_14, &VAR_15))
   FUNC_3(FUNC_0("remote did not send all necessary objects"));
 }

 if (VAR_6) {
  FUNC_7(VAR_7);
  if (VAR_5 && !VAR_4)
   FUNC_6(VAR_6, VAR_10);
 }

 if (VAR_8 && !VAR_3) {
  struct strbuf VAR_16 = VAR_1;
  FUNC_4(&VAR_16, VAR_9);
  FUNC_4(&VAR_16, "HEAD");
  if (FUNC_2(VAR_16.buf,
      VAR_8->peer_ref->name,
      VAR_10) < 0)
   FUNC_3(FUNC_0("unable to update %s"), VAR_16.buf);
  FUNC_5(&VAR_16);
 }
}
