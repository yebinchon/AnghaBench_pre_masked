
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad7606_state {TYPE_1__* bops; } ;
struct TYPE_2__ {int (* reg_read ) (struct ad7606_state*,unsigned int) ;int (* reg_write ) (struct ad7606_state*,unsigned int,int) ;} ;


 int FUNC_0 (struct ad7606_state*,unsigned int) ;
 int FUNC_1 (struct ad7606_state*,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct ad7606_state *VAR_0,
     unsigned int VAR_1,
     unsigned long VAR_2,
     unsigned int VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_0->bops->reg_read(VAR_0, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 &= ~VAR_2;
 VAR_4 |= VAR_3;

 return VAR_0->bops->reg_write(VAR_0, VAR_1, VAR_4);
}
