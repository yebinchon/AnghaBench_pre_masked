
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ypresp_val {void* stat; } ;
typedef struct ypresp_val ypresp_val ;
struct TYPE_5__ {int keydat_len; int keydat_val; } ;
struct TYPE_6__ {char* map; char* domain; TYPE_1__ key; } ;
typedef TYPE_2__ ypreq_key ;
struct userent {char* ue_line; char* ge_line; char* ue_netid_line; void* ue_uid; void* ge_gid; } ;
struct svc_req {int dummy; } ;
struct groupent {char* ue_line; char* ge_line; char* ue_netid_line; void* ue_uid; void* ge_gid; } ;
struct TYPE_7__ {int sc_user_uids; int * sc_group_names; int sc_group_gids; int * sc_user_names; } ;


 int VAR_0 ;
 struct userent* FUNC_0 (int ,int *,struct userent*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 char* FUNC_1 (int ,int) ;
 TYPE_4__* VAR_6 ;
 int FUNC_2 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int ) ;
 int FUNC_7 (char*,int ,int ) ;
 char* FUNC_8 (char**,char*) ;
 void* FUNC_9 (char*,int ,int ,char const**) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (struct ypresp_val*,char*,int) ;
 int FUNC_11 (char*,struct ypresp_val*) ;

ypresp_val *
FUNC_12(ypreq_key *VAR_11, struct svc_req *VAR_12)
{
 struct userent VAR_13;
 struct userent *VAR_14;
 struct groupent VAR_15;
 struct groupent *VAR_16;
 static struct ypresp_val VAR_17;
 const char *VAR_18;
 char *VAR_19, *VAR_20;
 char *VAR_21;

 FUNC_3("matching '%.*s' in map %s", VAR_11->key.keydat_len,
    VAR_11->key.keydat_val, VAR_11->map);

 if (FUNC_11(VAR_11->domain, (struct ypresp_val *)&VAR_17) == -1)
  return (&VAR_17);

 if (VAR_6->sc_user_names == ((void*)0)) {



  return (((void*)0));
 }

 if (VAR_11->key.keydat_len > VAR_2) {
  FUNC_3("argument too long");
  return (((void*)0));
 }
 VAR_21 = FUNC_1(VAR_11->key.keydat_len + 1, 1);
 if (VAR_21 == ((void*)0))
  return (((void*)0));
 (void)FUNC_7(VAR_21, VAR_11->key.keydat_val, VAR_11->key.keydat_len);

 if (FUNC_4(VAR_11->map, "passwd.byname") == 0 ||
     FUNC_4(VAR_11->map, "master.passwd.byname") == 0) {
  VAR_13.ue_line = VAR_21;
  if ((VAR_14 = FUNC_0(VAR_9, VAR_6->sc_user_names,
      &VAR_13)) == ((void*)0)) {
   VAR_17.stat = VAR_4;
   goto out;
  }

  FUNC_10(&VAR_17, VAR_14->ue_line, 1);
  goto out;
 } else if (FUNC_4(VAR_11->map, "passwd.byuid") == 0 ||
     FUNC_4(VAR_11->map, "master.passwd.byuid") == 0) {
  VAR_13.ue_uid = FUNC_9(VAR_21, 0, VAR_1, &VAR_18);
  if (VAR_18) {
   VAR_17.stat = VAR_3;
   goto out;
  }

  if ((VAR_14 = FUNC_0(VAR_10, &VAR_6->sc_user_uids,
      &VAR_13)) == ((void*)0)) {
   VAR_17.stat = VAR_4;
   goto out;
  }

  FUNC_10(&VAR_17, VAR_14->ue_line, 1);
  return (&VAR_17);
 } else if (FUNC_4(VAR_11->map, "group.bygid") == 0) {
  VAR_15.ge_gid = FUNC_9(VAR_21, 0, VAR_0, &VAR_18);
  if (VAR_18) {
   VAR_17.stat = VAR_3;
   goto out;
  }
  if ((VAR_16 = FUNC_0(VAR_7, &VAR_6->sc_group_gids,
      &VAR_15)) == ((void*)0)) {
   VAR_17.stat = VAR_4;
   goto out;
  }

  FUNC_10(&VAR_17, VAR_16->ge_line, 1);
  return (&VAR_17);
 } else if (FUNC_4(VAR_11->map, "group.byname") == 0) {
  VAR_15.ge_line = VAR_21;
  if ((VAR_16 = FUNC_0(VAR_8, VAR_6->sc_group_names,
      &VAR_15)) == ((void*)0)) {
   VAR_17.stat = VAR_4;
   goto out;
  }

  FUNC_10(&VAR_17, VAR_16->ge_line, 1);
  return (&VAR_17);
 } else if (FUNC_4(VAR_11->map, "netid.byname") == 0) {
  VAR_19 = VAR_20 = VAR_21;

  if (FUNC_6(VAR_19, "unix.", FUNC_5("unix.")) != 0) {
   VAR_17.stat = VAR_3;
   goto out;
  }

  VAR_19 += FUNC_5("unix.");

  if (*VAR_19 == '\0') {
   VAR_17.stat = VAR_3;
   goto out;
  }

  if (!(VAR_20 = FUNC_8(&VAR_19, "@"))) {
   VAR_17.stat = VAR_3;
   goto out;
  }

  if (FUNC_4(VAR_19, VAR_11->domain) != 0) {
   VAR_17.stat = VAR_3;
   goto out;
  }

  VAR_13.ue_uid = FUNC_9(VAR_20, 0, VAR_1, &VAR_18);
  if (VAR_18) {
   VAR_17.stat = VAR_3;
   goto out;
  }

  if ((VAR_14 = FUNC_0(VAR_10, &VAR_6->sc_user_uids,
      &VAR_13)) == ((void*)0)) {
   VAR_17.stat = VAR_4;
   goto out;
  }

  FUNC_10(&VAR_17, VAR_14->ue_netid_line, 0);
  goto out;

 } else {
  FUNC_3("unknown map %s", VAR_11->map);
  VAR_17.stat = VAR_5;
  goto out;
 }
out:
 FUNC_2(VAR_21);
 return (&VAR_17);
}
