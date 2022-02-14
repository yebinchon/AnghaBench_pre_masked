
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (char*) ;

u8 *FUNC_4(u64 VAR_2)
{
 u8 *VAR_3;

 VAR_3 = (u8 *)FUNC_0((VAR_1 | VAR_0),
     FUNC_1(VAR_2));

 if (!VAR_3)
  return ((void*)0);

 FUNC_2(VAR_3, 0, VAR_2);

 FUNC_3("Data buffer allocation success\n");
 return VAR_3;
}
