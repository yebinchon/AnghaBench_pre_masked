
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {struct packed_git* next; } ;


 scalar_t__ FUNC_0 (unsigned char const*,struct packed_git*) ;

struct packed_git *FUNC_1(const unsigned char *VAR_0,
      struct packed_git *VAR_1)
{
 struct packed_git *VAR_2;

 for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->next) {
  if (FUNC_0(VAR_0, VAR_2))
   return VAR_2;
 }
 return ((void*)0);

}
