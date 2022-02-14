
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* event_handler ) (TYPE_1__*) ;} ;
struct sh_mtu2_channel {TYPE_1__ ced; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sh_mtu2_channel*,int ) ;
 int FUNC_1 (struct sh_mtu2_channel*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct sh_mtu2_channel *VAR_5 = VAR_4;


 FUNC_0(VAR_5, VAR_1);
 FUNC_1(VAR_5, VAR_1, ~VAR_2);


 VAR_5->ced.event_handler(&VAR_5->ced);
 return VAR_0;
}
