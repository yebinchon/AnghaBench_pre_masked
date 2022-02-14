
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct manifest_desc {size_t size; char* data; int type; int links; } ;
struct greybus_descriptor_string {int dummy; } ;
struct greybus_descriptor_interface {int dummy; } ;
struct greybus_descriptor_header {int type; int size; } ;
struct greybus_descriptor_cport {int dummy; } ;
struct greybus_descriptor_bundle {int dummy; } ;
struct TYPE_2__ {size_t length; } ;
struct greybus_descriptor {TYPE_1__ string; struct greybus_descriptor_header header; } ;
struct gb_interface {int manifest_descs; int dev; } ;


 size_t FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_1 (int *,char*,size_t,...) ;
 int FUNC_2 (int *,char*,int ,size_t,size_t) ;
 int FUNC_3 (int) ;
 struct manifest_desc* FUNC_4 (int,int ) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(struct gb_interface *VAR_3,
          struct greybus_descriptor *VAR_4, size_t VAR_5)
{
 struct greybus_descriptor_header *VAR_6 = &VAR_4->header;
 struct manifest_desc *VAR_7;
 size_t VAR_8;
 size_t VAR_9;

 if (VAR_5 < sizeof(*VAR_6)) {
  FUNC_1(&VAR_3->dev, "manifest too small (%zu < %zu)\n", VAR_5,
   sizeof(*VAR_6));
  return -VAR_0;
 }

 VAR_8 = FUNC_5(VAR_6->size);
 if (VAR_8 > VAR_5) {
  FUNC_1(&VAR_3->dev, "descriptor too big (%zu > %zu)\n",
   VAR_8, VAR_5);
  return -VAR_0;
 }


 VAR_9 = sizeof(*VAR_6);

 switch (VAR_6->type) {
 case 128:
  VAR_9 += sizeof(struct greybus_descriptor_string);
  VAR_9 += VAR_4->string.length;


  VAR_9 = FUNC_0(VAR_9, 4);
  break;
 case 130:
  VAR_9 += sizeof(struct greybus_descriptor_interface);
  break;
 case 132:
  VAR_9 += sizeof(struct greybus_descriptor_bundle);
  break;
 case 131:
  VAR_9 += sizeof(struct greybus_descriptor_cport);
  break;
 case 129:
 default:
  FUNC_1(&VAR_3->dev, "invalid descriptor type (%u)\n",
   VAR_6->type);
  return -VAR_0;
 }

 if (VAR_8 < VAR_9) {
  FUNC_1(&VAR_3->dev, "%s descriptor too small (%zu < %zu)\n",
   FUNC_3(VAR_6->type),
   VAR_8, VAR_9);
  return -VAR_0;
 }


 if (VAR_8 > VAR_9) {
  FUNC_2(&VAR_3->dev, "%s descriptor size mismatch (want %zu got %zu)\n",
    FUNC_3(VAR_6->type),
    VAR_9, VAR_8);
 }

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->size = VAR_8;
 VAR_7->data = (char *)VAR_4 + sizeof(*VAR_6);
 VAR_7->type = VAR_6->type;
 FUNC_6(&VAR_7->links, &VAR_3->manifest_descs);



 return VAR_8;
}
