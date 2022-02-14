
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_sge {scalar_t__ length; } ;



__attribute__((used)) static int FUNC_0(struct ib_sge *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  VAR_3 += VAR_0[VAR_2].length;

 return VAR_3;
}
