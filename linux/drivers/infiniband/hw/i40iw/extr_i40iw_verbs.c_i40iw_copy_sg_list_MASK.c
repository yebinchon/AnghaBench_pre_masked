
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_sge {int lkey; int length; int addr; } ;
struct i40iw_sge {int stag; int len; int tag_off; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct i40iw_sge *VAR_1, struct ib_sge *VAR_2, int VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; (VAR_4 < VAR_3) && (VAR_4 < VAR_0); VAR_4++) {
  VAR_1[VAR_4].tag_off = VAR_2[VAR_4].addr;
  VAR_1[VAR_4].len = VAR_2[VAR_4].length;
  VAR_1[VAR_4].stag = VAR_2[VAR_4].lkey;
 }
}
