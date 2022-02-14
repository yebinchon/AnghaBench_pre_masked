
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyttsp_xydata {int touch12_id; int touch34_id; } ;



__attribute__((used)) static void FUNC_0(struct cyttsp_xydata *VAR_0, int *VAR_1)
{
 VAR_1[0] = VAR_0->touch12_id >> 4;
 VAR_1[1] = VAR_0->touch12_id & 0xF;
 VAR_1[2] = VAR_0->touch34_id >> 4;
 VAR_1[3] = VAR_0->touch34_id & 0xF;
}
