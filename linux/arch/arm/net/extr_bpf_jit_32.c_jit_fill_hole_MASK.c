
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, unsigned int VAR_2)
{
 u32 *VAR_3;

 for (VAR_3 = VAR_1; VAR_2 >= sizeof(u32); VAR_2 -= sizeof(u32))
  *VAR_3++ = FUNC_0(VAR_0);
}
