
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ihex_binrec {int dummy; } ;
struct firmware {scalar_t__ data; } ;


 struct ihex_binrec* FUNC_0 (struct ihex_binrec const*) ;

__attribute__((used)) static unsigned int FUNC_1(const struct firmware *VAR_0)
{
 const struct ihex_binrec *VAR_1 = (const struct ihex_binrec *)VAR_0->data;
 unsigned int VAR_2 = 0;

 while (VAR_1) {
  VAR_2++;
  VAR_1 = FUNC_0(VAR_1);
 }

 return VAR_2;
}
