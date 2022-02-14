
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ percpu_count_ptr; } ;
struct mddev {TYPE_1__ writes_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(struct mddev *VAR_4)
{
 if (VAR_4->writes_pending.percpu_count_ptr)
  return 0;
 if (FUNC_0(&VAR_4->writes_pending, VAR_3,
       VAR_2, VAR_1) < 0)
  return -VAR_0;

 FUNC_1(&VAR_4->writes_pending);
 return 0;
}
