
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry_space {struct entry* end; struct entry* begin; } ;
struct entry {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static struct entry *FUNC_1(struct entry_space *VAR_0, unsigned VAR_1)
{
 struct entry *VAR_2;

 VAR_2 = VAR_0->begin + VAR_1;
 FUNC_0(VAR_2 >= VAR_0->end);

 return VAR_2;
}
