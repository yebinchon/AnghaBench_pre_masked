
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apply_state {int dummy; } ;


 int FUNC_0 (struct apply_state*,int,char const**,int) ;
 int FUNC_1 (int,char const**,struct apply_state*,int*,int*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct apply_state*,int) ;
 int FUNC_3 (struct apply_state*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct apply_state*,int ,char const*) ;
 int VAR_1 ;

int FUNC_6(int VAR_2, const char **VAR_3, const char *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7;
 struct apply_state VAR_8;

 if (FUNC_5(&VAR_8, VAR_1, VAR_4))
  FUNC_4(128);

 VAR_2 = FUNC_1(VAR_2, VAR_3,
       &VAR_8, &VAR_5, &VAR_6,
       VAR_0);

 if (FUNC_2(&VAR_8, VAR_5))
  FUNC_4(128);

 VAR_7 = FUNC_0(&VAR_8, VAR_2, VAR_3, VAR_6);

 FUNC_3(&VAR_8);

 return VAR_7;
}
