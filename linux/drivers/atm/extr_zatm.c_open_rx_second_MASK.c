
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zatm_vcc {int rx_chan; } ;
struct zatm_dev {int lock; } ;
struct atm_vcc {int vci; int dev; } ;


 int FUNC_0 (char*,int ) ;
 struct zatm_dev* FUNC_1 (int ) ;
 struct zatm_vcc* FUNC_2 (struct atm_vcc*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_0 ;
 int FUNC_6 (struct zatm_dev*,int) ;
 int FUNC_7 (struct zatm_dev*,int,int) ;

__attribute__((used)) static int FUNC_8(struct atm_vcc *VAR_1)
{
 struct zatm_dev *VAR_2;
 struct zatm_vcc *VAR_3;
 unsigned long VAR_4;
 int VAR_5,VAR_6;

 FUNC_0("open_rx_second (0x%x)\n",FUNC_3(0xc053));
 VAR_2 = FUNC_1(VAR_1->dev);
 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3->rx_chan) return 0;
 FUNC_4(&VAR_2->lock, VAR_4);

 VAR_5 = VAR_1->vci >> 1;
 VAR_6 = (1-(VAR_1->vci & 1)) << 4;
 FUNC_7(VAR_2,(FUNC_6(VAR_2,VAR_5) & ~(0xffff << VAR_6)) |
     ((VAR_3->rx_chan | VAR_0) << VAR_6),VAR_5);
 FUNC_5(&VAR_2->lock, VAR_4);
 return 0;
}
