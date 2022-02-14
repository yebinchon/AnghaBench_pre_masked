
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int operation; } ;
struct nmk_i2c_dev {int result; TYPE_1__* adev; scalar_t__ virtbase; TYPE_2__ cli; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char** VAR_4 ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (struct nmk_i2c_dev*) ;
 int FUNC_3 (struct nmk_i2c_dev*,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct nmk_i2c_dev*,int) ;

__attribute__((used)) static int FUNC_6(struct nmk_i2c_dev *VAR_5, u16 VAR_6)
{
 int VAR_7;

 if (VAR_6 & VAR_0) {

  VAR_5->cli.operation = VAR_1;
  VAR_7 = FUNC_3(VAR_5, VAR_6);
 } else {

  VAR_5->cli.operation = VAR_3;
  VAR_7 = FUNC_5(VAR_5, VAR_6);
 }

 if (VAR_7 || (VAR_5->result)) {
  u32 VAR_8;
  u32 VAR_9;

  VAR_8 = FUNC_4(VAR_5->virtbase + VAR_2);




  if (((VAR_8 >> 2) & 0x3) == 0x3) {

   VAR_9 = (VAR_8 >> 4) & 0x7;
   FUNC_1(&VAR_5->adev->dev, "%s\n",
    VAR_9 >= FUNC_0(VAR_4) ?
    "unknown reason" :
    VAR_4[VAR_9]);
  }

  (void) FUNC_2(VAR_5);

  VAR_7 = VAR_7 ? VAR_7 : VAR_5->result;
 }

 return VAR_7;
}
