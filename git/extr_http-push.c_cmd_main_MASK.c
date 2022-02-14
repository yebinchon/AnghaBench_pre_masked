
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct transfer_request {struct transfer_request* next; } ;
struct rev_info {scalar_t__ edge_hint; } ;
struct remote_lock {int dummy; } ;
struct refspec {int nr; TYPE_1__* items; } ;
struct ref {char const* name; int new_oid; int old_oid; TYPE_2__* peer_ref; int force; struct ref* next; } ;
struct argv_array {int argv; int argc; } ;
struct TYPE_8__ {int can_update_info_refs; void* has_info_refs; void* has_info_packs; scalar_t__ url; scalar_t__ path; void* path_len; } ;
struct TYPE_7__ {char* name; int new_oid; } ;
struct TYPE_6__ {char* src; } ;


 struct argv_array VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct refspec VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct argv_array*) ;
 int FUNC_1 (struct argv_array*,char*) ;
 int FUNC_2 (struct argv_array*,char*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (char*) ;
 int VAR_5 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_6 ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 () ;
 int FUNC_12 (struct rev_info*,struct remote_lock*) ;
 struct ref* FUNC_13 () ;
 int FUNC_14 (int *) ;
 int VAR_7 ;
 int FUNC_15 () ;
 int FUNC_16 (int *,scalar_t__,int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_17 (int *) ;
 scalar_t__ VAR_10 ;
 struct remote_lock* FUNC_18 (char*,int ) ;
 int FUNC_19 () ;
 int FUNC_20 (struct rev_info*,int *,int ) ;
 scalar_t__ FUNC_21 (struct ref*,struct ref**,struct refspec*,int ) ;
 int FUNC_22 (int ,int,int) ;
 char* FUNC_23 (int *) ;
 int FUNC_24 (int *,int *) ;
 scalar_t__ FUNC_25 (int *,int *) ;
 scalar_t__ FUNC_26 (struct rev_info*) ;
 int FUNC_27 (char*,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_28 (int *,int *) ;
 int FUNC_29 (struct refspec*,char const**,int) ;
 int FUNC_30 (struct transfer_request*) ;
 int VAR_14 ;
 void* FUNC_31 (char*) ;
 struct ref* VAR_15 ;
 int VAR_16 ;
 TYPE_3__* VAR_17 ;
 int FUNC_32 (int ,struct rev_info*,int ) ;
 struct transfer_request* VAR_18 ;
 int FUNC_33 () ;
 int FUNC_34 () ;
 int FUNC_35 (int ,int ,struct rev_info*,int *) ;
 int FUNC_36 (int ) ;
 int VAR_19 ;
 int FUNC_37 (char const*,scalar_t__*) ;
 scalar_t__ FUNC_38 (char*,char) ;
 scalar_t__ FUNC_39 (char const*,char*) ;
 void* FUNC_40 (scalar_t__) ;
 char* FUNC_41 (char const*,char*) ;
 int VAR_20 ;
 int FUNC_42 (struct remote_lock*) ;
 int FUNC_43 (int *,struct remote_lock*) ;
 int FUNC_44 (struct remote_lock*) ;
 int FUNC_45 (int ) ;
 TYPE_3__* FUNC_46 (int,int) ;

int FUNC_47(int VAR_21, const char **VAR_22)
{
 struct transfer_request *VAR_23;
 struct transfer_request *VAR_24;
 struct refspec VAR_25 = VAR_3;
 struct remote_lock *VAR_26 = ((void*)0);
 struct remote_lock *VAR_27 = ((void*)0);
 struct rev_info VAR_28;
 int VAR_29 = 0;
 int VAR_30 = 0;
 int VAR_31;
 int VAR_32 = 0;
 int VAR_33;
 int VAR_34;
 struct ref *VAR_35, *VAR_36;

 VAR_17 = FUNC_46(1, sizeof(*VAR_17));

 VAR_22++;
 for (VAR_33 = 1; VAR_33 < VAR_21; VAR_33++, VAR_22++) {
  const char *VAR_37 = *VAR_22;

  if (*VAR_37 == '-') {
   if (!FUNC_39(VAR_37, "--all")) {
    VAR_11 = VAR_2;
    continue;
   }
   if (!FUNC_39(VAR_37, "--force")) {
    VAR_6 = 1;
    continue;
   }
   if (!FUNC_39(VAR_37, "--dry-run")) {
    VAR_5 = 1;
    continue;
   }
   if (!FUNC_39(VAR_37, "--helper-status")) {
    VAR_7 = 1;
    continue;
   }
   if (!FUNC_39(VAR_37, "--verbose")) {
    VAR_12 = 1;
    VAR_8 = 1;
    continue;
   }
   if (!FUNC_39(VAR_37, "-d")) {
    VAR_29 = 1;
    continue;
   }
   if (!FUNC_39(VAR_37, "-D")) {
    VAR_29 = 1;
    VAR_30 = 1;
    continue;
   }
   if (!FUNC_39(VAR_37, "-h"))
    FUNC_45(VAR_9);
  }
  if (!VAR_17->url) {
   char *VAR_38 = FUNC_41(VAR_37, "//");
   FUNC_37(VAR_37, &VAR_17->url);
   VAR_17->path_len = FUNC_40(VAR_17->url);
   if (VAR_38) {
    VAR_17->path = FUNC_38(VAR_38+2, '/');
    if (VAR_17->path)
     VAR_17->path_len = FUNC_40(VAR_17->path);
   }
   continue;
  }
  FUNC_29(&VAR_25, VAR_22, VAR_21 - VAR_33);
  break;
 }


 FUNC_5("git-push is not available for http/https repository when not compiled with USE_CURL_MULTI");


 if (!VAR_17->url)
  FUNC_45(VAR_9);

 if (VAR_29 && VAR_25.nr != 1)
  FUNC_5("You must specify only one branch name when deleting a remote branch");

 FUNC_34();

 FUNC_22(VAR_14, -1, 256);

 FUNC_16(((void*)0), VAR_17->url, 1);






 if (!FUNC_19()) {
  VAR_32 = 1;
  goto cleanup;
 }

 FUNC_36(VAR_16);


 VAR_17->can_update_info_refs = 0;
 VAR_17->has_info_refs = FUNC_31("info/refs");
 VAR_17->has_info_packs = FUNC_31("objects/info/packs");
 if (VAR_17->has_info_refs) {
  VAR_27 = FUNC_18("info/refs", VAR_1);
  if (VAR_27)
   VAR_17->can_update_info_refs = 1;
  else {
   FUNC_6("cannot lock existing info/refs");
   VAR_32 = 1;
   goto cleanup;
  }
 }
 if (VAR_17->has_info_packs)
  FUNC_7();


 VAR_36 = FUNC_13();
 FUNC_9(VAR_19, "Fetching remote heads...\n");
 FUNC_11();
 FUNC_33();


 if (VAR_29) {
  const char *VAR_39 = VAR_25.items[VAR_33].src;
  if (FUNC_4(VAR_39, VAR_30) == -1) {
   FUNC_9(VAR_19, "Unable to delete remote branch %s\n",
    VAR_39);
   if (VAR_7)
    FUNC_27("error %s cannot remove\n", VAR_39);
  }
  goto cleanup;
 }


 if (FUNC_21(VAR_36, &VAR_15, &VAR_25, VAR_11)) {
  VAR_32 = -1;
  goto cleanup;
 }
 if (!VAR_15) {
  FUNC_9(VAR_19, "No refs in common and none specified; doing nothing.\n");
  if (VAR_7)
   FUNC_27("error null no match\n");
  VAR_32 = 0;
  goto cleanup;
 }

 VAR_34 = 0;
 for (VAR_35 = VAR_15; VAR_35; VAR_35 = VAR_35->next) {
  struct argv_array VAR_40 = VAR_0;

  if (!VAR_35->peer_ref)
   continue;

  if (FUNC_17(&VAR_35->peer_ref->new_oid)) {
   if (FUNC_4(VAR_35->name, 1) == -1) {
    FUNC_6("Could not remove %s", VAR_35->name);
    if (VAR_7)
     FUNC_27("error %s cannot remove\n", VAR_35->name);
    VAR_32 = -4;
   }
   else if (VAR_7)
    FUNC_27("ok %s\n", VAR_35->name);
   VAR_34++;
   continue;
  }

  if (FUNC_25(&VAR_35->old_oid, &VAR_35->peer_ref->new_oid)) {
   if (VAR_12)
    FUNC_9(VAR_19, "'%s': up-to-date\n", VAR_35->name);
   if (VAR_7)
    FUNC_27("ok %s up to date\n", VAR_35->name);
   continue;
  }

  if (!VAR_6 &&
      !FUNC_17(&VAR_35->old_oid) &&
      !VAR_35->force) {
   if (!FUNC_14(&VAR_35->old_oid) ||
       !FUNC_28(&VAR_35->peer_ref->new_oid,
           &VAR_35->old_oid)) {
    FUNC_6("remote '%s' is not an ancestor of\n"
          "local '%s'.\n"
          "Maybe you are not up-to-date and "
          "need to pull first?",
          VAR_35->name,
          VAR_35->peer_ref->name);
    if (VAR_7)
     FUNC_27("error %s non-fast forward\n", VAR_35->name);
    VAR_32 = -2;
    continue;
   }
  }
  FUNC_24(&VAR_35->new_oid, &VAR_35->peer_ref->new_oid);
  VAR_34++;

  FUNC_9(VAR_19, "updating '%s'", VAR_35->name);
  if (FUNC_39(VAR_35->name, VAR_35->peer_ref->name))
   FUNC_9(VAR_19, " using '%s'", VAR_35->peer_ref->name);
  FUNC_9(VAR_19, "\n  from %s\n  to   %s\n",
   FUNC_23(&VAR_35->old_oid), FUNC_23(&VAR_35->new_oid));
  if (VAR_5) {
   if (VAR_7)
    FUNC_27("ok %s\n", VAR_35->name);
   continue;
  }


  VAR_26 = FUNC_18(VAR_35->name, VAR_1);
  if (VAR_26 == ((void*)0)) {
   FUNC_9(VAR_19, "Unable to lock remote branch %s\n",
    VAR_35->name);
   if (VAR_7)
    FUNC_27("error %s lock error\n", VAR_35->name);
   VAR_32 = 1;
   continue;
  }


  FUNC_1(&VAR_40, "");
  FUNC_1(&VAR_40, "--objects");
  FUNC_1(&VAR_40, FUNC_23(&VAR_35->new_oid));
  if (!VAR_11 && !FUNC_17(&VAR_35->old_oid))
   FUNC_2(&VAR_40, "^%s",
      FUNC_23(&VAR_35->old_oid));
  FUNC_32(VAR_20, &VAR_28, FUNC_34());
  FUNC_35(VAR_40.argc, VAR_40.argv, &VAR_28, ((void*)0));
  VAR_28.edge_hint = 0;


  VAR_13 = 0;
  if (FUNC_26(&VAR_28))
   FUNC_5("revision walk setup failed");
  FUNC_20(&VAR_28, ((void*)0), 0);
  VAR_31 = FUNC_12(&VAR_28, VAR_26);
  FUNC_8();



  VAR_13 = 1;
  if (VAR_31)
   FUNC_9(VAR_19, "    sending %d objects\n",
    VAR_31);

  FUNC_33();


  if (VAR_4 || !FUNC_43(&VAR_35->new_oid, VAR_26))
   VAR_32 = 1;

  if (!VAR_32)
   FUNC_9(VAR_19, "    done\n");
  if (VAR_7)
   FUNC_27("%s %s\n", !VAR_32 ? "ok" : "error", VAR_35->name);
  FUNC_42(VAR_26);
  FUNC_3();
  FUNC_0(&VAR_40);
 }


 if (VAR_17->has_info_refs && VAR_34) {
  if (VAR_27 && VAR_17->can_update_info_refs) {
   FUNC_9(VAR_19, "Updating remote server info\n");
   if (!VAR_5)
    FUNC_44(VAR_27);
  } else {
   FUNC_9(VAR_19, "Unable to update server info\n");
  }
 }

 cleanup:
 if (VAR_27)
  FUNC_42(VAR_27);
 FUNC_10(VAR_17);

 FUNC_15();

 VAR_23 = VAR_18;
 while (VAR_23 != ((void*)0)) {
  VAR_24 = VAR_23->next;
  FUNC_30(VAR_23);
  VAR_23 = VAR_24;
 }

 return VAR_32;
}
