
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union drbd_state {int dummy; } drbd_state ;
struct drbd_connection {int dummy; } ;
typedef enum chg_state_flags { ____Placeholder_chg_state_flags } chg_state_flags ;


 int VAR_0 ;
 int FUNC_0 (struct drbd_connection*,char*,char*) ;
 int FUNC_1 (union drbd_state) ;
 int FUNC_2 (char*,union drbd_state,union drbd_state,int) ;
 int FUNC_3 (char*,char*,int,int) ;

__attribute__((used)) static void FUNC_4(struct drbd_connection *VAR_1, union drbd_state VAR_2, union drbd_state VAR_3,
     enum chg_state_flags VAR_4)
{
 char VAR_5[300];
 char *VAR_6 = VAR_5;

 VAR_6 += FUNC_2(VAR_6, VAR_2, VAR_3, VAR_4);

 if (FUNC_1(VAR_3) != FUNC_1(VAR_2) && VAR_4 & VAR_0)
  VAR_6 += FUNC_3(VAR_6, "susp( %d -> %d ) ",
          FUNC_1(VAR_2),
          FUNC_1(VAR_3));

 if (VAR_6 != VAR_5)
  FUNC_0(VAR_1, "%s\n", VAR_5);
}
