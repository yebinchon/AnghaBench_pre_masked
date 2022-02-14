
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_list {struct pack_list* next; } ;


 int FUNC_0 (struct pack_list*,struct pack_list*,int) ;
 struct pack_list* FUNC_1 (int) ;

__attribute__((used)) static inline struct pack_list * FUNC_2(struct pack_list **VAR_0,
        struct pack_list *VAR_1)
{
 struct pack_list *VAR_2 = FUNC_1(sizeof(struct pack_list));
 FUNC_0(VAR_2, VAR_1, sizeof(struct pack_list));
 VAR_2->next = *VAR_0;
 *VAR_0 = VAR_2;
 return VAR_2;
}
