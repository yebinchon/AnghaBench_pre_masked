
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct object_id {int dummy; } ;
struct index_state {int dummy; } ;
struct cache_entry {int oid; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct index_state*,struct object_id*,int,struct stat*,int ,int ,int ) ;
 int FUNC_2 (struct object_id*,int *) ;

__attribute__((used)) static int FUNC_3(struct index_state *VAR_2,
      const struct cache_entry *VAR_3,
      struct stat *VAR_4)
{
 int VAR_5 = -1;
 int VAR_6 = FUNC_0(VAR_3->name, VAR_1);

 if (VAR_6 >= 0) {
  struct object_id VAR_7;
  if (!FUNC_1(VAR_2, &VAR_7, VAR_6, VAR_4, VAR_0, VAR_3->name, 0))
   VAR_5 = !FUNC_2(&VAR_7, &VAR_3->oid);

 }
 return VAR_5;
}
