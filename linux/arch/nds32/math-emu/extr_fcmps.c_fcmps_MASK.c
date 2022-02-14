
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (long,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void*) ;
 long VAR_3 ;
 int VAR_4 ;

int FUNC_3(void *VAR_5, void *VAR_6, void *VAR_7, int VAR_8)
{
 FUNC_1(VAR_0);
 FUNC_1(VAR_1);
 VAR_2;
 long VAR_9;

 FUNC_2(VAR_0, VAR_6);
 FUNC_2(VAR_1, VAR_7);

 FUNC_0(VAR_9, VAR_0, VAR_1, VAR_4);
 VAR_9 += 2;
 if (VAR_9 == VAR_3)
  *(int *)VAR_5 = 0x0;
 else
  *(int *)VAR_5 = (VAR_9 & VAR_8) ? 0x1 : 0x0;

 return 0;
}
