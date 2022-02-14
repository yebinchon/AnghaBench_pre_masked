
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mirror_set {int nr_mirrors; int mirror; } ;
struct mirror {int error_count; } ;
typedef int sector_t ;


 int FUNC_0 (int *) ;
 struct mirror* FUNC_1 (struct mirror_set*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static struct mirror *FUNC_3(struct mirror_set *VAR_0, sector_t VAR_1)
{
 struct mirror *VAR_2 = FUNC_1(VAR_0);

 do {
  if (FUNC_2(!FUNC_0(&VAR_2->error_count)))
   return VAR_2;

  if (VAR_2-- == VAR_0->mirror)
   VAR_2 += VAR_0->nr_mirrors;
 } while (VAR_2 != FUNC_1(VAR_0));

 return ((void*)0);
}
