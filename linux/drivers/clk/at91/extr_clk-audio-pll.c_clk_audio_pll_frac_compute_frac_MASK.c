
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long FUNC_0 (unsigned long long,unsigned long) ;
 int VAR_3 ;
 unsigned long long FUNC_1 (unsigned long long,unsigned long) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_4,
        unsigned long VAR_5,
        unsigned long *VAR_6,
        unsigned long *VAR_7)
{
 unsigned long long VAR_8, VAR_9;

 if (!VAR_4)
  return -VAR_3;

 VAR_8 = VAR_4;
 VAR_9 = FUNC_1(VAR_8, VAR_5);
 if (!VAR_8 || VAR_8 >= VAR_2)
  return -VAR_3;

 *VAR_6 = VAR_8 - 1;

 VAR_8 = VAR_9 * VAR_1;
 VAR_8 = FUNC_0(VAR_8, VAR_5);
 if (VAR_8 > VAR_0)
  return -VAR_3;


 *VAR_7 = (unsigned long)VAR_8;

 return 0;
}
