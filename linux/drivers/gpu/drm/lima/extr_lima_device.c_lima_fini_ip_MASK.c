
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_ip_desc {int (* fini ) (struct lima_ip*) ;} ;
struct lima_ip {scalar_t__ present; } ;
struct lima_device {struct lima_ip* ip; } ;


 struct lima_ip_desc* VAR_0 ;
 int FUNC_0 (struct lima_ip*) ;

__attribute__((used)) static void FUNC_1(struct lima_device *VAR_1, int VAR_2)
{
 struct lima_ip_desc *VAR_3 = VAR_0 + VAR_2;
 struct lima_ip *VAR_4 = VAR_1->ip + VAR_2;

 if (VAR_4->present)
  VAR_3->fini(VAR_4);
}
