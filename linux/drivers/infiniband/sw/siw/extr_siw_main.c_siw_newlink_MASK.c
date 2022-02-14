
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siw_device {int base_dev; int state; } ;
struct net_device {int dev; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 struct ib_device* FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct ib_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 struct siw_device* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct siw_device*,char const*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_6, struct net_device *VAR_7)
{
 struct ib_device *VAR_8;
 struct siw_device *VAR_9 = ((void*)0);
 int VAR_10 = -VAR_2;

 if (!FUNC_6(VAR_7))
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_7, VAR_5);
 if (VAR_8) {
  FUNC_3(VAR_8);
  return -VAR_0;
 }
 VAR_9 = FUNC_7(VAR_7);
 if (VAR_9) {
  FUNC_0(&VAR_7->dev, "siw: new device\n");

  if (FUNC_5(VAR_7) && FUNC_4(VAR_7))
   VAR_9->state = VAR_3;
  else
   VAR_9->state = VAR_4;

  VAR_10 = FUNC_8(VAR_9, VAR_6);
  if (VAR_10)
   FUNC_1(&VAR_9->base_dev);
 }
 return VAR_10;
}
