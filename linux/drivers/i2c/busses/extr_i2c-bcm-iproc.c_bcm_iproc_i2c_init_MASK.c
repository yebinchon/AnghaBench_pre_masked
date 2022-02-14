
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_iproc_i2c_dev {int dummy; } ;


 int FUNC_0 (int ) ;
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
 int FUNC_1 (struct bcm_iproc_i2c_dev*,int ) ;
 int FUNC_2 (struct bcm_iproc_i2c_dev*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct bcm_iproc_i2c_dev *VAR_10)
{
 u32 VAR_11;


 VAR_11 = FUNC_1(VAR_10, VAR_1);
 VAR_11 |= FUNC_0(VAR_2);
 VAR_11 &= ~(FUNC_0(VAR_0));
 FUNC_2(VAR_10, VAR_1, VAR_11);


 FUNC_3(100);


 VAR_11 &= ~(FUNC_0(VAR_2));
 FUNC_2(VAR_10, VAR_1, VAR_11);


 VAR_11 = (FUNC_0(VAR_8) | FUNC_0(VAR_9));
 FUNC_2(VAR_10, VAR_7, VAR_11);

 VAR_11 = FUNC_1(VAR_10, VAR_5);
 VAR_11 &= ~(VAR_3 <<
   VAR_4);
 FUNC_2(VAR_10, VAR_5, VAR_11);


 FUNC_2(VAR_10, VAR_6, 0xffffffff);

 return 0;
}
