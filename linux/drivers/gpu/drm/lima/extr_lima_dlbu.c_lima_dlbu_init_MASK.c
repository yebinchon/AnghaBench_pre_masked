
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_ip {struct lima_device* dev; } ;
struct lima_device {int dlbu_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;

int FUNC_1(struct lima_ip *VAR_3)
{
 struct lima_device *VAR_4 = VAR_3->dev;

 FUNC_0(VAR_0, VAR_4->dlbu_dma | 1);
 FUNC_0(VAR_1, VAR_2);

 return 0;
}
