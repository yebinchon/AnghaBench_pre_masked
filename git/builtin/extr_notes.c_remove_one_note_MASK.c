
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int hash; } ;
struct notes_tree {int dummy; } ;


 unsigned int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int ,char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,struct object_id*) ;
 int FUNC_4 (struct notes_tree*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct notes_tree *VAR_2, const char *VAR_3, unsigned VAR_4)
{
 int VAR_5;
 struct object_id VAR_6;
 if (FUNC_3(VAR_3, &VAR_6))
  return FUNC_1(FUNC_0("Failed to resolve '%s' as a valid ref."), VAR_3);
 VAR_5 = FUNC_4(VAR_2, VAR_6.hash);
 if (VAR_5)
  FUNC_2(VAR_1, FUNC_0("Object %s has no note\n"), VAR_3);
 else
  FUNC_2(VAR_1, FUNC_0("Removing note for object %s\n"), VAR_3);
 return (VAR_4 & VAR_0) ? 0 : VAR_5;
}
