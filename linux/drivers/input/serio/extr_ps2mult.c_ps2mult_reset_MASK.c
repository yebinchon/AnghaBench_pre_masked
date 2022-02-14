
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2mult {int lock; int * ports; int mx_serio; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ps2mult*,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct ps2mult *VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(&VAR_3->lock, VAR_4);

 FUNC_1(VAR_3->mx_serio, VAR_1);
 FUNC_1(VAR_3->mx_serio, VAR_2);

 FUNC_0(VAR_3, &VAR_3->ports[VAR_0]);

 FUNC_3(&VAR_3->lock, VAR_4);
}
