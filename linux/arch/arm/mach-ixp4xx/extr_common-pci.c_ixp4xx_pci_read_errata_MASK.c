
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;


 void** VAR_0 ;
 void** VAR_1 ;
 void** VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(u32 VAR_4, u32 VAR_5, u32* VAR_6)
{
 unsigned long VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 FUNC_1(&VAR_3, VAR_7);

 *VAR_0 = VAR_4;





 for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
  *VAR_1 = VAR_5;
  *VAR_6 = *VAR_2;
  *VAR_6 = *VAR_2;
 }

 if(FUNC_0())
  VAR_8 = 1;

 FUNC_2(&VAR_3, VAR_7);
 return VAR_8;
}
