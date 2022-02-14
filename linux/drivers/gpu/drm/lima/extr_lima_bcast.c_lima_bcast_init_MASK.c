
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lima_ip {TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* ip; } ;
struct TYPE_3__ {scalar_t__ present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_1(struct lima_ip *VAR_4)
{
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = VAR_2; VAR_5 <= VAR_3; VAR_5++) {
  if (VAR_4->dev->ip[VAR_5].present)
   VAR_6 |= 1 << (VAR_5 - VAR_2);
 }

 FUNC_0(VAR_0, VAR_6 << 16);
 FUNC_0(VAR_1, VAR_6);
 return 0;
}
