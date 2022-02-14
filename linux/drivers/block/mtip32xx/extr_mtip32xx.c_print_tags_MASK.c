
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tagmap ;
struct driver_data {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,char*,unsigned char*) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_2 (unsigned char*,char*,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct driver_data *VAR_1,
   char *VAR_2,
   unsigned long *VAR_3,
   int VAR_4)
{
 unsigned char VAR_5[128];
 int VAR_6, VAR_7 = 0;

 FUNC_1(VAR_5, 0, sizeof(VAR_5));
 for (VAR_6 = VAR_0; VAR_6 > 0; VAR_6--)
  VAR_7 += FUNC_2(VAR_5 + VAR_7, "%016lX ",
      VAR_3[VAR_6-1]);
 FUNC_0(&VAR_1->pdev->dev,
   "%d command(s) %s: tagmap [%s]", VAR_4, VAR_2, VAR_5);
}
