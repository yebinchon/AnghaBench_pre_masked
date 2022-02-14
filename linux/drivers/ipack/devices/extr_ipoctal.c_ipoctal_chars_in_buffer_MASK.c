
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ipoctal_channel* driver_data; } ;
struct ipoctal_channel {int nb_bytes; } ;



__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_0)
{
 struct ipoctal_channel *VAR_1 = VAR_0->driver_data;

 return VAR_1->nb_bytes;
}
