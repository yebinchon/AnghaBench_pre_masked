
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int index; struct ipoctal_channel* driver_data; } ;
struct ipoctal_channel {int dummy; } ;
struct ipoctal {int dev; } ;


 struct ipoctal* FUNC_0 (struct ipoctal_channel*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0)
{
 struct ipoctal_channel *VAR_1 = VAR_0->driver_data;
 struct ipoctal *VAR_2 = FUNC_0(VAR_1, VAR_0->index);


 FUNC_1(VAR_2->dev);
}
