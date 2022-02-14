
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_bundle {struct gb_bundle* cport_desc; struct gb_bundle* state; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct gb_bundle*) ;
 struct gb_bundle* FUNC_1 (struct device*) ;
 int FUNC_2 (struct gb_bundle*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct gb_bundle *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1);

 FUNC_0(VAR_1->state);
 FUNC_0(VAR_1->cport_desc);
 FUNC_0(VAR_1);
}
