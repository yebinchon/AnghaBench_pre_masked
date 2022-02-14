
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i801_priv {int features; int status; int waitq; int pci_dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i801_priv*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct i801_priv*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct i801_priv*) ;
 int FUNC_3 (struct i801_priv*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_9, void *VAR_10)
{
 struct i801_priv *VAR_11 = VAR_10;
 u16 VAR_12;
 u8 VAR_13;


 FUNC_6(VAR_11->pci_dev, VAR_5, &VAR_12);
 if (!(VAR_12 & VAR_6))
  return VAR_2;

 if (VAR_11->features & VAR_0) {
  VAR_13 = FUNC_4(FUNC_1(VAR_11));
  if (VAR_13 & VAR_7)
   return FUNC_2(VAR_11);
 }

 VAR_13 = FUNC_4(FUNC_0(VAR_11));
 if (VAR_13 & VAR_3)
  FUNC_3(VAR_11);





 VAR_13 &= VAR_4 | VAR_8;
 if (VAR_13) {
  FUNC_5(VAR_13, FUNC_0(VAR_11));
  VAR_11->status = VAR_13;
  FUNC_7(&VAR_11->waitq);
 }

 return VAR_1;
}
