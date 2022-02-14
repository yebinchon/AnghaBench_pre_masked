
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 struct page* FUNC_3 (unsigned long) ;

void FUNC_4(unsigned long *VAR_0)
{
 struct page *VAR_1;
 unsigned long VAR_2;
 unsigned char VAR_3;

 VAR_1 = FUNC_3(*VAR_0);
 VAR_2 = (unsigned long) FUNC_1(VAR_1);
 VAR_3 = (unsigned char) FUNC_2(VAR_2) & 0x7f;
 if (FUNC_0(VAR_1))
  VAR_3 |= 0x80;
 *(unsigned char *) VAR_0 = VAR_3;
}
