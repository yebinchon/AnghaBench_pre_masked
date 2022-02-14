
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char*,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(bool VAR_1, unsigned char *VAR_2)
{

 unsigned char VAR_3, VAR_4;




 FUNC_1();






 VAR_3 = VAR_4 = 0xf0;
 if (FUNC_0(&VAR_3, VAR_0) || VAR_3 != VAR_4)
  return -1;
 VAR_3 = VAR_4 = VAR_1 ? 0x56 : 0xf6;
 if (FUNC_0(&VAR_3, VAR_0) || VAR_3 != VAR_4)
  return -1;
 VAR_3 = VAR_4 = VAR_1 ? 0xa4 : 0xa5;
 if (FUNC_0(&VAR_3, VAR_0) || VAR_3 == VAR_4)
  return -1;





 if (VAR_3 == 0xac)
  return -1;

 if (VAR_2)
  *VAR_2 = VAR_3;

 return 0;
}
