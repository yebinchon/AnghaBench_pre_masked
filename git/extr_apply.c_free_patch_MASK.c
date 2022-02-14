
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {struct patch* result; struct patch* new_name; struct patch* old_name; struct patch* def_name; int fragments; } ;


 int FUNC_0 (struct patch*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct patch *VAR_0)
{
 FUNC_1(VAR_0->fragments);
 FUNC_0(VAR_0->def_name);
 FUNC_0(VAR_0->old_name);
 FUNC_0(VAR_0->new_name);
 FUNC_0(VAR_0->result);
 FUNC_0(VAR_0);
}
