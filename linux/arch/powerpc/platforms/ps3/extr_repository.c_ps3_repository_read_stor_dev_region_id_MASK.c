
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,unsigned int*,int *) ;

int FUNC_3(unsigned int VAR_1,
 unsigned int VAR_2, unsigned int VAR_3,
 unsigned int *VAR_4)
{
 int VAR_5;
 u64 VAR_6 = 0;

 VAR_5 = FUNC_2(VAR_0,
     FUNC_1("bus", VAR_1),
     FUNC_0("dev", VAR_2),
     FUNC_0("region", VAR_3),
     FUNC_0("id", 0),
     &VAR_6, ((void*)0));
 *VAR_4 = VAR_6;
 return VAR_5;
}
