
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_net_rxhdr {int vrh_bufs; } ;
struct net_backend {unsigned int fe_vnet_hdr_len; unsigned int be_vnet_hdr_len; int (* recv ) (struct net_backend*,struct iovec*,int) ;} ;
struct iovec {struct virtio_net_rxhdr* iov_base; } ;
typedef int ssize_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 struct iovec* FUNC_1 (struct iovec*,int*,unsigned int) ;
 int FUNC_2 (struct virtio_net_rxhdr*,int ,unsigned int) ;
 int FUNC_3 (struct net_backend*,struct iovec*,int) ;

ssize_t
FUNC_4(struct net_backend *VAR_1, struct iovec *VAR_2, int VAR_3)
{

 unsigned int VAR_4 = VAR_1->fe_vnet_hdr_len;
 int VAR_5;

 FUNC_0(VAR_1 != ((void*)0));

 if (VAR_4 && VAR_4 != VAR_1->be_vnet_hdr_len) {




  struct virtio_net_rxhdr *VAR_6;

  FUNC_0(VAR_1->be_vnet_hdr_len == 0);





  VAR_6 = VAR_2[0].iov_base;
  VAR_2 = FUNC_1(VAR_2, &VAR_3, VAR_4);





  FUNC_2(VAR_6, 0, VAR_4);
  if (VAR_4 == VAR_0) {
   VAR_6->vrh_bufs = 1;
  }
 }

 VAR_5 = VAR_1->recv(VAR_1, VAR_2, VAR_3);
 if (VAR_5 > 0) {
  VAR_5 += VAR_4;
 }

 return (VAR_5);
}
