
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry_space {int dummy; } ;
struct entry {int next; } ;


 struct entry* FUNC_0 (struct entry_space*,int ) ;

__attribute__((used)) static struct entry *FUNC_1(struct entry_space *VAR_0, struct entry *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->next);
}
