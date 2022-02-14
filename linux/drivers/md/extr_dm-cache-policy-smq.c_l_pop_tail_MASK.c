
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ilist {int dummy; } ;
struct entry_space {int dummy; } ;
struct entry {int sentinel; } ;


 int FUNC_0 (struct entry_space*,struct ilist*,struct entry*) ;
 struct entry* FUNC_1 (struct entry_space*,struct entry*) ;
 struct entry* FUNC_2 (struct entry_space*,struct ilist*) ;

__attribute__((used)) static struct entry *FUNC_3(struct entry_space *VAR_0, struct ilist *VAR_1)
{
 struct entry *VAR_2;

 for (VAR_2 = FUNC_2(VAR_0, VAR_1); VAR_2; VAR_2 = FUNC_1(VAR_0, VAR_2))
  if (!VAR_2->sentinel) {
   FUNC_0(VAR_0, VAR_1, VAR_2);
   return VAR_2;
  }

 return ((void*)0);
}
