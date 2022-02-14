
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iconv_t ;


 int FUNC_0 (char const*) ;
 unsigned int FUNC_1 (char const*) ;

iconv_t FUNC_2(const char *VAR_0, const char *VAR_1)
{
 unsigned VAR_2, VAR_3;
 int VAR_4;

 if ((VAR_3 = FUNC_1(VAR_0)) > 8)
  return -1;

 if ((VAR_2 = FUNC_1(VAR_1)) < 255)
  return 0 | (VAR_3<<1) | (VAR_2<<8);

 if ((VAR_4 = FUNC_0(VAR_1)) > -1)
  return 1 | (VAR_3<<1) | (VAR_4<<8);

 return -1;
}
