
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {int dummy; } ;
struct discovery {scalar_t__ proto_git; } ;


 struct discovery* FUNC_0 (char*,int ) ;
 int FUNC_1 (int,struct ref**) ;
 int FUNC_2 (struct discovery*,int,struct ref**) ;

__attribute__((used)) static int FUNC_3(int VAR_0, struct ref **VAR_1)
{
 struct discovery *VAR_2 = FUNC_0("git-upload-pack", 0);
 if (VAR_2->proto_git)
  return FUNC_2(VAR_2, VAR_0, VAR_1);
 else
  return FUNC_1(VAR_0, VAR_1);
}
