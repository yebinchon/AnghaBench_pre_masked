
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct fetch_negotiator {int data; int * add_tip; int * known_common; } ;


 struct object_id const* FUNC_0 (int ) ;

__attribute__((used)) static const struct object_id *FUNC_1(struct fetch_negotiator *VAR_0)
{
 VAR_0->known_common = ((void*)0);
 VAR_0->add_tip = ((void*)0);
 return FUNC_0(VAR_0->data);
}
