
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mirror_set {int default_mirror; struct mirror* mirror; } ;
struct mirror {int dummy; } ;


 size_t FUNC_0 (int *) ;

__attribute__((used)) static struct mirror *FUNC_1(struct mirror_set *VAR_0)
{
 return &VAR_0->mirror[FUNC_0(&VAR_0->default_mirror)];
}
