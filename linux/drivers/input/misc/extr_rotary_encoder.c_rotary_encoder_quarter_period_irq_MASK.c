
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rotary_encoder {int last_stable; int dir; int access_mutex; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (struct rotary_encoder*) ;
 int FUNC_3 (struct rotary_encoder*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct rotary_encoder *VAR_3 = VAR_2;
 unsigned int VAR_4;

 FUNC_0(&VAR_3->access_mutex);

 VAR_4 = FUNC_2(VAR_3);

 if ((VAR_3->last_stable + 1) % 4 == VAR_4)
  VAR_3->dir = 1;
 else if (VAR_3->last_stable == (VAR_4 + 1) % 4)
  VAR_3->dir = -1;
 else
  goto out;

 FUNC_3(VAR_3);

out:
 VAR_3->last_stable = VAR_4;
 FUNC_1(&VAR_3->access_mutex);

 return VAR_0;
}
