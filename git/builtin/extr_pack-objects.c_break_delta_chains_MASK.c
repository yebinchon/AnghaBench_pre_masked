
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct object_entry {scalar_t__ dfs_state; int depth; } ;


 int FUNC_0 (char*,scalar_t__) ;
 struct object_entry* FUNC_1 (struct object_entry*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct object_entry*) ;

__attribute__((used)) static void FUNC_3(struct object_entry *VAR_4)
{






 uint32_t VAR_5;
 struct object_entry *VAR_6, *VAR_7;

 for (VAR_6 = VAR_4, VAR_5 = 0;
      VAR_6;
      VAR_6 = FUNC_1(VAR_6), VAR_5++) {
  if (VAR_6->dfs_state == VAR_1) {





   VAR_5 += VAR_6->depth;
   break;
  }






  if (VAR_6->dfs_state != VAR_2)
   FUNC_0("confusing delta dfs state in first pass: %d",
       VAR_6->dfs_state);






  if (!FUNC_1(VAR_6)) {
   VAR_6->dfs_state = VAR_1;
   break;
  }
  VAR_6->dfs_state = VAR_0;
  if (FUNC_1(VAR_6)->dfs_state == VAR_0) {
   FUNC_2(VAR_6);
   VAR_6->dfs_state = VAR_1;
   break;
  }
 }
 for (VAR_6 = VAR_4; VAR_6; VAR_6 = VAR_7) {
  VAR_7 = FUNC_1(VAR_6);







  if (VAR_6->dfs_state == VAR_1)
   break;
  else if (VAR_6->dfs_state != VAR_0)
   FUNC_0("confusing delta dfs state in second pass: %d",
       VAR_6->dfs_state);
  VAR_6->depth = (VAR_5--) % (VAR_3 + 1);
  if (!VAR_6->depth)
   FUNC_2(VAR_6);

  VAR_6->dfs_state = VAR_1;
 }
}
