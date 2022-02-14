
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sch_gpio {unsigned int resume_base; } ;



__attribute__((used)) static unsigned FUNC_0(struct sch_gpio *VAR_0, unsigned VAR_1,
    unsigned VAR_2)
{
 unsigned VAR_3 = 0;

 if (VAR_1 >= VAR_0->resume_base) {
  VAR_1 -= VAR_0->resume_base;
  VAR_3 += 0x20;
 }

 return VAR_3 + VAR_2 + VAR_1 / 8;
}
