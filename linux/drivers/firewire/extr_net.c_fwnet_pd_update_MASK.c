
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwnet_peer {int pd_list; } ;
struct fwnet_partial_datagram {unsigned int pbuf; int pd_link; } ;


 int * FUNC_0 (struct fwnet_partial_datagram*,unsigned int,unsigned int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (unsigned int,void*,unsigned int) ;

__attribute__((used)) static bool FUNC_3(struct fwnet_peer *VAR_0,
  struct fwnet_partial_datagram *VAR_1, void *VAR_2,
  unsigned VAR_3, unsigned VAR_4)
{
 if (FUNC_0(VAR_1, VAR_3, VAR_4) == ((void*)0))
  return 0;

 FUNC_2(VAR_1->pbuf + VAR_3, VAR_2, VAR_4);





 FUNC_1(&VAR_1->pd_link, &VAR_0->pd_list);

 return 1;
}
