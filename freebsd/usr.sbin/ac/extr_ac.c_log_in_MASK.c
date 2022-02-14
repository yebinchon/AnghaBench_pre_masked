
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx_entry {int time; int line; int id; int user; } ;
struct utmpx {char* ut_host; int ut_tv; int ut_line; int ut_id; int ut_user; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct utmpx_entry*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 struct utmpx_entry* FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct utmpx *VAR_6)
{
 struct utmpx_entry *VAR_7;
 if (VAR_4 & VAR_0 && !FUNC_1(VAR_6->ut_line))
  return;




 if ((VAR_7 = FUNC_3(sizeof(*VAR_7))) == ((void*)0))
  FUNC_2(1, "malloc failed");
 FUNC_0(&VAR_2, VAR_7, VAR_5);
 FUNC_6(VAR_7->user, VAR_6->ut_user, sizeof(VAR_7->user));
 FUNC_4(VAR_7->id, VAR_6->ut_id, sizeof(VAR_7->id));



 VAR_7->time = VAR_6->ut_tv;
}
