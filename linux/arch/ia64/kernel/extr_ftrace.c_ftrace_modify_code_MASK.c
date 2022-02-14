
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long,int) ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned char*,int) ;
 scalar_t__ FUNC_2 (unsigned char*,void*,int) ;
 scalar_t__ FUNC_3 (void*,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_4(unsigned long VAR_4, unsigned char *VAR_5,
     unsigned char *VAR_6, int VAR_7)
{
 unsigned char VAR_8[VAR_3];
 if (!VAR_7)
  goto skip_check;


 if (FUNC_2(VAR_8, (void *)VAR_4, VAR_3))
  return -VAR_0;


 if (FUNC_1(VAR_8, VAR_5, VAR_3) != 0)
  return -VAR_1;

skip_check:

 if (FUNC_3(((void *)VAR_4), VAR_6, VAR_3))
  return -VAR_2;
 FUNC_0(VAR_4, VAR_4 + VAR_3);

 return 0;
}
