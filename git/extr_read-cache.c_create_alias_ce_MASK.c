
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;
struct cache_entry {int ce_flags; int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct cache_entry*) ;
 int FUNC_2 (struct cache_entry*,struct cache_entry*) ;
 int FUNC_3 (int ,int ,int ) ;
 struct cache_entry* FUNC_4 (struct index_state*,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct index_state*,struct cache_entry*) ;

__attribute__((used)) static struct cache_entry *FUNC_7(struct index_state *VAR_1,
        struct cache_entry *VAR_2,
        struct cache_entry *VAR_3)
{
 int VAR_4;
 struct cache_entry *VAR_5;

 if (VAR_3->ce_flags & VAR_0)
  FUNC_3(FUNC_0("will not add file alias '%s' ('%s' already exists in index)"),
      VAR_2->name, VAR_3->name);


 VAR_4 = FUNC_1(VAR_3);
 VAR_5 = FUNC_4(VAR_1, VAR_4);
 FUNC_5(VAR_5->name, VAR_3->name, VAR_4);
 FUNC_2(VAR_5, VAR_2);
 FUNC_6(VAR_1, VAR_2);
 return VAR_5;
}
