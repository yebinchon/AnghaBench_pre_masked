
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int src_index; } ;
struct stat {int dummy; } ;
struct cache_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct cache_entry const*,struct stat*,int) ;
 struct cache_entry* FUNC_1 (int ,char const*,int,int) ;

__attribute__((used)) static int FUNC_2(struct unpack_trees_options *VAR_2, const char *VAR_3, int VAR_4, struct stat *VAR_5)
{
 const struct cache_entry *VAR_6;

 VAR_6 = FUNC_1(VAR_2->src_index, VAR_3, VAR_4, 1);
 return VAR_6 && !FUNC_0(VAR_2->src_index, VAR_6, VAR_5, VAR_1|VAR_0);
}
