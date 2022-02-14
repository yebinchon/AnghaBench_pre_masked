
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_ip {struct lima_device* dev; } ;
struct lima_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct lima_ip*,int ,int,int) ;
 int VAR_7 ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct lima_ip *VAR_8)
{
 struct lima_device *VAR_9 = VAR_8->dev;
 int VAR_10;

 FUNC_2(VAR_6, 0xC0FFE000);
 FUNC_2(VAR_3, 0);
 FUNC_2(VAR_0, VAR_1);
 VAR_10 = FUNC_1(VAR_8, VAR_7, 10, 100);
 if (VAR_10) {
  FUNC_0(VAR_9->dev, "pp hard reset timeout\n");
  return VAR_10;
 }

 FUNC_2(VAR_6, 0);
 FUNC_2(VAR_2, VAR_4);
 FUNC_2(VAR_3, VAR_5);
 return 0;
}
