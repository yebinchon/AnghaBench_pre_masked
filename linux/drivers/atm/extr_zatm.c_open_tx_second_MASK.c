
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zatm_vcc {int tx_chan; int shaper; } ;
struct zatm_dev {struct atm_vcc** tx_map; int lock; } ;
struct atm_vcc {int vpi; int vci; int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct zatm_dev* FUNC_1 (int ) ;
 struct zatm_vcc* FUNC_2 (struct atm_vcc*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct zatm_dev*,int,int) ;

__attribute__((used)) static int FUNC_6(struct atm_vcc *VAR_4)
{
 struct zatm_dev *VAR_5;
 struct zatm_vcc *VAR_6;
 unsigned long VAR_7;

 FUNC_0("open_tx_second\n");
 VAR_5 = FUNC_1(VAR_4->dev);
 VAR_6 = FUNC_2(VAR_4);
 if (!VAR_6->tx_chan) return 0;

 FUNC_3(&VAR_5->lock, VAR_7);
 FUNC_5(VAR_5,0,VAR_6->tx_chan*VAR_0/4);
 FUNC_5(VAR_5,VAR_1 | (VAR_6->shaper <<
     VAR_2) | (VAR_4->vpi << VAR_3) |
     VAR_4->vci,VAR_6->tx_chan*VAR_0/4+1);
 FUNC_5(VAR_5,0,VAR_6->tx_chan*VAR_0/4+2);
 FUNC_4(&VAR_5->lock, VAR_7);
 VAR_5->tx_map[VAR_6->tx_chan] = VAR_4;
 return 0;
}
