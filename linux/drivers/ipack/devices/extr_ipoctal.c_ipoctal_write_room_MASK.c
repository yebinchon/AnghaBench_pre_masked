
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ipoctal_channel* driver_data; } ;
struct ipoctal_channel {int nb_bytes; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_1)
{
 struct ipoctal_channel *VAR_2 = VAR_1->driver_data;

 return VAR_0 - VAR_2->nb_bytes;
}
