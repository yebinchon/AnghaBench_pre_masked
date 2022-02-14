
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* ref_name; char const* id_str; } ;
typedef TYPE_1__ git_annotated_commit ;


 scalar_t__ FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static const char *FUNC_1(const git_annotated_commit *VAR_0)
{
 if (VAR_0->ref_name && FUNC_0(VAR_0->ref_name, "refs/heads/", 11) == 0)
  return VAR_0->ref_name + 11;
 else if (VAR_0->ref_name)
  return VAR_0->ref_name;
 else
  return VAR_0->id_str;
}
