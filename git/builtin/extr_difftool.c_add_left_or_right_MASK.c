
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pair_entry {char* left; char* right; int entry; } ;
struct hashmap {int dummy; } ;


 int FUNC_0 (struct pair_entry*,char const*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pair_entry*) ;
 int FUNC_2 (struct hashmap*,int *) ;
 int FUNC_3 (int *,int ) ;
 struct pair_entry* FUNC_4 (struct hashmap*,struct pair_entry*,int ,int *) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*,int ) ;

__attribute__((used)) static void FUNC_7(struct hashmap *VAR_2, const char *VAR_3,
         const char *VAR_4, int VAR_5)
{
 struct pair_entry *VAR_6, *VAR_7;

 FUNC_0(VAR_6, VAR_3, VAR_3);
 FUNC_3(&VAR_6->entry, FUNC_5(VAR_3));
 VAR_7 = FUNC_4(VAR_2, VAR_6, VAR_1, ((void*)0));
 if (VAR_7) {
  FUNC_1(VAR_6);
  VAR_6 = VAR_7;
 } else {
  VAR_6->left[0] = VAR_6->right[0] = '\0';
  FUNC_2(VAR_2, &VAR_6->entry);
 }
 FUNC_6(VAR_5 ? VAR_6->right : VAR_6->left, VAR_4, VAR_0);
}
