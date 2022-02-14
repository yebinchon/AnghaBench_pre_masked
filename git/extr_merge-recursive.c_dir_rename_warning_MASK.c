
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rename {char* branch; TYPE_3__* pair; int dir_rename_original_dest; } ;
struct merge_options {char* branch1; char* branch2; } ;
struct TYPE_6__ {TYPE_2__* two; TYPE_1__* one; } ;
struct TYPE_5__ {int path; } ;
struct TYPE_4__ {int path; } ;


 int FUNC_0 (struct merge_options*,int,char const*,int ,char*,char const*,char const*,...) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0,
          int VAR_1,
          int VAR_2,
          struct merge_options *VAR_3,
          struct rename *VAR_4)
{
 const char *VAR_5;
 VAR_5 = (VAR_4->branch == VAR_3->branch1 ?
   VAR_3->branch2 : VAR_3->branch1);
 if (VAR_1) {
  FUNC_0(VAR_3, VAR_2 ? 2 : 1, VAR_0,
         VAR_4->pair->one->path, VAR_4->branch,
         VAR_5, VAR_4->pair->two->path);
  return;
 }
 FUNC_0(VAR_3, VAR_2 ? 2 : 1, VAR_0,
        VAR_4->pair->one->path, VAR_4->dir_rename_original_dest, VAR_4->branch,
        VAR_5, VAR_4->pair->two->path);
}
