
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct revindex_entry {int nr; } ;
struct repository {int dummy; } ;
struct packed_git {int dummy; } ;
struct object_id {int hash; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct revindex_entry* FUNC_0 (struct packed_git*,int ) ;
 int FUNC_1 (struct packed_git*,int ) ;
 int FUNC_2 (struct object_id*,struct packed_git*,int ) ;
 int FUNC_3 (struct repository*,struct object_id*,int *) ;

__attribute__((used)) static int FUNC_4(struct repository *VAR_2,
       struct packed_git *VAR_3,
       off_t VAR_4)
{
 int VAR_5;
 struct revindex_entry *VAR_6;
 struct object_id VAR_7;
 VAR_6 = FUNC_0(VAR_3, VAR_4);
 if (!VAR_6)
  return VAR_0;
 FUNC_2(&VAR_7, VAR_3, VAR_6->nr);
 FUNC_1(VAR_3, VAR_7.hash);
 VAR_5 = FUNC_3(VAR_2, &VAR_7, ((void*)0));
 if (VAR_5 <= VAR_1)
  return VAR_0;
 return VAR_5;
}
