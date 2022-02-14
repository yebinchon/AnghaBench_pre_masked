
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (struct ib_device*,int) ;
 scalar_t__ FUNC_2 (struct ib_device*,int) ;
 int FUNC_3 (struct ib_device*,int) ;
 int FUNC_4 (struct ib_device*) ;
 int FUNC_5 (struct ib_device*) ;

__attribute__((used)) static void FUNC_6(struct ib_device *VAR_0, void *VAR_1)
{
 int VAR_2;

 for (VAR_2 = FUNC_5(VAR_0); VAR_2 <= FUNC_4(VAR_0); VAR_2++) {
  if (!FUNC_3(VAR_0, VAR_2))
   continue;

  if (FUNC_1(VAR_0, VAR_2))
   FUNC_0(&VAR_0->dev,
    "Couldn't close port %d for agents\n", VAR_2);
  if (FUNC_2(VAR_0, VAR_2))
   FUNC_0(&VAR_0->dev, "Couldn't close port %d\n", VAR_2);
 }
}
