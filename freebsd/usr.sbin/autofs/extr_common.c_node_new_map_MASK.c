
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {char* n_key; char* n_options; char* n_map; char const* n_config_file; int n_config_line; int n_children; struct node* n_parent; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct node*,int ) ;
 int FUNC_2 (int) ;
 struct node* FUNC_3 (int,int) ;
 int FUNC_4 (int,char*) ;
 int VAR_0 ;
 char* FUNC_5 (char*) ;

struct node *
FUNC_6(struct node *VAR_1, char *VAR_2, char *VAR_3, char *VAR_4,
    const char *VAR_5, int VAR_6)
{
 struct node *VAR_7;

 VAR_7 = FUNC_3(1, sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  FUNC_4(1, "calloc");

 FUNC_0(&VAR_7->n_children);
 FUNC_2(VAR_2 != ((void*)0));
 FUNC_2(VAR_2[0] != '\0');
 VAR_7->n_key = VAR_2;
 if (VAR_3 != ((void*)0))
  VAR_7->n_options = VAR_3;
 else
  VAR_7->n_options = FUNC_5("");
 VAR_7->n_map = VAR_4;
 FUNC_2(VAR_5 != ((void*)0));
 VAR_7->n_config_file = VAR_5;
 FUNC_2(VAR_6 >= 0);
 VAR_7->n_config_line = VAR_6;

 FUNC_2(VAR_1 != ((void*)0));
 VAR_7->n_parent = VAR_1;
 FUNC_1(&VAR_1->n_children, VAR_7, VAR_0);

 return (VAR_7);
}
