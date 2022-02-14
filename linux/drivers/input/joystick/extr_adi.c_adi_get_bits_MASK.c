
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adi {int idx; int ret; int* data; } ;



__attribute__((used)) static inline int FUNC_0(struct adi *VAR_0, int VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;
 if ((VAR_0->idx += VAR_1) > VAR_0->ret) return 0;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_2 |= ((VAR_0->data[VAR_0->idx - VAR_3] >> 5) & 1) << VAR_3;
 return VAR_2;
}
