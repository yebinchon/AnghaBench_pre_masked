
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec {int dummy; } ;
struct index_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct index_state const*,struct pathspec const*,char const*,int ,int ,char*,int) ;
 int FUNC_1 (char const*) ;

int FUNC_2(const struct index_state *VAR_2,
    const struct pathspec *VAR_3,
    const char *VAR_4,
    char *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4,
     FUNC_1(VAR_4),
     0, VAR_5,
     VAR_0 |
     VAR_1);
 return VAR_6;
}
