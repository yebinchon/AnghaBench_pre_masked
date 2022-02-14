
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_tcon {TYPE_1__* quirks; int list; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ has_channel_0; } ;


 struct sun4i_tcon* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sun4i_tcon*) ;
 int FUNC_3 (struct sun4i_tcon*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, struct device *VAR_1,
         void *VAR_2)
{
 struct sun4i_tcon *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(&VAR_3->list);
 if (VAR_3->quirks->has_channel_0)
  FUNC_2(VAR_3);
 FUNC_3(VAR_3);
}
