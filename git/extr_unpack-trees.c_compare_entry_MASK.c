
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct traverse_info {int dummy; } ;
struct name_entry {int mode; int pathlen; int path; } ;
struct cache_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct cache_entry const*) ;
 int FUNC_1 (struct cache_entry const*,struct traverse_info const*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct traverse_info const*,int ) ;
 int FUNC_3 (struct name_entry const*) ;

__attribute__((used)) static int FUNC_4(const struct cache_entry *VAR_0, const struct traverse_info *VAR_1, const struct name_entry *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2->path, VAR_2->pathlen, VAR_2->mode);
 if (VAR_3)
  return VAR_3;





 return FUNC_0(VAR_0) > FUNC_2(VAR_1, FUNC_3(VAR_2));
}
