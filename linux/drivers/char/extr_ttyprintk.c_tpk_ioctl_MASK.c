
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttyprintk_port {int dummy; } ;
struct tty_struct {struct ttyprintk_port* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_3,
   unsigned int VAR_4, unsigned long VAR_5)
{
 struct ttyprintk_port *VAR_6 = VAR_3->driver_data;

 if (!VAR_6)
  return -VAR_0;

 switch (VAR_4) {

 case 128:
  return -VAR_2;
 default:
  return -VAR_1;
 }
 return 0;
}
