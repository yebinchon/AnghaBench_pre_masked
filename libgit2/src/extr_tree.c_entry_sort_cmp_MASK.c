
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int filename_len; int filename; } ;
typedef TYPE_1__ git_tree_entry ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_2(const void *VAR_1, const void *VAR_2)
{
 const git_tree_entry *VAR_3 = (const git_tree_entry *)VAR_1;
 const git_tree_entry *VAR_4 = (const git_tree_entry *)VAR_2;

 return FUNC_0(
  VAR_3->filename, VAR_3->filename_len, FUNC_1(VAR_3),
  VAR_4->filename, VAR_4->filename_len, FUNC_1(VAR_4),
  VAR_0);
}
