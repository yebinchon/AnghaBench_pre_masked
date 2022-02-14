
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_crc32 {int crc32; int pos; } ;


 scalar_t__ FUNC_0 (char*,char) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int VAR_1 ;

void FUNC_2 (struct lev_crc32 *VAR_2) {
  if (!VAR_0) { return; }
  if (FUNC_0 ("LEV_CRC32", '\t')) {
    return;
  }
  FUNC_1 (VAR_1, "%d\t0x%x\n", VAR_2->pos, VAR_2->crc32);
}
