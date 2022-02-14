
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ati_remote2 {int * buf_dma; int * buf; int udev; int * urb; } ;


 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ati_remote2 *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 2; VAR_1++) {
  FUNC_1(VAR_0->urb[VAR_1]);
  FUNC_0(VAR_0->udev, 4, VAR_0->buf[VAR_1], VAR_0->buf_dma[VAR_1]);
 }
}
