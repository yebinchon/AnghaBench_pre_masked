
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_syncpt {int dummy; } ;
struct host1x {struct host1x_syncpt* syncpt; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct host1x*,struct host1x_syncpt*) ;
 int FUNC_2 (struct host1x*,struct host1x_syncpt*) ;
 scalar_t__ FUNC_3 (struct host1x_syncpt*) ;
 int FUNC_4 (struct host1x_syncpt*) ;
 unsigned int FUNC_5 (struct host1x*) ;
 unsigned int FUNC_6 (struct host1x*) ;

void FUNC_7(struct host1x *VAR_0)
{
 struct host1x_syncpt *VAR_1 = VAR_0->syncpt;
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_6(VAR_0); VAR_2++) {
  if (FUNC_3(VAR_1 + VAR_2))
   FUNC_1(VAR_0, VAR_1 + VAR_2);
  else
   FUNC_0(!FUNC_4(VAR_1 + VAR_2));
 }

 for (VAR_2 = 0; VAR_2 < FUNC_5(VAR_0); VAR_2++)
  FUNC_2(VAR_0, VAR_1 + VAR_2);
}
