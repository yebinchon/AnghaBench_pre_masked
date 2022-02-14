
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int addrf_len; int capacity; } ;



__attribute__((used)) static size_t FUNC_0(struct pblk *VAR_0)
{
 int VAR_1 = 8;

 if (VAR_0->addrf_len < 32)
  VAR_1 = 4;

 return VAR_1 * VAR_0->capacity;
}
