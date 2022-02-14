
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct promisor_remote {struct promisor_remote* next; } ;


 int FUNC_0 (struct promisor_remote*,int ,char const*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 struct promisor_remote** VAR_1 ;
 int FUNC_2 (int ,char const*) ;

__attribute__((used)) static struct promisor_remote *FUNC_3(const char *VAR_2)
{
 struct promisor_remote *VAR_3;

 if (*VAR_2 == '/') {
  FUNC_2(FUNC_1("promisor remote name cannot begin with '/': %s"),
   VAR_2);
  return ((void*)0);
 }

 FUNC_0(VAR_3, VAR_0, VAR_2);

 *VAR_1 = VAR_3;
 VAR_1 = &VAR_3->next;

 return VAR_3;
}
