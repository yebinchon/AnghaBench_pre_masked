
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct wt_status_state {int detached_at; struct object_id detached_oid; void* detached_from; } ;
struct repository {int dummy; } ;
struct TYPE_5__ {int len; int buf; } ;
struct grab_1st_switch_cbdata {TYPE_2__ buf; struct object_id noid; } ;
struct TYPE_4__ {struct object_id oid; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct object_id*,char**) ;
 char const* FUNC_1 (struct object_id*,int ) ;
 scalar_t__ FUNC_2 (char*,int ,struct grab_1st_switch_cbdata*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,struct object_id*) ;
 int VAR_1 ;
 struct commit* FUNC_5 (struct repository*,struct object_id*,int) ;
 int FUNC_6 (struct object_id*,struct object_id*) ;
 scalar_t__ FUNC_7 (struct object_id*,struct object_id*) ;
 int FUNC_8 (char const*,char*,char const**) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 void* FUNC_11 (char const*) ;

__attribute__((used)) static void FUNC_12(struct repository *VAR_2,
     struct wt_status_state *VAR_3)
{
 struct grab_1st_switch_cbdata VAR_4;
 struct commit *VAR_5;
 struct object_id VAR_6;
 char *VAR_7 = ((void*)0);

 FUNC_9(&VAR_4.buf, 0);
 if (FUNC_2("HEAD", VAR_1, &VAR_4) <= 0) {
  FUNC_10(&VAR_4.buf);
  return;
 }

 if (FUNC_0(VAR_4.buf.buf, VAR_4.buf.len, &VAR_6, &VAR_7) == 1 &&

     (FUNC_7(&VAR_4.noid, &VAR_6) ||

      ((VAR_5 = FUNC_5(VAR_2, &VAR_6, 1)) != ((void*)0) &&
       FUNC_7(&VAR_4.noid, &VAR_5->object.oid)))) {
  const char *VAR_8 = VAR_7;
  if (!FUNC_8(VAR_8, "refs/tags/", &VAR_8))
   FUNC_8(VAR_8, "refs/remotes/", &VAR_8);
  VAR_3->detached_from = FUNC_11(VAR_8);
 } else
  VAR_3->detached_from =
   FUNC_11(FUNC_1(&VAR_4.noid, VAR_0));
 FUNC_6(&VAR_3->detached_oid, &VAR_4.noid);
 VAR_3->detached_at = !FUNC_4("HEAD", &VAR_6) &&
        FUNC_7(&VAR_6, &VAR_3->detached_oid);

 FUNC_3(VAR_7);
 FUNC_10(&VAR_4.buf);
}
