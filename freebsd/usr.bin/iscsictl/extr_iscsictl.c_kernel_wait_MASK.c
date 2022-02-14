
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session_state {int iss_connected; } ;
struct iscsi_session_list {unsigned int isl_nentries; struct iscsi_session_state* isl_pstates; } ;
typedef int isl ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int ,struct iscsi_session_list*) ;
 int FUNC_1 (struct iscsi_session_list*,int ,int) ;
 struct iscsi_session_state* FUNC_2 (struct iscsi_session_state*,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(int VAR_3, int VAR_4)
{
 struct iscsi_session_state *VAR_5 = ((void*)0);
 const struct iscsi_session_state *VAR_6;
 struct iscsi_session_list VAR_7;
 unsigned int VAR_8, VAR_9 = 1;
 bool VAR_10;
 int VAR_11;

 for (;;) {
  for (;;) {
   VAR_5 = FUNC_2(VAR_5,
       VAR_9 * sizeof(struct iscsi_session_state));
   if (VAR_5 == ((void*)0))
    FUNC_4(1, "realloc");

   FUNC_1(&VAR_7, 0, sizeof(VAR_7));
   VAR_7.isl_nentries = VAR_9;
   VAR_7.isl_pstates = VAR_5;

   VAR_11 = FUNC_0(VAR_3, VAR_1, &VAR_7);
   if (VAR_11 != 0 && VAR_2 == VAR_0) {
    VAR_9 *= 4;
    continue;
   }
   break;
  }
  if (VAR_11 != 0) {
   FUNC_5("ISCSISLIST");
   return (VAR_11);
  }

  VAR_10 = 1;
  for (VAR_8 = 0; VAR_8 < VAR_7.isl_nentries; VAR_8++) {
   VAR_6 = &VAR_5[VAR_8];

   if (!VAR_6->iss_connected) {
    VAR_10 = 0;
    break;
   }
  }

  if (VAR_10)
   return (0);

  FUNC_3(1);

  if (VAR_4 > 0) {
   VAR_4--;
   if (VAR_4 == 0)
    return (1);
  }
 }
}
