
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct commit {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct commit*,int ) ;
 int FUNC_1 (int,struct commit**,int ) ;
 int FUNC_2 (struct commit_list*) ;
 int FUNC_3 (struct commit*,struct commit_list**) ;
 int FUNC_4 (struct commit**) ;
 int FUNC_5 (struct commit_list*) ;
 struct commit_list* FUNC_6 (struct repository*,struct commit*,int,struct commit**) ;
 int FUNC_7 (struct repository*,struct commit**,int) ;
 struct commit** FUNC_8 (int,int) ;

__attribute__((used)) static struct commit_list *FUNC_9(struct repository *VAR_1,
        struct commit *VAR_2,
        int VAR_3,
        struct commit **VAR_4,
        int VAR_5)
{
 struct commit_list *VAR_6;
 struct commit **VAR_7;
 struct commit_list *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4);
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if (VAR_2 == VAR_4[VAR_10])
   return VAR_8;
 }
 if (!VAR_8 || !VAR_8->next) {
  if (VAR_5) {
   FUNC_0(VAR_2, VAR_0);
   FUNC_1(VAR_3, VAR_4, VAR_0);
  }
  return VAR_8;
 }


 VAR_9 = FUNC_2(VAR_8);
 VAR_7 = FUNC_8(VAR_9, sizeof(*VAR_7));
 for (VAR_6 = VAR_8, VAR_10 = 0; VAR_6; VAR_6 = VAR_6->next)
  VAR_7[VAR_10++] = VAR_6->item;
 FUNC_5(VAR_8);

 FUNC_0(VAR_2, VAR_0);
 FUNC_1(VAR_3, VAR_4, VAR_0);

 VAR_9 = FUNC_7(VAR_1, VAR_7, VAR_9);
 VAR_8 = ((void*)0);
 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
  FUNC_3(VAR_7[VAR_10], &VAR_8);
 FUNC_4(VAR_7);
 return VAR_8;
}
