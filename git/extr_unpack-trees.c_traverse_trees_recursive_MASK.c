
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int cache_bottom; int src_index; int merge; } ;
struct tree_desc {int dummy; } ;
struct traverse_info {unsigned long df_conflicts; int pathlen; scalar_t__ mode; int namelen; int name; int pathspec; struct traverse_info* prev; struct unpack_trees_options* data; } ;
struct object_id {int dummy; } ;
struct name_entry {struct object_id oid; scalar_t__ mode; int pathlen; int path; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int,unsigned long,struct name_entry*,struct traverse_info*) ;
 scalar_t__ FUNC_2 (struct name_entry*,struct name_entry*) ;
 void* FUNC_3 (int ,struct tree_desc*,struct object_id const*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct name_entry*,struct traverse_info*) ;
 int FUNC_6 (struct traverse_info*,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct traverse_info*) ;
 int VAR_1 ;
 int FUNC_9 (int,int,int,struct traverse_info*) ;
 int FUNC_10 (int ,int,struct tree_desc*,struct traverse_info*) ;
 int FUNC_11 (struct name_entry*) ;

__attribute__((used)) static int FUNC_12(int VAR_2, unsigned long VAR_3,
        unsigned long VAR_4,
        struct name_entry *VAR_5,
        struct traverse_info *VAR_6)
{
 struct unpack_trees_options *VAR_7 = VAR_6->data;
 int VAR_8, VAR_9, VAR_10;
 int VAR_11 = 0;
 struct tree_desc VAR_12[VAR_0];
 void *VAR_13[VAR_0];
 struct traverse_info VAR_14;
 struct name_entry *VAR_15;
 int VAR_16;

 VAR_16 = FUNC_1(VAR_2, VAR_3, VAR_5, VAR_6);
 if (VAR_16 > 0) {
  int VAR_17 = FUNC_5(VAR_5, VAR_6);

  if (!VAR_7->merge || VAR_4)
   FUNC_0("Wrong condition to get here buddy");







  VAR_10 = VAR_7->cache_bottom;
  VAR_9 = FUNC_9(VAR_17, VAR_16, VAR_2, VAR_6);
  VAR_7->cache_bottom = VAR_10;
  return VAR_9;
 }

 VAR_15 = VAR_5;
 while (!VAR_15->mode)
  VAR_15++;

 VAR_14 = *VAR_6;
 VAR_14.prev = VAR_6;
 VAR_14.pathspec = VAR_6->pathspec;
 VAR_14.name = VAR_15->path;
 VAR_14.namelen = VAR_15->pathlen;
 VAR_14.mode = VAR_15->mode;
 VAR_14.pathlen = FUNC_7(VAR_14.pathlen, FUNC_11(VAR_15), 1);
 VAR_14.df_conflicts |= VAR_4;
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++, VAR_3 >>= 1) {
  if (VAR_8 > 0 && FUNC_2(&VAR_5[VAR_8], &VAR_5[VAR_8 - 1]))
   VAR_12[VAR_8] = VAR_12[VAR_8 - 1];
  else if (VAR_8 > 1 && FUNC_2(&VAR_5[VAR_8], &VAR_5[VAR_8 - 2]))
   VAR_12[VAR_8] = VAR_12[VAR_8 - 2];
  else {
   const struct object_id *VAR_18 = ((void*)0);
   if (VAR_3 & 1)
    VAR_18 = &VAR_5[VAR_8].oid;
   VAR_13[VAR_11++] = FUNC_3(VAR_1, VAR_12 + VAR_8, VAR_18);
  }
 }

 VAR_10 = FUNC_8(&VAR_14);
 VAR_9 = FUNC_10(VAR_7->src_index, VAR_2, VAR_12, &VAR_14);
 FUNC_6(&VAR_14, VAR_10);

 for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++)
  FUNC_4(VAR_13[VAR_8]);

 return VAR_9;
}
