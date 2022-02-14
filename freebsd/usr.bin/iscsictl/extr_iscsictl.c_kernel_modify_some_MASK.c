
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session_conf {int isc_enable; int isc_secret; int isc_user; int isc_target_addr; int isc_target; } ;
struct iscsi_session_state {unsigned int iss_id; struct iscsi_session_conf iss_conf; } ;
struct iscsi_session_modify {unsigned int isl_nentries; unsigned int ism_session_id; int ism_conf; struct iscsi_session_state* isl_pstates; } ;
struct iscsi_session_list {unsigned int isl_nentries; unsigned int ism_session_id; int ism_conf; struct iscsi_session_state* isl_pstates; } ;
typedef int ism ;
typedef int isl ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,int ,struct iscsi_session_modify*) ;
 int FUNC_1 (int *,struct iscsi_session_conf*,int) ;
 int FUNC_2 (struct iscsi_session_modify*,int ,int) ;
 struct iscsi_session_state* FUNC_3 (struct iscsi_session_state*,unsigned int) ;
 int FUNC_4 (int ,char const*,int) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(int VAR_6, unsigned int VAR_7, const char *VAR_8,
  const char *VAR_9, const char *VAR_10, const char *VAR_11, int VAR_12)
{
 struct iscsi_session_state *VAR_13 = ((void*)0);
 struct iscsi_session_state *VAR_14;
 struct iscsi_session_conf *VAR_15;
 struct iscsi_session_list VAR_16;
 struct iscsi_session_modify VAR_17;
 unsigned int VAR_18, VAR_19 = 1;
 int VAR_20;

 for (;;) {
  VAR_13 = FUNC_3(VAR_13,
      VAR_19 * sizeof(struct iscsi_session_state));
  if (VAR_13 == ((void*)0))
   FUNC_5(1, "realloc");

  FUNC_2(&VAR_16, 0, sizeof(VAR_16));
  VAR_16.isl_nentries = VAR_19;
  VAR_16.isl_pstates = VAR_13;

  VAR_20 = FUNC_0(VAR_6, VAR_3, &VAR_16);
  if (VAR_20 != 0 && VAR_5 == VAR_0) {
   VAR_19 *= 4;
   continue;
  }
  break;
 }
 if (VAR_20 != 0)
  FUNC_6(1, "ISCSISLIST");

 for (VAR_18 = 0; VAR_18 < VAR_16.isl_nentries; VAR_18++) {
  VAR_14 = &VAR_13[VAR_18];

  if (VAR_14->iss_id == VAR_7)
   break;
 }
 if (VAR_18 == VAR_16.isl_nentries)
  FUNC_6(1, "session-id %u not found", VAR_7);

 VAR_15 = &VAR_14->iss_conf;

 if (VAR_8 != ((void*)0))
  FUNC_4(VAR_15->isc_target, VAR_8, sizeof(VAR_15->isc_target));
 if (VAR_9 != ((void*)0))
  FUNC_4(VAR_15->isc_target_addr, VAR_9,
      sizeof(VAR_15->isc_target_addr));
 if (VAR_10 != ((void*)0))
  FUNC_4(VAR_15->isc_user, VAR_10, sizeof(VAR_15->isc_user));
 if (VAR_11 != ((void*)0))
  FUNC_4(VAR_15->isc_secret, VAR_11, sizeof(VAR_15->isc_secret));
 if (VAR_12 == VAR_2)
  VAR_15->isc_enable = 1;
 else if (VAR_12 == VAR_1)
  VAR_15->isc_enable = 0;

 FUNC_2(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.ism_session_id = VAR_7;
 FUNC_1(&VAR_17.ism_conf, VAR_15, sizeof(VAR_17.ism_conf));
 VAR_20 = FUNC_0(VAR_6, VAR_4, &VAR_17);
 if (VAR_20 != 0)
  FUNC_7("ISCSISMODIFY");
}
