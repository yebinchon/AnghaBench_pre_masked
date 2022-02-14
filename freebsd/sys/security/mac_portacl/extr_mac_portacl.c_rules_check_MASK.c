
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct ucred {int cr_uid; scalar_t__ cr_gid; } ;
struct rule {scalar_t__ r_protocol; int r_port; scalar_t__ r_idtype; scalar_t__ r_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct rule* FUNC_0 (int *) ;
 struct rule* FUNC_1 (struct rule*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,struct ucred*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,scalar_t__) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (char*,int,int,int,int) ;
 int FUNC_7 (struct ucred*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_8(struct ucred *VAR_13, int VAR_14, int VAR_15, u_int16_t VAR_16)
{
 struct rule *VAR_17;
 int VAR_18;






 if (VAR_16 > VAR_8)
  return (0);

 VAR_18 = VAR_0;
 FUNC_3(&VAR_12);
 for (VAR_17 = FUNC_0(&VAR_11);
     VAR_17 != ((void*)0);
     VAR_17 = FUNC_1(VAR_17, VAR_10)) {
  if (VAR_15 == VAR_6 && VAR_17->r_protocol != VAR_4)
   continue;
  if (VAR_15 == VAR_7 && VAR_17->r_protocol != VAR_3)
   continue;
  if (VAR_16 != VAR_17->r_port)
   continue;
  if (VAR_17->r_idtype == VAR_5) {
   if (VAR_13->cr_uid == VAR_17->r_id) {
    VAR_18 = 0;
    break;
   }
  } else if (VAR_17->r_idtype == VAR_2) {
   if (VAR_13->cr_gid == VAR_17->r_id) {
    VAR_18 = 0;
    break;
   } else if (FUNC_2(VAR_17->r_id, VAR_13)) {
    VAR_18 = 0;
    break;
   }
  } else
   FUNC_5("rules_check: unknown rule type %d",
       VAR_17->r_idtype);
 }
 FUNC_4(&VAR_12);

 if (VAR_18 != 0 && VAR_9 != 0)
  VAR_18 = FUNC_7(VAR_13, VAR_1);

 return (VAR_18);
}
