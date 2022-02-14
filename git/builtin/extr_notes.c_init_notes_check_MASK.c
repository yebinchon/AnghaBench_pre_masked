
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notes_tree {char* update_ref; char* ref; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct notes_tree VAR_1 ;
 int FUNC_1 (int ,char const*,char const*) ;
 int FUNC_2 (int *,int *,int *,int) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static struct notes_tree *FUNC_4(const char *VAR_2,
        int VAR_3)
{
 struct notes_tree *VAR_4;
 const char *VAR_5;
 FUNC_2(((void*)0), ((void*)0), ((void*)0), VAR_3);
 VAR_4 = &VAR_1;

 VAR_5 = (VAR_3 & VAR_0) ? VAR_4->update_ref : VAR_4->ref;
 if (!FUNC_3(VAR_5, "refs/notes/"))




  FUNC_1(FUNC_0("refusing to %s notes in %s (outside of refs/notes/)"),
      VAR_2, VAR_5);
 return VAR_4;
}
