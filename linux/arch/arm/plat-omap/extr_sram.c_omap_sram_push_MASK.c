
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (void*,void*,unsigned long) ;
 void* FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long,int) ;
 int FUNC_4 (unsigned long,int) ;
 int FUNC_5 (unsigned long,int) ;

void *FUNC_6(void *VAR_2, unsigned long VAR_3)
{
 void *VAR_4;
 unsigned long VAR_5;
 int VAR_6;
 void *VAR_7 = ((void*)0);

 VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = (unsigned long)VAR_4 & VAR_0;
 VAR_6 = FUNC_0(VAR_3) / VAR_1;

 FUNC_4(VAR_5, VAR_6);

 VAR_7 = FUNC_1(VAR_4, VAR_2, VAR_3);

 FUNC_3(VAR_5, VAR_6);
 FUNC_5(VAR_5, VAR_6);

 return VAR_7;
}
