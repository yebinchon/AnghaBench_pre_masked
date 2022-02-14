
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct traverse_info {int dummy; } ;
struct name_entry {int oid; int mode; } ;
struct merge_list {char* path; struct merge_list* link; } ;


 struct merge_list* FUNC_0 (unsigned int,int ,int *,char const*) ;
 char* FUNC_1 (struct traverse_info const*,struct name_entry*) ;

__attribute__((used)) static struct merge_list *FUNC_2(unsigned VAR_0, const struct traverse_info *VAR_1, struct name_entry *VAR_2, struct merge_list *VAR_3)
{
 const char *VAR_4;
 struct merge_list *VAR_5;

 if (!VAR_2->mode)
  return VAR_3;
 if (VAR_3)
  VAR_4 = VAR_3->path;
 else
  VAR_4 = FUNC_1(VAR_1, VAR_2);
 VAR_5 = FUNC_0(VAR_0, VAR_2->mode, &VAR_2->oid, VAR_4);
 VAR_5->link = VAR_3;
 return VAR_5;
}
