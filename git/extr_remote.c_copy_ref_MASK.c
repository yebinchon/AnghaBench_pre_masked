
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {struct ref* peer_ref; void* remote_status; void* symref; int * next; int name; } ;


 int FUNC_0 (struct ref*,struct ref const*,size_t) ;
 size_t FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ) ;
 struct ref* FUNC_3 (size_t) ;
 void* FUNC_4 (void*) ;

struct ref *FUNC_5(const struct ref *VAR_0)
{
 struct ref *VAR_1;
 size_t VAR_2;
 if (!VAR_0)
  return ((void*)0);
 VAR_2 = FUNC_1(sizeof(struct ref), FUNC_2(VAR_0->name), 1);
 VAR_1 = FUNC_3(VAR_2);
 FUNC_0(VAR_1, VAR_0, VAR_2);
 VAR_1->next = ((void*)0);
 VAR_1->symref = FUNC_4(VAR_0->symref);
 VAR_1->remote_status = FUNC_4(VAR_0->remote_status);
 VAR_1->peer_ref = FUNC_5(VAR_0->peer_ref);
 return VAR_1;
}
