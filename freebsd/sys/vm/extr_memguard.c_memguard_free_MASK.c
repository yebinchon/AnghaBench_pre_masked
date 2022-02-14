
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int u_long ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (uintptr_t) ;
 int* FUNC_3 (int ) ;
 int* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;

void
FUNC_6(void *VAR_4)
{
 vm_offset_t VAR_5;
 u_long VAR_6, VAR_7, VAR_8;
 char *VAR_9;
 int VAR_10;

 VAR_5 = FUNC_2((uintptr_t)VAR_4);
 VAR_6 = *FUNC_3(VAR_5);
 VAR_8 = *FUNC_4(VAR_5);
 VAR_7 = FUNC_1(VAR_6);
 VAR_9 = VAR_4;
 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10 += VAR_0)
  VAR_9[VAR_10] = 'M';
 FUNC_0(VAR_1, VAR_5, VAR_7);
 if (VAR_8 > VAR_7)
  VAR_5 -= VAR_0;
 FUNC_5(VAR_2, VAR_5, VAR_8);
 if (VAR_6 < VAR_0)
  VAR_3 -= (VAR_0 - VAR_6);
}
