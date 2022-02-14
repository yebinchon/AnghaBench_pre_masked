
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p_compressed_bm {int encoding; } ;
typedef enum drbd_bitmap_code { ____Placeholder_drbd_bitmap_code } drbd_bitmap_code ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct p_compressed_bm *VAR_0, enum drbd_bitmap_code VAR_1)
{
 FUNC_0(VAR_1 & ~0xf);
 VAR_0->encoding = (VAR_0->encoding & ~0xf) | VAR_1;
}
