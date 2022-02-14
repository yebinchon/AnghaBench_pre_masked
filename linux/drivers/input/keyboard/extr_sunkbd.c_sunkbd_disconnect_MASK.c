
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunkbd {int dev; } ;
struct serio {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sunkbd*) ;
 int FUNC_2 (struct serio*) ;
 struct sunkbd* FUNC_3 (struct serio*) ;
 int FUNC_4 (struct serio*,int *) ;
 int FUNC_5 (struct sunkbd*,int) ;

__attribute__((used)) static void FUNC_6(struct serio *VAR_0)
{
 struct sunkbd *VAR_1 = FUNC_3(VAR_0);

 FUNC_5(VAR_1, 0);
 FUNC_0(VAR_1->dev);
 FUNC_2(VAR_0);
 FUNC_4(VAR_0, ((void*)0));
 FUNC_1(VAR_1);
}
