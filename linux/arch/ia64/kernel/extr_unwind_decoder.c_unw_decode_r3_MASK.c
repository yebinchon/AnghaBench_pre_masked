
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unw_word ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,void*) ;
 int FUNC_1 (unsigned char**) ;

__attribute__((used)) static unsigned char *
FUNC_2 (unsigned char *VAR_1, unsigned char VAR_2, void *VAR_3)
{
  unw_word VAR_4;

  VAR_4 = FUNC_1 (&VAR_1);
  FUNC_0(VAR_0, ((VAR_2 & 0x3) == 1), VAR_4, VAR_3);
  return VAR_1;
}
