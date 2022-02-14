
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct traverse_info {int dummy; } ;
struct name_entry {int pathlen; int path; int oid; int mode; } ;
struct index_state {int dummy; } ;
struct cache_entry {size_t ce_namelen; int name; int oid; int ce_flags; int ce_mode; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct cache_entry* FUNC_2 (struct index_state*,size_t) ;
 struct cache_entry* FUNC_3 (size_t) ;
 int FUNC_4 (int ,size_t,struct traverse_info const*,int ,int ) ;
 int FUNC_5 (int *,int *) ;
 size_t FUNC_6 (struct traverse_info const*,int ) ;
 int FUNC_7 (struct name_entry const*) ;

__attribute__((used)) static struct cache_entry *FUNC_8(const struct traverse_info *VAR_0,
 const struct name_entry *VAR_1,
 int VAR_2,
 struct index_state *VAR_3,
 int VAR_4)
{
 size_t VAR_5 = FUNC_6(VAR_0, FUNC_7(VAR_1));
 struct cache_entry *VAR_6 =
  VAR_4 ?
  FUNC_3(VAR_5) :
  FUNC_2(VAR_3, VAR_5);

 VAR_6->ce_mode = FUNC_1(VAR_1->mode);
 VAR_6->ce_flags = FUNC_0(VAR_2);
 VAR_6->ce_namelen = VAR_5;
 FUNC_5(&VAR_6->oid, &VAR_1->oid);

 FUNC_4(VAR_6->name, VAR_5 + 1, VAR_0, VAR_1->path, VAR_1->pathlen);

 return VAR_6;
}
