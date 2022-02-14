
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcons_state {int flags; } ;
typedef int oldreason ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct dcons_state *VAR_1, int VAR_2, char *VAR_3)
{
 static char VAR_4[64] = "";
 int VAR_5;

 VAR_5 = (VAR_1->flags & VAR_0) ? 1 : 0;

 if (VAR_2) {
  VAR_1->flags |= VAR_0;
  if (VAR_2 != VAR_5)
   FUNC_0("[dcons connected]\r\n");
  VAR_4[0] = 0;
 } else {
  VAR_1->flags &= ~VAR_0;
  if (FUNC_2(VAR_4, VAR_3, sizeof(VAR_4)) != 0) {
   FUNC_0("[dcons disconnected (%s)]\r\n", VAR_3);
   FUNC_1(VAR_4, VAR_3, sizeof(VAR_4));
  }
 }
}
