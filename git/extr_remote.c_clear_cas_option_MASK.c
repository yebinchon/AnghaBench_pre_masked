
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct push_cas_option {int nr; TYPE_1__* entry; } ;
struct TYPE_2__ {struct TYPE_2__* refname; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct push_cas_option*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct push_cas_option *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr; VAR_1++)
  FUNC_0(VAR_0->entry[VAR_1].refname);
 FUNC_0(VAR_0->entry);
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
}
