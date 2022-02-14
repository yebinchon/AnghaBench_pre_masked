
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct in_device* ip_ptr; } ;
struct in_ifaddr {struct in_ifaddr* ifa_next; int ifa_mask; int ifa_address; } ;
struct in_device {struct in_ifaddr* ifa_list; } ;
typedef int netmask ;
typedef int address ;


 int FUNC_0 (unsigned char*,int *,int) ;
 void FUNC_1 (unsigned char*,unsigned char*,void*) ;

void FUNC_2(void *VAR_0, void (*VAR_1)(unsigned char *, unsigned char *,
     void *),
      void *VAR_2)
{
 struct net_device *VAR_3 = VAR_0;
 struct in_device *VAR_4 = VAR_3->ip_ptr;
 struct in_ifaddr *VAR_5;
 unsigned char VAR_6[4], VAR_7[4];

 if (VAR_4 == ((void*)0)) return;
 VAR_5 = VAR_4->ifa_list;
 while (VAR_5 != ((void*)0)) {
  FUNC_0(VAR_6, &VAR_5->ifa_address, sizeof(VAR_6));
  FUNC_0(VAR_7, &VAR_5->ifa_mask, sizeof(VAR_7));
  (*VAR_1)(VAR_6, VAR_7, VAR_2);
  VAR_5 = VAR_5->ifa_next;
 }
}
