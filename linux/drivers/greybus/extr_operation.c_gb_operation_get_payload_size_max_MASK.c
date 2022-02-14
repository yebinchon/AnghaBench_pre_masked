
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_operation_msg_hdr {int dummy; } ;
struct gb_host_device {size_t buffer_size_max; } ;
struct gb_connection {struct gb_host_device* hd; } ;



size_t FUNC_0(struct gb_connection *VAR_0)
{
 struct gb_host_device *VAR_1 = VAR_0->hd;

 return VAR_1->buffer_size_max - sizeof(struct gb_operation_msg_hdr);
}
