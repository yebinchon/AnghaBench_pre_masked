
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry_alloc {unsigned int begin; int es; } ;
struct entry {int dummy; } ;


 struct entry* FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static struct entry *FUNC_1(struct entry_alloc *VAR_0, unsigned VAR_1)
{
 return FUNC_0(VAR_0->es, VAR_0->begin + VAR_1);
}
