
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int * commits; } ;
struct repository {int dummy; } ;
struct commit {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rev_info*) ;
 int FUNC_1 (struct repository*,struct rev_info*,char const*,char*,char*,int ) ;
 int FUNC_2 (int,struct commit**,int ) ;

__attribute__((used)) static int FUNC_3(struct repository *VAR_1, int VAR_2,
      struct commit **VAR_3, const char *VAR_4)
{
 struct rev_info VAR_5;
 int VAR_6;

 FUNC_1(VAR_1, &VAR_5, VAR_4, "^%s", "%s", 0);

 FUNC_0(&VAR_5);
 VAR_6 = (VAR_5.commits != ((void*)0));


 FUNC_2(VAR_2, VAR_3, VAR_0);

 return VAR_6;
}
