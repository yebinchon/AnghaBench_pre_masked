
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,unsigned char,void*) ;
 int FUNC_1 (int ,unsigned char,void*) ;

__attribute__((used)) static unsigned char *
FUNC_2 (unsigned char *VAR_1, unsigned char VAR_2, void *VAR_3)
{
  int VAR_4 = (VAR_2 & 0x10) != 0;
  unsigned char VAR_5 = (VAR_2 & 0x0f);

  if (VAR_4)
    FUNC_1(VAR_0, VAR_5, VAR_3);
  else
    FUNC_0(VAR_0, VAR_5, VAR_3);
  return VAR_1;
}
