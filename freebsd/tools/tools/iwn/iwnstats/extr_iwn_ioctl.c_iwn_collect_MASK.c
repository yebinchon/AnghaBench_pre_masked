
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwnstats {int s; int st; } ;
struct iwn_ioctl_data {int dst_len; int * dst_addr; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*) ;

int
FUNC_3(struct iwnstats *VAR_1)
{
 int VAR_2;
 struct iwn_ioctl_data VAR_3;

 FUNC_1("st: %p\n", &VAR_1->st);
 VAR_3.dst_addr = &VAR_1->st;
 VAR_3.dst_len = sizeof(VAR_1->st);
 VAR_2 = FUNC_0(VAR_1->s, VAR_0, (caddr_t) &VAR_3);
 if (VAR_2 < 0)
  FUNC_2("ioctl");
 return (VAR_2);
}
