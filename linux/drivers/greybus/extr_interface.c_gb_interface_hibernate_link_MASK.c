
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_svc {int dummy; } ;
struct gb_interface {int interface_id; TYPE_1__* hd; } ;
struct TYPE_2__ {struct gb_svc* svc; } ;


 int FUNC_0 (struct gb_svc*,int ) ;

__attribute__((used)) static int FUNC_1(struct gb_interface *VAR_0)
{
 struct gb_svc *VAR_1 = VAR_0->hd->svc;

 return FUNC_0(VAR_1, VAR_0->interface_id);
}
