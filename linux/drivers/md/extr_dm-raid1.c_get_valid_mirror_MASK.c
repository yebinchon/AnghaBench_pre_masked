
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mirror_set {int nr_mirrors; struct mirror* mirror; } ;
struct mirror {int error_count; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static struct mirror *FUNC_1(struct mirror_set *VAR_0)
{
 struct mirror *VAR_1;

 for (VAR_1 = VAR_0->mirror; VAR_1 < VAR_0->mirror + VAR_0->nr_mirrors; VAR_1++)
  if (!FUNC_0(&VAR_1->error_count))
   return VAR_1;

 return ((void*)0);
}
