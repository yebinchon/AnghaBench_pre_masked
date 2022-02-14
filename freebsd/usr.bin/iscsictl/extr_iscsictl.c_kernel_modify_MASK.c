
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target {int dummy; } ;
struct iscsi_session_modify {unsigned int ism_session_id; int ism_conf; } ;
typedef int ism ;


 int VAR_0 ;
 int FUNC_0 (int *,struct target const*) ;
 int FUNC_1 (int,int ,struct iscsi_session_modify*) ;
 int FUNC_2 (struct iscsi_session_modify*,int ,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(int VAR_1, unsigned int VAR_2, const struct target *VAR_3)
{
 struct iscsi_session_modify VAR_4;
 int VAR_5;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.ism_session_id = VAR_2;
 FUNC_0(&VAR_4.ism_conf, VAR_3);
 VAR_5 = FUNC_1(VAR_1, VAR_0, &VAR_4);
 if (VAR_5 != 0)
  FUNC_3("ISCSISMODIFY");
 return (VAR_5);
}
