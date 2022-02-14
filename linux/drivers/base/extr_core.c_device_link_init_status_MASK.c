
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_link {void* status; } ;
struct TYPE_2__ {int status; } ;
struct device {TYPE_1__ links; } ;





 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;

__attribute__((used)) static void FUNC_0(struct device_link *VAR_5,
        struct device *VAR_6,
        struct device *VAR_7)
{
 switch (VAR_7->links.status) {
 case 129:
  switch (VAR_6->links.status) {
  case 129:







   VAR_5->status = VAR_2;
   break;
  default:
   VAR_5->status = VAR_3;
   break;
  }
  break;
 case 130:
  switch (VAR_6->links.status) {
  case 129:
   VAR_5->status = VAR_2;
   break;
  case 130:
   VAR_5->status = VAR_0;
   break;
  default:
   VAR_5->status = VAR_1;
   break;
  }
  break;
 case 128:
  VAR_5->status = VAR_4;
  break;
 default:
  VAR_5->status = VAR_3;
  break;
 }
}
