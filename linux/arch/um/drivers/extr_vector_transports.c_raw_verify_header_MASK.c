
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct virtio_net_hdr {scalar_t__ gso_type; int flags; } ;
struct vector_private {int req_size; int dev; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct sk_buff*,struct virtio_net_hdr*,int ) ;

__attribute__((used)) static int FUNC_4(
 uint8_t *VAR_3, struct sk_buff *VAR_4, struct vector_private *VAR_5)
{
 struct virtio_net_hdr *VAR_6 = (struct virtio_net_hdr *) VAR_3;

 if ((VAR_6->gso_type != VAR_2) &&
  (VAR_5->req_size != 65536)) {
  if (FUNC_0())
   FUNC_1(
    VAR_5->dev,
    VAR_0
  );
 }
 if ((VAR_6->flags & VAR_1) > 0)
  return 1;

 FUNC_3(VAR_4, VAR_6, FUNC_2());
 return 0;
}
