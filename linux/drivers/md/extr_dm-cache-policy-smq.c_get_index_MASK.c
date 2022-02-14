
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry_alloc {int begin; int es; } ;
struct entry {int dummy; } ;


 int FUNC_0 (int ,struct entry*) ;

__attribute__((used)) static unsigned FUNC_1(struct entry_alloc *VAR_0, struct entry *VAR_1)
{
 return FUNC_0(VAR_0->es, VAR_1) - VAR_0->begin;
}
