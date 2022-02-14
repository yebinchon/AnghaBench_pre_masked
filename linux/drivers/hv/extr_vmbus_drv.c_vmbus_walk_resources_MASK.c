
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resource {char* name; int start; int end; struct resource* sibling; int flags; } ;
struct TYPE_8__ {int minimum; int maximum; } ;
struct TYPE_9__ {TYPE_3__ address; } ;
struct TYPE_6__ {int minimum; int maximum; } ;
struct TYPE_7__ {TYPE_1__ address; } ;
struct TYPE_10__ {TYPE_4__ address64; TYPE_2__ address32; } ;
struct acpi_resource {int type; TYPE_5__ data; } ;
typedef int resource_size_t ;
typedef int acpi_status ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct resource* VAR_5 ;
 int FUNC_0 (struct resource*) ;
 struct resource* FUNC_1 (int,int ) ;

__attribute__((used)) static acpi_status FUNC_2(struct acpi_resource *VAR_6, void *VAR_7)
{
 resource_size_t VAR_8 = 0;
 resource_size_t VAR_9 = 0;
 struct resource *VAR_10;
 struct resource **VAR_11 = &VAR_5;
 struct resource **VAR_12 = ((void*)0);

 switch (VAR_6->type) {






 case 129:
  VAR_8 = VAR_6->data.address32.address.minimum;
  VAR_9 = VAR_6->data.address32.address.maximum;
  break;

 case 128:
  VAR_8 = VAR_6->data.address64.address.minimum;
  VAR_9 = VAR_6->data.address64.address.maximum;
  break;

 default:

  return VAR_1;

 }




 if (VAR_9 < 0x100000)
  return VAR_1;

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return VAR_0;


 if (VAR_9 > VAR_4 && VAR_8 < VAR_4)
  VAR_9 = VAR_4;

 VAR_10->name = "hyperv mmio";
 VAR_10->flags = VAR_3;
 VAR_10->start = VAR_8;
 VAR_10->end = VAR_9;




 do {
  if (!*VAR_11) {
   *VAR_11 = VAR_10;
   break;
  }

  if (((*VAR_11)->end + 1) == VAR_10->start) {
   (*VAR_11)->end = VAR_10->end;
   FUNC_0(VAR_10);
   break;
  }

  if ((*VAR_11)->start == VAR_10->end + 1) {
   (*VAR_11)->start = VAR_10->start;
   FUNC_0(VAR_10);
   break;
  }

  if ((*VAR_11)->start > VAR_10->end) {
   VAR_10->sibling = *VAR_11;
   if (VAR_12)
    (*VAR_12)->sibling = VAR_10;
   *VAR_11 = VAR_10;
   break;
  }

  VAR_12 = VAR_11;
  VAR_11 = &(*VAR_11)->sibling;

 } while (1);

 return VAR_1;
}
