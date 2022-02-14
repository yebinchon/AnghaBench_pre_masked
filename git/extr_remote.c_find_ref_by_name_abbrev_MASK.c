
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {int name; struct ref* next; } ;


 int FUNC_0 (char const*,int ) ;

__attribute__((used)) static const struct ref *FUNC_1(const struct ref *VAR_0, const char *VAR_1)
{
 const struct ref *VAR_2;
 const struct ref *VAR_3 = ((void*)0);
 int VAR_4 = 0;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next) {
  int VAR_5 = FUNC_0(VAR_1, VAR_2->name);

  if (VAR_4 < VAR_5) {
   VAR_3 = VAR_2;
   VAR_4 = VAR_5;
  }
 }
 return VAR_3;
}
