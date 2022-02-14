
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_update {char const* refname; struct ref_update* parent_update; } ;



__attribute__((used)) static const char *FUNC_0(struct ref_update *VAR_0)
{
 while (VAR_0->parent_update)
  VAR_0 = VAR_0->parent_update;

 return VAR_0->refname;
}
