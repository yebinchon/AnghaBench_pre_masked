
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int writes_pending; scalar_t__ ro; scalar_t__ in_sync; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mddev *VAR_1, struct bio *VAR_2)
{
 if (FUNC_1(VAR_2) != VAR_0)
  return;
 FUNC_0(VAR_1->in_sync || VAR_1->ro);
 FUNC_2(&VAR_1->writes_pending);
}
