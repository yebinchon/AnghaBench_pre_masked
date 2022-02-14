
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry_space {struct entry* begin; struct entry* end; } ;
struct entry {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static unsigned FUNC_1(struct entry_space *VAR_0, struct entry *VAR_1)
{
 FUNC_0(VAR_1 < VAR_0->begin || VAR_1 >= VAR_0->end);
 return VAR_1 - VAR_0->begin;
}
