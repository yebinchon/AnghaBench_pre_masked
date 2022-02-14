
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_entry {struct blame_entry* next; int suspect; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct blame_entry*,struct blame_entry*,int) ;

__attribute__((used)) static void FUNC_3(struct blame_entry ***VAR_0,
        struct blame_entry *VAR_1, struct blame_entry *VAR_2)
{
 FUNC_1(VAR_2->suspect);
 FUNC_0(VAR_1->suspect);
 FUNC_2(VAR_1, VAR_2, sizeof(*VAR_2));
 VAR_1->next = **VAR_0;
 **VAR_0 = VAR_1;
 *VAR_0 = &VAR_1->next;
}
