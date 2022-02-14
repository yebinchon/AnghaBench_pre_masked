
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct microcode_header_intel {int rev; } ;


 int FUNC_0 (void*,unsigned int,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, unsigned int VAR_1, int VAR_2, int VAR_3)
{
 struct microcode_header_intel *VAR_4 = VAR_0;

 if (VAR_4->rev <= VAR_3)
  return 0;

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
