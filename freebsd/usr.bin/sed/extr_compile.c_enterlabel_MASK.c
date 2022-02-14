
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct s_command {scalar_t__ t; } ;
struct labhash {int lh_hash; scalar_t__ lh_ref; struct s_command* lh_cmd; struct labhash* lh_next; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int ,int ,scalar_t__) ;
 int VAR_1 ;
 struct labhash** VAR_2 ;
 int VAR_3 ;
 struct labhash* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct s_command *VAR_4)
{
 struct labhash **VAR_5, *VAR_6;
 u_char *VAR_7;
 u_int VAR_8, VAR_9;

 for (VAR_8 = 0, VAR_7 = (u_char *)VAR_4->t; (VAR_9 = *VAR_7) != 0; VAR_7++)
  VAR_8 = (VAR_8 << 5) + VAR_8 + VAR_9;
 VAR_5 = &VAR_2[VAR_8 & VAR_0];
 for (VAR_6 = *VAR_5; VAR_6 != ((void*)0); VAR_6 = VAR_6->lh_next)
  if (VAR_6->lh_hash == VAR_8 && FUNC_3(VAR_4->t, VAR_6->lh_cmd->t) == 0)
   FUNC_1(1, "%lu: %s: duplicate label '%s'", VAR_3, VAR_1, VAR_4->t);
 if ((VAR_6 = FUNC_2(sizeof *VAR_6)) == ((void*)0))
  FUNC_0(1, "malloc");
 VAR_6->lh_next = *VAR_5;
 VAR_6->lh_hash = VAR_8;
 VAR_6->lh_cmd = VAR_4;
 VAR_6->lh_ref = 0;
 *VAR_5 = VAR_6;
}
