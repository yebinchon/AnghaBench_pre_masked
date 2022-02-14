
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtio_net_hdr {int dummy; } ;
struct vector_private {int header_size; int rx_header_size; TYPE_1__* fds; TYPE_2__* dev; int * verify_header; int * form_header; } ;
struct TYPE_4__ {int hw_features; int features; } ;
struct TYPE_3__ {int tx_fd; int rx_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct vector_private *VAR_7)
{
 if (FUNC_1(VAR_7->fds->rx_fd)) {
  VAR_7->form_header = &VAR_5;
  VAR_7->verify_header = &VAR_6;
  VAR_7->header_size = sizeof(struct virtio_net_hdr);
  VAR_7->rx_header_size = sizeof(struct virtio_net_hdr);
  VAR_7->dev->hw_features |=
   (VAR_4 | VAR_1 | VAR_0);
  VAR_7->dev->features |=
   (VAR_3 | VAR_2 |
    VAR_4 | VAR_1 | VAR_0);
  FUNC_0(
   VAR_7->dev,
   "tap/raw hybrid: using vnet headers for tso and tx/rx checksum"
  );
 } else {
  return 0;
 }
 if (FUNC_2(VAR_7->fds->tx_fd))
  return 0;
 return -1;
}
