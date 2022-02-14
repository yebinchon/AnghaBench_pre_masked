
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct transport {char* url; TYPE_1__* remote; } ;
struct strbuf {int len; int buf; } ;
struct ref {scalar_t__ status; int old_oid; int name; int new_oid; TYPE_2__* peer_ref; struct ref* next; } ;
struct child_process {char const** argv; int in; char* trace2_hook_name; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {char* name; } ;


 struct child_process VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (struct child_process*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct child_process*) ;
 int FUNC_7 (struct strbuf*,char*,int ,int ,int ,int ) ;
 int FUNC_8 (struct strbuf*,int) ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (struct strbuf*) ;
 scalar_t__ FUNC_11 (int,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct transport *VAR_8,
        struct ref *VAR_9)
{
 int VAR_10 = 0, VAR_11;
 struct ref *VAR_12;
 struct child_process VAR_13 = VAR_0;
 struct strbuf VAR_14;
 const char *VAR_15[4];

 if (!(VAR_15[0] = FUNC_1("pre-push")))
  return 0;

 VAR_15[1] = VAR_8->remote->name;
 VAR_15[2] = VAR_8->url;
 VAR_15[3] = ((void*)0);

 VAR_13.argv = VAR_15;
 VAR_13.in = -1;
 VAR_13.trace2_hook_name = "pre-push";

 if (FUNC_6(&VAR_13)) {
  FUNC_2(&VAR_13);
  return -1;
 }

 FUNC_5(VAR_5, VAR_6);

 FUNC_8(&VAR_14, 256);

 for (VAR_12 = VAR_9; VAR_12; VAR_12 = VAR_12->next) {
  if (!VAR_12->peer_ref) continue;
  if (VAR_12->status == VAR_2) continue;
  if (VAR_12->status == VAR_3) continue;
  if (VAR_12->status == VAR_4) continue;

  FUNC_10(&VAR_14);
  FUNC_7( &VAR_14, "%s %s %s %s\n",
    VAR_12->peer_ref->name, FUNC_3(&VAR_12->new_oid),
    VAR_12->name, FUNC_3(&VAR_12->old_oid));

  if (FUNC_11(VAR_13.in, VAR_14.buf, VAR_14.len) < 0) {

   if (VAR_7 != VAR_1)
    VAR_10 = -1;
   break;
  }
 }

 FUNC_9(&VAR_14);

 VAR_11 = FUNC_0(VAR_13.in);
 if (!VAR_10)
  VAR_10 = VAR_11;

 FUNC_4(VAR_5);

 VAR_11 = FUNC_2(&VAR_13);
 if (!VAR_10)
  VAR_10 = VAR_11;

 return VAR_10;
}
