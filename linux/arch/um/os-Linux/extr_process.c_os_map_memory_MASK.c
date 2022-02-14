
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (void*,unsigned long,int,int,int,unsigned long long) ;

int FUNC_1(void *VAR_7, int VAR_8, unsigned long long VAR_9, unsigned long VAR_10,
    int VAR_11, int VAR_12, int VAR_13)
{
 void *VAR_14;
 int VAR_15;

 VAR_15 = (VAR_11 ? VAR_4 : 0) | (VAR_12 ? VAR_5 : 0) |
  (VAR_13 ? VAR_3 : 0);

 VAR_14 = FUNC_0((void *) VAR_7, VAR_10, VAR_15, VAR_2 | VAR_1,
       VAR_8, VAR_9);
 if (VAR_14 == VAR_0)
  return -VAR_6;
 return 0;
}
