
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuntap_data {int fd; int dev_name; scalar_t__ fixed_config; int gate_addr; } ;


 int FUNC_0 (unsigned char*,unsigned char*,int ) ;
 int FUNC_1 (int ,unsigned char*) ;

__attribute__((used)) static void FUNC_2(unsigned char *VAR_0, unsigned char *VAR_1,
       void *VAR_2)
{
 struct tuntap_data *VAR_3 = VAR_2;

 FUNC_1(VAR_3->gate_addr, VAR_0);
 if ((VAR_3->fd == -1) || VAR_3->fixed_config)
  return;
 FUNC_0(VAR_0, VAR_1, VAR_3->dev_name);
}
