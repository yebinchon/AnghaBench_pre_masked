
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct oid_array {int dummy; } ;
struct object_id {int* hash; } ;
struct object_directory {int* loose_objects_subdir_seen; struct oid_array* loose_objects_cache; int path; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (char*) ;
 struct strbuf VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,struct strbuf*,int ,int *,int *,struct oid_array*) ;
 int FUNC_3 (struct strbuf*,int ) ;
 int FUNC_4 (struct strbuf*) ;

struct oid_array *FUNC_5(struct object_directory *VAR_2,
      const struct object_id *VAR_3)
{
 int VAR_4 = VAR_3->hash[0];
 struct strbuf VAR_5 = VAR_0;

 if (VAR_4 < 0 ||
     VAR_4 >= FUNC_0(VAR_2->loose_objects_subdir_seen))
  FUNC_1("subdir_nr out of range");

 if (VAR_2->loose_objects_subdir_seen[VAR_4])
  return &VAR_2->loose_objects_cache[VAR_4];

 FUNC_3(&VAR_5, VAR_2->path);
 FUNC_2(VAR_4, &VAR_5,
        VAR_1,
        ((void*)0), ((void*)0),
        &VAR_2->loose_objects_cache[VAR_4]);
 VAR_2->loose_objects_subdir_seen[VAR_4] = 1;
 FUNC_4(&VAR_5);
 return &VAR_2->loose_objects_cache[VAR_4];
}
