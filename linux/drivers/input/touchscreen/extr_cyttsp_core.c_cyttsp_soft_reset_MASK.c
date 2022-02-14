
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyttsp {int irq; int state; int bl_ready; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cyttsp*,int ) ;
 unsigned long FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct cyttsp *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;


 FUNC_3(&VAR_6->bl_ready);
 VAR_6->state = VAR_0;

 FUNC_1(VAR_6->irq);

 VAR_8 = FUNC_4(VAR_6, VAR_4);
 if (VAR_8)
  goto out;

 VAR_7 = FUNC_5(&VAR_6->bl_ready,
   FUNC_2(VAR_1 * VAR_2));
 VAR_8 = VAR_7 ? 0 : -VAR_5;

out:
 VAR_6->state = VAR_3;
 FUNC_0(VAR_6->irq);
 return VAR_8;
}
