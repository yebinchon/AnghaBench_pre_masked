
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int index; } ;
struct commit_list {int item; struct commit_list* next; } ;
struct argv_array {int argv; } ;


 struct argv_array VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct argv_array*) ;
 int FUNC_2 (struct argv_array*,char const*) ;
 int FUNC_3 (struct argv_array*,char*,char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 char const* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct repository*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

int FUNC_10(struct repository *VAR_2,
        const char *VAR_3, size_t VAR_4,
        const char **VAR_5, struct commit_list *VAR_6,
        const char *VAR_7, struct commit_list *VAR_8)
{
 struct argv_array VAR_9 = VAR_0;
 int VAR_10, VAR_11;
 struct commit_list *VAR_12;

 FUNC_3(&VAR_9, "merge-%s", VAR_3);
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
  FUNC_3(&VAR_9, "--%s", VAR_5[VAR_10]);
 for (VAR_12 = VAR_6; VAR_12; VAR_12 = VAR_12->next)
  FUNC_2(&VAR_9, FUNC_6(VAR_12->item));
 FUNC_2(&VAR_9, "--");
 FUNC_2(&VAR_9, VAR_7);
 for (VAR_12 = VAR_8; VAR_12; VAR_12 = VAR_12->next)
  FUNC_2(&VAR_9, FUNC_6(VAR_12->item));

 VAR_11 = FUNC_9(VAR_9.argv, VAR_1);
 FUNC_1(&VAR_9);

 FUNC_5(VAR_2->index);
 if (FUNC_7(VAR_2) < 0)
  FUNC_4(FUNC_0("failed to read the cache"));
 FUNC_8(VAR_2->index);

 return VAR_11;
}
