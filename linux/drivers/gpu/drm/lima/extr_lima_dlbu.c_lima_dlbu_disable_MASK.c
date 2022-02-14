
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_ip {int dummy; } ;
struct lima_device {struct lima_ip* ip; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;

void FUNC_1(struct lima_device *VAR_2)
{
 struct lima_ip *VAR_3 = VAR_2->ip + VAR_1;

 FUNC_0(VAR_0, 0);
}
