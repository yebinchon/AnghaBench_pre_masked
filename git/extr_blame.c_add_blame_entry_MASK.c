
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_entry {struct blame_entry* next; int suspect; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct blame_entry*,struct blame_entry const*,int) ;
 struct blame_entry* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct blame_entry ***VAR_0,
       const struct blame_entry *VAR_1)
{
 struct blame_entry *VAR_2 = FUNC_2(sizeof(*VAR_2));
 FUNC_1(VAR_2, VAR_1, sizeof(*VAR_2));
 FUNC_0(VAR_2->suspect);

 VAR_2->next = **VAR_0;
 **VAR_0 = VAR_2;
 *VAR_0 = &VAR_2->next;
}
