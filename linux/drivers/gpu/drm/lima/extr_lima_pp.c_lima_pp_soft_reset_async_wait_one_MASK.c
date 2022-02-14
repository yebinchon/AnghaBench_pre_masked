
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
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct lima_ip*) ;
 int FUNC_2 (struct lima_ip*,int ,int ,int) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct lima_ip *VAR_5)
{
 struct lima_device *VAR_6 = VAR_5->dev;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5, VAR_4, 0, 100);
 if (VAR_7) {
  FUNC_0(VAR_6->dev, "pp %s reset time out\n", FUNC_1(VAR_5));
  return VAR_7;
 }

 FUNC_3(VAR_0, VAR_2);
 FUNC_3(VAR_1, VAR_3);
 return 0;
}
