
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target {int dummy; } ;
struct iscsi_session_add {int isa_conf; } ;
typedef int isa ;


 int VAR_0 ;
 int FUNC_0 (int *,struct target const*) ;
 int FUNC_1 (int,int ,struct iscsi_session_add*) ;
 int FUNC_2 (struct iscsi_session_add*,int ,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(int VAR_1, const struct target *VAR_2)
{
 struct iscsi_session_add VAR_3;
 int VAR_4;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 FUNC_0(&VAR_3.isa_conf, VAR_2);
 VAR_4 = FUNC_1(VAR_1, VAR_0, &VAR_3);
 if (VAR_4 != 0)
  FUNC_3("ISCSISADD");
 return (VAR_4);
}
