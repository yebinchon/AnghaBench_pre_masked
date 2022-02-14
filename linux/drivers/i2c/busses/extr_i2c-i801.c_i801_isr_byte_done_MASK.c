
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i801_priv {int cmd; int count; int len; int* data; TYPE_1__* pci_dev; scalar_t__ is_read; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i801_priv*) ;
 int FUNC_1 (struct i801_priv*) ;
 int VAR_2 ;
 int FUNC_2 (struct i801_priv*) ;
 int FUNC_3 (struct i801_priv*) ;
 int VAR_3 ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static void FUNC_9(struct i801_priv *VAR_4)
{
 if (VAR_4->is_read) {

  if (((VAR_4->cmd & 0x1c) == VAR_1) &&
      (VAR_4->count == 0)) {
   VAR_4->len = FUNC_7(FUNC_2(VAR_4));
   if (VAR_4->len < 1 || VAR_4->len > VAR_0) {
    FUNC_5(&VAR_4->pci_dev->dev,
     "Illegal SMBus block read size %d\n",
     VAR_4->len);

    VAR_4->len = VAR_0;
   } else {
    FUNC_4(&VAR_4->pci_dev->dev,
     "SMBus block read size is %d\n",
     VAR_4->len);
   }
   VAR_4->data[-1] = VAR_4->len;
  }


  if (VAR_4->count < VAR_4->len)
   VAR_4->data[VAR_4->count++] = FUNC_6(FUNC_0(VAR_4));
  else
   FUNC_4(&VAR_4->pci_dev->dev,
    "Discarding extra byte on block read\n");


  if (VAR_4->count == VAR_4->len - 1)
   FUNC_8(VAR_4->cmd | VAR_2,
          FUNC_1(VAR_4));
 } else if (VAR_4->count < VAR_4->len - 1) {

  FUNC_8(VAR_4->data[++VAR_4->count], FUNC_0(VAR_4));
 }


 FUNC_8(VAR_3, FUNC_3(VAR_4));
}
