
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p_compressed_bm {int encoding; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct p_compressed_bm *VAR_0, int VAR_1)
{
 FUNC_0(VAR_1 & ~0x7);
 VAR_0->encoding = (VAR_0->encoding & (~0x7 << 4)) | (VAR_1 << 4);
}
