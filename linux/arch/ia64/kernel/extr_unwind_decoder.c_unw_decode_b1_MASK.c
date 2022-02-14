
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char unw_word ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char,void*) ;
 int FUNC_1 (int ,unsigned char,void*) ;

__attribute__((used)) static unsigned char *
FUNC_2 (unsigned char *VAR_1, unsigned char VAR_2, void *VAR_3)
{
  unw_word VAR_4 = (VAR_2 & 0x1f);

  if ((VAR_2 & 0x20) != 0)
    FUNC_0(VAR_0, VAR_4, VAR_3);
  else
    FUNC_1(VAR_0, VAR_4, VAR_3);
  return VAR_1;
}
