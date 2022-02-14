
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 unsigned long FUNC_1 (int ) ;
 int * VAR_3 ;
 int FUNC_2 (void*,char*,int) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(void)
{
 extern char VAR_4[], VAR_5[];
 int VAR_6 = VAR_5 - VAR_4;
 unsigned long VAR_7;

 VAR_7 = FUNC_1(VAR_1);
 if (!VAR_7)
  return -VAR_0;


 FUNC_2((void *)VAR_7, VAR_4, VAR_6);

 FUNC_0(VAR_7, VAR_7 + VAR_2);
 VAR_3[0] = FUNC_3(VAR_7);

 return 0;
}
