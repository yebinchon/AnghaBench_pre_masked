
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct virtio_net_hdr {int dummy; } ;
struct vector_private {int dummy; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct sk_buff*,struct virtio_net_hdr*,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(uint8_t *VAR_0,
  struct sk_buff *VAR_1, struct vector_private *VAR_2)
{
 struct virtio_net_hdr *VAR_3 = (struct virtio_net_hdr *) VAR_0;

 FUNC_1(
  VAR_1,
  VAR_3,
  FUNC_0(),
  0,
  0
 );

 return 0;
}
