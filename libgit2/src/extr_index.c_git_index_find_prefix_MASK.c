
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int path; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_7__ {int entries; } ;
typedef TYPE_2__ git_index ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char const*) ;
 TYPE_1__* FUNC_1 (int *,size_t) ;
 int FUNC_2 (size_t*,TYPE_2__*,char const*,int ,int ) ;
 int FUNC_3 (char const*) ;

int FUNC_4(size_t *VAR_2, git_index *VAR_3, const char *VAR_4)
{
 int VAR_5 = 0;
 size_t VAR_6;
 const git_index_entry *VAR_7;

 FUNC_2(&VAR_6, VAR_3, VAR_4, FUNC_3(VAR_4), VAR_1);
 VAR_7 = FUNC_1(&VAR_3->entries, VAR_6);
 if (!VAR_7 || FUNC_0(VAR_7->path, VAR_4) != 0)
  VAR_5 = VAR_0;

 if (!VAR_5 && VAR_2)
  *VAR_2 = VAR_6;

 return VAR_5;
}
