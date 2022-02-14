
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct gb_interface {int interface_id; TYPE_1__* hd; } ;
struct TYPE_2__ {int svc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct gb_interface *VAR_1,
         u16 VAR_2, u32 *VAR_3)
{
 return FUNC_0(VAR_1->hd->svc, VAR_1->interface_id,
     VAR_2, VAR_0, VAR_3);
}
