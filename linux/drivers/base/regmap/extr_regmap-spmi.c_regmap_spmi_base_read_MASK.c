
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,int ,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_0,
     const void *VAR_1, size_t VAR_2,
     void *VAR_3, size_t VAR_4)
{
 u8 VAR_5 = *(u8 *)VAR_1;
 int VAR_6 = 0;

 FUNC_0(VAR_2 != 1);

 while (VAR_4-- && !VAR_6)
  VAR_6 = FUNC_1(VAR_0, VAR_5++, VAR_3++);

 return VAR_6;
}
