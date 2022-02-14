
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lima_ip {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,char*,int,int) ;
 int FUNC_1 (struct lima_ip*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct lima_ip *VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4;
 char *VAR_5;

 VAR_2 = FUNC_2(VAR_0);
 VAR_3 = (VAR_2 >> 8) & 0xFF;
 VAR_4 = VAR_2 & 0xFF;
 switch (VAR_2 >> 16) {
 case 0xC807:
     VAR_5 = "mali200";
  break;
 case 0xCE07:
  VAR_5 = "mali300";
  break;
 case 0xCD07:
  VAR_5 = "mali400";
  break;
 case 0xCF07:
  VAR_5 = "mali450";
  break;
 default:
  VAR_5 = "unknown";
  break;
 }
 FUNC_0(VAR_1->dev->dev, "%s - %s version major %d minor %d\n",
   FUNC_1(VAR_1), VAR_5, VAR_3, VAR_4);
}
