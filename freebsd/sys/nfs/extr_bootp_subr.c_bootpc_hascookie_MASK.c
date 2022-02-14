
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bootp_packet {int* vend; } ;



__attribute__((used)) static int
FUNC_0(struct bootp_packet *VAR_0)
{

 return (VAR_0->vend[0] == 99 && VAR_0->vend[1] == 130 &&
  VAR_0->vend[2] == 83 && VAR_0->vend[3] == 99);
}
