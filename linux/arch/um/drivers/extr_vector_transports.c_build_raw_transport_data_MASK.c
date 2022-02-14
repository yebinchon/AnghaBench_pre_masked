
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtio_net_hdr {int dummy; } ;
struct vector_private {int header_size; int rx_header_size; TYPE_2__* dev; int * verify_header; int * form_header; TYPE_1__* fds; } ;
struct TYPE_4__ {int hw_features; int features; } ;
struct TYPE_3__ {int tx_fd; int rx_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct vector_private *VAR_6)
{
 if (FUNC_1(VAR_6->fds->rx_fd)) {
  if (!FUNC_1(VAR_6->fds->tx_fd))
   return -1;
  VAR_6->form_header = &VAR_4;
  VAR_6->verify_header = &VAR_5;
  VAR_6->header_size = sizeof(struct virtio_net_hdr);
  VAR_6->rx_header_size = sizeof(struct virtio_net_hdr);
  VAR_6->dev->hw_features |= (VAR_3 | VAR_0);
  VAR_6->dev->features |=
   (VAR_2 | VAR_1 |
    VAR_3 | VAR_0);
  FUNC_0(
   VAR_6->dev,
   "raw: using vnet headers for tso and tx/rx checksum"
  );
 }
 return 0;
}
