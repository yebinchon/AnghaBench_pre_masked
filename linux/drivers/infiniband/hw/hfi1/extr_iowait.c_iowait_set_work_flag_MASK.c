
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iowait_work {TYPE_1__* iow; } ;
struct TYPE_2__ {struct iowait_work* wait; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1(struct iowait_work *VAR_4)
{
 if (VAR_4 == &VAR_4->iow->wait[VAR_0]) {
  FUNC_0(VAR_4->iow, VAR_1);
  return VAR_0;
 }
 FUNC_0(VAR_4->iow, VAR_2);
 return VAR_3;
}
