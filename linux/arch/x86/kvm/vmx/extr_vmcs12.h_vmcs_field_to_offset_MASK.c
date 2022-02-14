
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 short VAR_0 ;
 unsigned int FUNC_0 (unsigned long,int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int VAR_1 ;
 unsigned short* VAR_2 ;

__attribute__((used)) static inline short FUNC_2(unsigned long VAR_3)
{
 unsigned short VAR_4;
 unsigned int VAR_5;

 if (VAR_3 >> 15)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_3, 6);
 if (VAR_5 >= VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_5, VAR_1);
 VAR_4 = VAR_2[VAR_5];
 if (VAR_4 == 0)
  return -VAR_0;
 return VAR_4;
}
