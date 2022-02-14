
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gb_operation_msg_hdr {int dummy; } ;
struct gb_message {int buffer; } ;
struct gb_host_device {size_t buffer_size_max; int dev; } ;
typedef int gfp_t ;


 int FUNC_0 (int *,char*,size_t,size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct gb_host_device*,struct gb_message*,int ,size_t,int ) ;
 int FUNC_2 (int ,struct gb_message*) ;
 struct gb_message* FUNC_3 (int ,int ) ;
 int FUNC_4 (size_t,int ) ;

__attribute__((used)) static struct gb_message *
FUNC_5(struct gb_host_device *VAR_1, u8 VAR_2,
      size_t VAR_3, gfp_t VAR_4)
{
 struct gb_message *VAR_5;
 struct gb_operation_msg_hdr *VAR_6;
 size_t VAR_7 = VAR_3 + sizeof(*VAR_6);

 if (VAR_7 > VAR_1->buffer_size_max) {
  FUNC_0(&VAR_1->dev, "requested message size too big (%zu > %zu)\n",
    VAR_7, VAR_1->buffer_size_max);
  return ((void*)0);
 }


 VAR_5 = FUNC_3(VAR_0, VAR_4);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->buffer = FUNC_4(VAR_7, VAR_4);
 if (!VAR_5->buffer)
  goto err_free_message;


 FUNC_1(VAR_1, VAR_5, 0, VAR_3, VAR_2);

 return VAR_5;

err_free_message:
 FUNC_2(VAR_0, VAR_5);

 return ((void*)0);
}
