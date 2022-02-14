
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct panfrost_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct panfrost_device*,int ,int ) ;

void FUNC_2(struct panfrost_device *VAR_3)
{
 int VAR_4;
 u32 VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 |= FUNC_0(VAR_4);
 }

 FUNC_1(VAR_3, VAR_0, VAR_5);
 FUNC_1(VAR_3, VAR_1, VAR_5);
}
