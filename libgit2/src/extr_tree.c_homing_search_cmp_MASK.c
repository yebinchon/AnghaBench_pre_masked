
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct tree_key_search {scalar_t__ filename_len; int filename; } ;
struct TYPE_2__ {scalar_t__ filename_len; int filename; } ;
typedef TYPE_1__ git_tree_entry ;


 int FUNC_0 (int ,int ,scalar_t__ const) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct tree_key_search *VAR_2 = VAR_0;
 const git_tree_entry *VAR_3 = VAR_1;

 const uint16_t VAR_4 = VAR_2->filename_len;
 const uint16_t VAR_5 = VAR_3->filename_len;

 return FUNC_0(
  VAR_2->filename,
  VAR_3->filename,
  VAR_4 < VAR_5 ? VAR_4 : VAR_5
 );
}
