
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
struct net_backend {unsigned int fe_vnet_hdr_len; int (* set_cap ) (struct net_backend*,int ,unsigned int) ;scalar_t__ be_vnet_hdr_len; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_backend*,int ,unsigned int) ;

int
FUNC_2(struct net_backend *VAR_1, uint64_t VAR_2,
       unsigned VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_1 != ((void*)0));


 if (VAR_3 && VAR_3 != VAR_0
  && VAR_3 != (VAR_0 - sizeof(uint16_t)))
  return (-1);

 VAR_1->fe_vnet_hdr_len = VAR_3;

 VAR_4 = VAR_1->set_cap(VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_1->be_vnet_hdr_len == 0 ||
        VAR_1->be_vnet_hdr_len == VAR_1->fe_vnet_hdr_len);

 return (VAR_4);
}
