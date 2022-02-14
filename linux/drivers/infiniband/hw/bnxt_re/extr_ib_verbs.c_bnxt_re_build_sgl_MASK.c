
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_sge {scalar_t__ length; int lkey; int addr; } ;
struct bnxt_qplib_sge {scalar_t__ size; int lkey; int addr; } ;



__attribute__((used)) static int FUNC_0(struct ib_sge *VAR_0,
        struct bnxt_qplib_sge *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_1[VAR_3].addr = VAR_0[VAR_3].addr;
  VAR_1[VAR_3].lkey = VAR_0[VAR_3].lkey;
  VAR_1[VAR_3].size = VAR_0[VAR_3].length;
  VAR_4 += VAR_1[VAR_3].size;
 }
 return VAR_4;
}
