
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct target {int t_name; struct auth_group* t_auth_group; } ;
struct portal_group {scalar_t__ pg_discovery_filter; TYPE_2__* pg_discovery_auth_group; } ;
struct port {struct auth_group* p_auth_group; struct target* p_target; } ;
struct connection {int * conn_user; int * conn_chap; int conn_initiator_name; int conn_initiator_sa; TYPE_1__* conn_portal; } ;
struct auth_group {scalar_t__ ag_type; } ;
struct auth {int a_secret; } ;
struct TYPE_4__ {scalar_t__ ag_type; } ;
struct TYPE_3__ {struct portal_group* p_portal_group; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (int) ;
 struct auth* FUNC_1 (struct auth_group const*,int *) ;
 scalar_t__ FUNC_2 (struct auth_group const*,int ) ;
 scalar_t__ FUNC_3 (struct auth_group const*,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,int *,...) ;

__attribute__((used)) static bool
FUNC_6(const struct connection *VAR_5,
    const struct port *VAR_6)
{
 const struct auth_group *VAR_7;
 const struct portal_group *VAR_8;
 const struct target *VAR_9;
 const struct auth *VAR_10;
 int VAR_11;

 VAR_9 = VAR_6->p_target;
 VAR_7 = VAR_6->p_auth_group;
 if (VAR_7 == ((void*)0))
  VAR_7 = VAR_9->t_auth_group;
 VAR_8 = VAR_5->conn_portal->p_portal_group;

 FUNC_0(VAR_8->pg_discovery_auth_group != VAR_4);

 if (VAR_8->pg_discovery_filter >= VAR_1 &&
     FUNC_3(VAR_7, &VAR_5->conn_initiator_sa) != 0) {
  FUNC_5("initiator does not match initiator portals "
      "allowed for target \"%s\"; skipping", VAR_9->t_name);
  return (1);
 }

 if (VAR_8->pg_discovery_filter >= VAR_2 &&
     FUNC_2(VAR_7, VAR_5->conn_initiator_name) != 0) {
  FUNC_5("initiator does not match initiator names "
      "allowed for target \"%s\"; skipping", VAR_9->t_name);
  return (1);
 }

 if (VAR_8->pg_discovery_filter >= VAR_3 &&
     VAR_7->ag_type != VAR_0) {
  if (VAR_5->conn_chap == ((void*)0)) {
   FUNC_0(VAR_8->pg_discovery_auth_group->ag_type ==
       VAR_0);

   FUNC_5("initiator didn't authenticate, but target "
       "\"%s\" requires CHAP; skipping", VAR_9->t_name);
   return (1);
  }

  FUNC_0(VAR_5->conn_user != ((void*)0));
  VAR_10 = FUNC_1(VAR_7, VAR_5->conn_user);
  if (VAR_10 == ((void*)0)) {
   FUNC_5("CHAP user \"%s\" doesn't match target "
       "\"%s\"; skipping", VAR_5->conn_user, VAR_9->t_name);
   return (1);
  }

  VAR_11 = FUNC_4(VAR_5->conn_chap, VAR_10->a_secret);
  if (VAR_11 != 0) {
   FUNC_5("password for CHAP user \"%s\" doesn't "
       "match target \"%s\"; skipping",
       VAR_5->conn_user, VAR_9->t_name);
   return (1);
  }
 }

 return (0);
}
