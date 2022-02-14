
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;
struct atkbd {int ps2dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct atkbd*) ;
 int FUNC_1 (int *,int *,int ) ;
 struct atkbd* FUNC_2 (struct serio*) ;

__attribute__((used)) static void FUNC_3(struct serio *VAR_1)
{
 struct atkbd *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2);
 FUNC_1(&VAR_2->ps2dev, ((void*)0), VAR_0);
}
