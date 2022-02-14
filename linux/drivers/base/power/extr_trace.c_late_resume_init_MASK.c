
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(void)
{
 unsigned int VAR_3 = VAR_2;
 unsigned int VAR_4, VAR_5, VAR_6;

 VAR_4 = VAR_3 % VAR_1;
 VAR_3 = VAR_3 / VAR_1;
 VAR_5 = VAR_3 % VAR_0;
 VAR_3 = VAR_3 / VAR_0;
 VAR_6 = VAR_3 ;

 FUNC_0("  Magic number: %d:%d:%d\n", VAR_4, VAR_5, VAR_6);
 FUNC_2(VAR_5);
 FUNC_1(VAR_6);
 return 0;
}
