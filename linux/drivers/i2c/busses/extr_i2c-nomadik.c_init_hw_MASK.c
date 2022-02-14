
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int operation; } ;
struct nmk_i2c_dev {TYPE_1__ cli; scalar_t__ virtbase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nmk_i2c_dev*) ;
 int FUNC_1 (struct nmk_i2c_dev*) ;
 int FUNC_2 (struct nmk_i2c_dev*) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct nmk_i2c_dev *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  goto exit;


 FUNC_3(VAR_3->virtbase + VAR_0 , VAR_1);

 FUNC_1(VAR_3);

 FUNC_0(VAR_3);

 VAR_3->cli.operation = VAR_2;

exit:
 return VAR_4;
}
