
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ib_pd*) ;

__attribute__((used)) static void FUNC_3(struct ib_pd *VAR_0, struct ib_udata *VAR_1)
{
 FUNC_0(FUNC_1(VAR_0->device), FUNC_2(VAR_0));
}
