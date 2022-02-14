
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char**,char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static char *
FUNC_2(uint32_t VAR_0)
{
 char *VAR_1;
 unsigned VAR_2, VAR_3, VAR_4;

 VAR_2 = (VAR_0 & 0xf00) >> 8;
 VAR_3 = (VAR_0 & 0xf0) >> 4;
 VAR_4 = VAR_0 & 0xf;
 if (VAR_2 == 0x06 || VAR_2 == 0x0f)
  VAR_3 += (VAR_0 & 0xf0000) >> 12;
 if (VAR_2 == 0x0f)
  VAR_2 += (VAR_0 & 0xff00000) >> 20;
 FUNC_0(&VAR_1, "%02x-%02x-%02x", VAR_2, VAR_3, VAR_4);
 if (VAR_1 == ((void*)0))
  FUNC_1(1, "asprintf");
 return (VAR_1);
}
