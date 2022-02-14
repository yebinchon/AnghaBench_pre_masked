
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replay_opts {int edit; int action; } ;


 struct replay_opts VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,char const**,struct replay_opts*) ;
 int FUNC_4 (struct replay_opts*) ;

int FUNC_5(int VAR_2, const char **VAR_3, const char *VAR_4)
{
 struct replay_opts VAR_5 = VAR_0;
 int VAR_6;

 if (FUNC_2(0))
  VAR_5.edit = 1;
 VAR_5.action = VAR_1;
 FUNC_4(&VAR_5);
 VAR_6 = FUNC_3(VAR_2, VAR_3, &VAR_5);
 if (VAR_6 < 0)
  FUNC_1(FUNC_0("revert failed"));
 return VAR_6;
}
