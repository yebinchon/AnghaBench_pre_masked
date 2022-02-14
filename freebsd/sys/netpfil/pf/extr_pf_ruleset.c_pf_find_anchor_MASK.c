
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_anchor {int path; } ;


 struct pf_anchor* FUNC_0 (int ,int *,struct pf_anchor*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pf_anchor*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static struct pf_anchor *
FUNC_4(const char *VAR_2)
{
 struct pf_anchor *VAR_3, *VAR_4;

 VAR_3 = (struct pf_anchor *)FUNC_2(sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 FUNC_3(VAR_3->path, VAR_2, sizeof(VAR_3->path));
 VAR_4 = FUNC_0(VAR_1, &VAR_0, VAR_3);
 FUNC_1(VAR_3);
 return (VAR_4);
}
