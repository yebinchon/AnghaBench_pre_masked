
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ng_hci_cmd_pkt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,char const*,int,int ) ;

int
FUNC_2(int VAR_3, char const *VAR_4, int VAR_5)
{
 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_5 >= sizeof(ng_hci_cmd_pkt_t));
 FUNC_0(VAR_5 <= sizeof(ng_hci_cmd_pkt_t) + VAR_1);

 if (FUNC_1(VAR_3, VAR_4, VAR_5, 0) < 0)
  return (VAR_0);

 return (VAR_2);
}
