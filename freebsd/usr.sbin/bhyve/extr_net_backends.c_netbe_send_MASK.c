
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_backend {scalar_t__ be_vnet_hdr_len; scalar_t__ fe_vnet_hdr_len; int (* send ) (struct net_backend*,struct iovec*,int) ;} ;
struct iovec {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 struct iovec* FUNC_1 (struct iovec*,int*,scalar_t__) ;
 int FUNC_2 (struct net_backend*,struct iovec*,int) ;

ssize_t
FUNC_3(struct net_backend *VAR_0, struct iovec *VAR_1, int VAR_2)
{

 FUNC_0(VAR_0 != ((void*)0));
 if (VAR_0->be_vnet_hdr_len != VAR_0->fe_vnet_hdr_len) {





  FUNC_0(VAR_0->be_vnet_hdr_len == 0);
  VAR_1 = FUNC_1(VAR_1, &VAR_2, VAR_0->fe_vnet_hdr_len);
 }

 return (VAR_0->send(VAR_0, VAR_1, VAR_2));
}
