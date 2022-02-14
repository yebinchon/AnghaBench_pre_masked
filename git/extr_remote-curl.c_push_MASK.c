
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct discovery {scalar_t__ proto_git; } ;


 struct discovery* FUNC_0 (char*,int) ;
 int FUNC_1 (struct discovery*) ;
 int FUNC_2 (int,char const**) ;
 int FUNC_3 (struct discovery*,int,char const**) ;

__attribute__((used)) static int FUNC_4(int VAR_0, const char **VAR_1)
{
 struct discovery *VAR_2 = FUNC_0("git-receive-pack", 1);
 int VAR_3;

 if (VAR_2->proto_git)
  VAR_3 = FUNC_3(VAR_2, VAR_0, VAR_1);
 else
  VAR_3 = FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_2);
 return VAR_3;
}
