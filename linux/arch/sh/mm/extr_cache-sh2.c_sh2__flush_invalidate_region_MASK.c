
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static void FUNC_6(void *VAR_5, int VAR_6)
{
 unsigned long VAR_7;
 unsigned long VAR_8, VAR_9;

 VAR_8 = (unsigned long)VAR_5 & ~(VAR_3-1);
 VAR_9 = ((unsigned long)VAR_5 + VAR_6 + VAR_3-1)
  & ~(VAR_3-1);

 for (VAR_7 = VAR_8; VAR_7 < VAR_9; VAR_7+=VAR_3)
  FUNC_1((VAR_7 & VAR_1),
     VAR_0 | (VAR_7 & 0x00000ff0) | 0x00000008);

}
