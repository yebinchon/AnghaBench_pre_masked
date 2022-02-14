
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dev; TYPE_1__* altsetting; } ;
typedef struct usb_cdc_union_desc {size_t bLength; scalar_t__ bDescriptorType; scalar_t__ bDescriptorSubType; } const usb_cdc_union_desc ;
struct TYPE_2__ {void* extra; size_t extralen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;

__attribute__((used)) static const struct usb_cdc_union_desc *
FUNC_2(struct usb_interface *VAR_2)
{
 const void *VAR_3 = VAR_2->altsetting->extra;
 size_t VAR_4 = VAR_2->altsetting->extralen;
 struct usb_cdc_union_desc *VAR_5;

 if (!VAR_3) {
  FUNC_1(&VAR_2->dev, "Missing descriptor data\n");
  return ((void*)0);
 }

 if (!VAR_4) {
  FUNC_1(&VAR_2->dev, "Zero length descriptor\n");
  return ((void*)0);
 }

 while (VAR_4 >= sizeof(*VAR_5)) {
  VAR_5 = (struct usb_cdc_union_desc *)VAR_3;

  if (VAR_5->bLength > VAR_4) {
   FUNC_1(&VAR_2->dev, "Too large descriptor\n");
   return ((void*)0);
  }

  if (VAR_5->bDescriptorType == VAR_1 &&
      VAR_5->bDescriptorSubType == VAR_0) {
   FUNC_0(&VAR_2->dev, "Found union header\n");

   if (VAR_5->bLength >= sizeof(*VAR_5))
    return VAR_5;

   FUNC_1(&VAR_2->dev,
    "Union descriptor too short (%d vs %zd)\n",
    VAR_5->bLength, sizeof(*VAR_5));
   return ((void*)0);
  }

  VAR_4 -= VAR_5->bLength;
  VAR_3 += VAR_5->bLength;
 }

 FUNC_1(&VAR_2->dev, "Missing CDC union descriptor\n");
 return ((void*)0);
}
