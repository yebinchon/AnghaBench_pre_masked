
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ib_sge {scalar_t__ length; } ;



__attribute__((used)) static inline uint32_t FUNC_0(struct ib_sge *VAR_0, int VAR_1)
{
 uint32_t VAR_2 = 0, VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_2 += VAR_0[VAR_3].length;
 return VAR_2;
}
