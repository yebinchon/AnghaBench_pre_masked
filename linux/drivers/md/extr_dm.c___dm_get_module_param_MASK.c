
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int*,unsigned int,unsigned int) ;

unsigned FUNC_2(unsigned *VAR_0,
          unsigned VAR_1, unsigned VAR_2)
{
 unsigned VAR_3 = FUNC_0(*VAR_0);
 unsigned VAR_4 = 0;

 if (!VAR_3)
  VAR_4 = VAR_1;
 else if (VAR_3 > VAR_2)
  VAR_4 = VAR_2;

 if (VAR_4) {
  (void)FUNC_1(VAR_0, VAR_3, VAR_4);
  VAR_3 = VAR_4;
 }

 return VAR_3;
}
