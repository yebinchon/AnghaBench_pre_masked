
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct yealink_dev {int * lcdMap; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 struct yealink_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3, char *VAR_4, int VAR_5, int VAR_6)
{
 struct yealink_dev *VAR_7;
 int VAR_8;

 FUNC_1(&VAR_2);
 VAR_7 = FUNC_0(VAR_3);
 if (VAR_7 == ((void*)0)) {
  FUNC_2(&VAR_2);
  return -VAR_0;
 }

 for (VAR_8 = VAR_5; VAR_8 < VAR_6; VAR_8++)
  *VAR_4++ = VAR_1[VAR_8].type;
 *VAR_4++ = '\n';
 for (VAR_8 = VAR_5; VAR_8 < VAR_6; VAR_8++)
  *VAR_4++ = VAR_7->lcdMap[VAR_8];
 *VAR_4++ = '\n';
 *VAR_4 = 0;

 FUNC_2(&VAR_2);
 return 3 + ((VAR_6 - VAR_5) << 1);
}
