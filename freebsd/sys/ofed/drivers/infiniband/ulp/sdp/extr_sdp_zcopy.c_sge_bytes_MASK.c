
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_sge {scalar_t__ length; } ;



__attribute__((used)) static inline int FUNC_0(struct ib_sge *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 while (VAR_1 > 0) {
  VAR_2 += VAR_0->length;
  VAR_0++;
  VAR_1--;
 }

 return VAR_2;
}
