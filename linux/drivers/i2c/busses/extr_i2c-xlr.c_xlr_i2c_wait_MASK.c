
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlr_i2c_private {int iobase; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct xlr_i2c_private*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct xlr_i2c_private *VAR_4, unsigned long VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4->wait, FUNC_2(VAR_4),
    FUNC_0(VAR_5));
 if (!VAR_7)
  return -VAR_1;

 VAR_6 = FUNC_3(VAR_4->iobase, VAR_3);

 return VAR_6 & VAR_2 ? -VAR_0 : 0;
}
