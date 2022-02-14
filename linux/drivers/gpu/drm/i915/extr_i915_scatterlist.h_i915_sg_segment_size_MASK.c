
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 () ;

__attribute__((used)) static inline unsigned int FUNC_2(void)
{
 unsigned int VAR_2 = FUNC_1();

 if (VAR_2 == 0)
  return VAR_1;

 VAR_2 = FUNC_0(VAR_2, VAR_0);

 if (VAR_2 < VAR_0)
  VAR_2 = VAR_0;

 return VAR_2;
}
