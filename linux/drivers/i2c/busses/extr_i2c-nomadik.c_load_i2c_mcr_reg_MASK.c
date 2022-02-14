
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int slave_adr; int operation; int count; } ;
struct nmk_i2c_dev {TYPE_1__ cli; scalar_t__ stop; } ;


 int FUNC_0 (int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(struct nmk_i2c_dev *VAR_10, u16 VAR_11)
{
 u32 VAR_12 = 0;
 unsigned short VAR_13;

 VAR_12 |= FUNC_0(VAR_10->cli.slave_adr, VAR_0, 1);

 if (FUNC_1(VAR_11 & VAR_7)) {

  VAR_12 |= FUNC_0(2, VAR_1, 12);






  VAR_13 = (VAR_10->cli.slave_adr >> 7) & 0x7;

  VAR_12 |= FUNC_0(VAR_13, VAR_2, 8);
 } else {

  VAR_12 |= FUNC_0(1, VAR_1, 12);
 }


 VAR_12 |= FUNC_0(0, VAR_5, 11);


 if (VAR_10->cli.operation == VAR_9)
  VAR_12 |= FUNC_0(VAR_9, VAR_4, 0);
 else
  VAR_12 |= FUNC_0(VAR_8, VAR_4, 0);


 if (VAR_10->stop)
  VAR_12 |= FUNC_0(1, VAR_6, 14);
 else
  VAR_12 &= ~(FUNC_0(1, VAR_6, 14));

 VAR_12 |= FUNC_0(VAR_10->cli.count, VAR_3, 15);

 return VAR_12;
}
