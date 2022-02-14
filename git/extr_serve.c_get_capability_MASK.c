
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protocol_capability {int name; } ;


 int FUNC_0 (struct protocol_capability*) ;
 struct protocol_capability* VAR_0 ;
 scalar_t__ FUNC_1 (char const*,int ,char const**) ;

__attribute__((used)) static struct protocol_capability *FUNC_2(const char *VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  return ((void*)0);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  struct protocol_capability *VAR_3 = &VAR_0[VAR_2];
  const char *VAR_4;
  if (FUNC_1(VAR_1, VAR_3->name, &VAR_4) && (!*VAR_4 || *VAR_4 == '='))
   return VAR_3;
 }

 return ((void*)0);
}
