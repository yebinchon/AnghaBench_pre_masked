
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct untracked_cache_dir {int valid; int stat_data; } ;
struct stat_data {int dummy; } ;
struct read_data {scalar_t__ data; scalar_t__ end; struct untracked_cache_dir** ucd; } ;


 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(size_t VAR_0, void *VAR_1)
{
 struct read_data *VAR_2 = VAR_1;
 struct untracked_cache_dir *VAR_3 = VAR_2->ucd[VAR_0];
 if (VAR_2->data + sizeof(struct stat_data) > VAR_2->end) {
  VAR_2->data = VAR_2->end + 1;
  return;
 }
 FUNC_0(&VAR_3->stat_data, VAR_2->data);
 VAR_2->data += sizeof(struct stat_data);
 VAR_3->valid = 1;
}
