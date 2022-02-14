
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7124_state {int sd; } ;


 int FUNC_0 (int *,unsigned int,unsigned int,unsigned int*) ;
 int FUNC_1 (int *,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct ad7124_state *VAR_0,
     unsigned int VAR_1,
     unsigned long VAR_2,
     unsigned int VAR_3,
     unsigned int VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(&VAR_0->sd, VAR_1, VAR_4, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_3;

 return FUNC_1(&VAR_0->sd, VAR_1, VAR_4, VAR_5);
}
