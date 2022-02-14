
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa_len; int sa_data; int sa_family; } ;
struct ifreq {TYPE_1__ ifr_addr; int ifr_name; } ;
typedef int ifr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,struct ifreq*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct ifreq*,int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char*) ;

int FUNC_6(char *VAR_4, char *VAR_5)
{
 int VAR_6, VAR_7;
 struct ifreq VAR_8;

 VAR_6 = FUNC_4(VAR_1, VAR_3, 0);
 if (VAR_6 == -1)
  return -1;

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 FUNC_5(VAR_8.ifr_name, VAR_4);

 VAR_8.ifr_addr.sa_family = VAR_0;
 VAR_8.ifr_addr.sa_len = 6;
 FUNC_2(VAR_8.ifr_addr.sa_data, VAR_5, 6);

 VAR_7 = FUNC_1(VAR_6, VAR_2, &VAR_8);

 FUNC_0(VAR_6);

 return VAR_7;
}
