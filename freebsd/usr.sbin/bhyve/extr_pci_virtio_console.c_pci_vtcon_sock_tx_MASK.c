
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_vtcon_sock {int vss_conn_fd; int vss_open; int vss_conn_evp; } ;
struct pci_vtcon_port {int dummy; } ;
struct iovec {int iov_len; int iov_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct pci_vtcon_port *VAR_0, void *VAR_1, struct iovec *VAR_2,
    int VAR_3)
{
 struct pci_vtcon_sock *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = (struct pci_vtcon_sock *)VAR_1;

 if (VAR_4->vss_conn_fd == -1)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_6 = FUNC_1(VAR_4->vss_conn_fd, VAR_2[VAR_5].iov_base,
      VAR_2[VAR_5].iov_len);
  if (VAR_6 <= 0)
   break;
 }

 if (VAR_6 <= 0) {
  FUNC_0(VAR_4->vss_conn_evp);
  VAR_4->vss_conn_fd = -1;
  VAR_4->vss_open = 0;
 }
}
