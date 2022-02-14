
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct dvb_device {size_t type; int id; TYPE_1__* adapter; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int num; } ;


 int VAR_0 ;
 struct dvb_device* FUNC_0 (struct device*) ;
 int * VAR_1 ;
 char* FUNC_1 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static char *FUNC_2(struct device *VAR_2, umode_t *VAR_3)
{
 struct dvb_device *VAR_4 = FUNC_0(VAR_2);

 return FUNC_1(VAR_0, "dvb/adapter%d/%s%d",
  VAR_4->adapter->num, VAR_1[VAR_4->type], VAR_4->id);
}
