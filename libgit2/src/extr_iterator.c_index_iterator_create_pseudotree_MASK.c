
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int path; int mode; } ;
struct TYPE_11__ {int ptr; } ;
struct TYPE_9__ {TYPE_3__ tree_entry; TYPE_6__ tree_buf; TYPE_1__* entry; } ;
typedef TYPE_2__ index_iterator ;
typedef TYPE_3__ git_index_entry ;
struct TYPE_8__ {char* path; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*,char const*,int) ;
 size_t FUNC_2 (char const*,char const*) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static bool FUNC_4(
 const git_index_entry **VAR_1,
 index_iterator *VAR_2,
 const char *VAR_3)
{
 const char *VAR_4, *VAR_5, *VAR_6;
 size_t VAR_7;

 VAR_4 = VAR_2->entry ? VAR_2->entry->path : "";


 VAR_7 = FUNC_2(VAR_4, VAR_3);
 VAR_5 = VAR_3 + VAR_7;

 if ((VAR_6 = FUNC_3(VAR_5, '/')) == ((void*)0))
  return 0;

 FUNC_0(&VAR_2->tree_buf);
 FUNC_1(&VAR_2->tree_buf, VAR_3, (VAR_6 - VAR_3) + 1);

 VAR_2->tree_entry.mode = VAR_0;
 VAR_2->tree_entry.path = VAR_2->tree_buf.ptr;

 *VAR_1 = &VAR_2->tree_entry;
 return 1;
}
