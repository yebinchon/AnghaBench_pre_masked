
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct ht16k33_fbdev {scalar_t__ buffer; int info; int work; } ;
struct ht16k33_priv {struct ht16k33_fbdev fbdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 struct ht16k33_priv* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct ht16k33_priv *VAR_1 = FUNC_3(VAR_0);
 struct ht16k33_fbdev *VAR_2 = &VAR_1->fbdev;

 FUNC_0(&VAR_2->work);
 FUNC_4(VAR_2->info);
 FUNC_1(VAR_2->info);
 FUNC_2((unsigned long) VAR_2->buffer);

 return 0;
}
