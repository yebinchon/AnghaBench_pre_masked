
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int state; } ;
struct TYPE_3__ {TYPE_2__ status_cmd_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(int *VAR_2, int *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0,
     &VAR_1->status_cmd_buf, VAR_3);
 if (VAR_4)
  return VAR_4;

 *VAR_2 = VAR_1->status_cmd_buf.state;
 return VAR_4;
}
