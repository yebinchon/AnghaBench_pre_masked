
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int *,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int * VAR_2 ;
 int FUNC_3 (char*,int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_4(int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6;

 if (VAR_3 >= VAR_1)
  return ~0;

 VAR_5 = FUNC_1(&VAR_2[VAR_3]);
 do {
  VAR_6 = VAR_5 & ~VAR_0;
  if (VAR_6 && !FUNC_2(VAR_6, VAR_4))

   return VAR_5;
  VAR_5 = FUNC_0(&VAR_2[VAR_3], VAR_5, VAR_4);
 } while (VAR_5 != VAR_4);

 VAR_5 &= ~VAR_0;
 if (VAR_5 && VAR_5 != VAR_6)
  FUNC_3("LVT offset %d assigned for vector 0x%02x\n",
   VAR_3, VAR_5);

 return VAR_4;
}
