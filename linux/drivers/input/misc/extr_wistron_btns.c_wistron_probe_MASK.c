
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 () ;
 int VAR_6 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_7)
{
 int VAR_8;

 FUNC_0();
 VAR_3 = FUNC_2();

 if (VAR_5) {
  u16 VAR_9 = FUNC_3(VAR_1);
  if (VAR_9 & 1)
   VAR_6 = VAR_9 & 2;
  else
   VAR_5 = 0;

  if (VAR_5)
   FUNC_4(VAR_1, VAR_6);
 }

 if (VAR_4) {
  u16 VAR_10 = FUNC_3(VAR_0);
  if (VAR_10 & 1)
   VAR_2 = VAR_10 & 2;
  else
   VAR_4 = 0;

  if (VAR_4)
   FUNC_4(VAR_0, VAR_2);
 }

 FUNC_6(&VAR_7->dev);

 VAR_8 = FUNC_5();
 if (VAR_8) {
  FUNC_1();
  return VAR_8;
 }

 return 0;
}
