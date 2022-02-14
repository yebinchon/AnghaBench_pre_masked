
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rpi_firmware_property_tag_header {size_t buf_size; scalar_t__ req_resp_size; int tag; } ;
struct rpi_firmware {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (void*,void*,size_t) ;
 int FUNC_3 (struct rpi_firmware*,void*,size_t) ;

int FUNC_4(struct rpi_firmware *VAR_2,
     u32 VAR_3, void *VAR_4, size_t VAR_5)
{
 struct rpi_firmware_property_tag_header *VAR_6;
 int VAR_7;






 void *VAR_8 = FUNC_1(sizeof(*VAR_6) + VAR_5, VAR_1);

 if (!VAR_8)
  return -VAR_0;

 VAR_6 = VAR_8;
 VAR_6->tag = VAR_3;
 VAR_6->buf_size = VAR_5;
 VAR_6->req_resp_size = 0;
 FUNC_2(VAR_8 + sizeof(*VAR_6), VAR_4, VAR_5);

 VAR_7 = FUNC_3(VAR_2, VAR_8, VAR_5 + sizeof(*VAR_6));

 FUNC_2(VAR_4, VAR_8 + sizeof(*VAR_6), VAR_5);

 FUNC_0(VAR_8);

 return VAR_7;
}
