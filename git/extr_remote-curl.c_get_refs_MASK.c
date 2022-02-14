
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {int dummy; } ;
struct discovery {struct ref* refs; } ;


 struct discovery* FUNC_0 (char*,int) ;

__attribute__((used)) static struct ref *FUNC_1(int VAR_0)
{
 struct discovery *VAR_1;

 if (VAR_0)
  VAR_1 = FUNC_0("git-receive-pack", VAR_0);
 else
  VAR_1 = FUNC_0("git-upload-pack", VAR_0);

 return VAR_1->refs;
}
