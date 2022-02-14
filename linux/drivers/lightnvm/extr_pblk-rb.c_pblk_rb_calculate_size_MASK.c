
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static unsigned int FUNC_2(unsigned int VAR_1,
        unsigned int VAR_2)
{
 unsigned int VAR_3 = 1 << (FUNC_0(VAR_2 + VAR_0));
 unsigned int VAR_4 = FUNC_1(VAR_3, VAR_1);
 unsigned int VAR_5;





 VAR_5 = (1 << FUNC_1((int)(FUNC_0(VAR_4)),
    (int)(FUNC_0(VAR_0 << 1))));
 if ((VAR_2 + VAR_0) >= VAR_5)
  VAR_5 <<= 1;

 return VAR_5;
}
