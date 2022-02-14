
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_umad_device {int kobj; int * port; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct ib_device*,int) ;
 int FUNC_3 (struct ib_device*) ;
 int FUNC_4 (struct ib_device*) ;

__attribute__((used)) static void FUNC_5(struct ib_device *VAR_0, void *VAR_1)
{
 struct ib_umad_device *VAR_2 = VAR_1;
 int VAR_3;

 if (!VAR_2)
  return;

 for (VAR_3 = 0; VAR_3 <= FUNC_3(VAR_0) - FUNC_4(VAR_0); ++VAR_3) {
  if (FUNC_2(VAR_0, VAR_3 + FUNC_4(VAR_0)))
   FUNC_0(&VAR_2->port[VAR_3]);
 }

 FUNC_1(&VAR_2->kobj);
}
