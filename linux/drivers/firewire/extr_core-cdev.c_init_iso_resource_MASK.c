
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int handle; int * release; } ;
struct TYPE_3__ {int type; int closure; } ;
struct iso_resource_event {int todo; int generation; scalar_t__ channels; scalar_t__ bandwidth; TYPE_2__ resource; TYPE_1__ iso_resource; struct iso_resource_event* e_dealloc; struct iso_resource_event* e_alloc; struct client* client; int work; } ;
struct iso_resource {int todo; int generation; scalar_t__ channels; scalar_t__ bandwidth; TYPE_2__ resource; TYPE_1__ iso_resource; struct iso_resource* e_dealloc; struct iso_resource* e_alloc; struct client* client; int work; } ;
struct fw_cdev_allocate_iso_resource {scalar_t__ channels; scalar_t__ bandwidth; int handle; int closure; } ;
struct client {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int VAR_6 ;
 int FUNC_1 (struct client*,TYPE_2__*,int ) ;
 int VAR_7 ;
 int FUNC_2 (struct iso_resource_event*) ;
 struct iso_resource_event* FUNC_3 (int,int ) ;
 int * VAR_8 ;
 int FUNC_4 (struct iso_resource_event*,int ) ;

__attribute__((used)) static int FUNC_5(struct client *VAR_9,
  struct fw_cdev_allocate_iso_resource *VAR_10, int VAR_11)
{
 struct iso_resource_event *VAR_12, *VAR_13;
 struct iso_resource *VAR_14;
 int VAR_15;

 if ((VAR_10->channels == 0 && VAR_10->bandwidth == 0) ||
     VAR_10->bandwidth > VAR_0)
  return -VAR_1;

 VAR_14 = FUNC_3(sizeof(*VAR_14), VAR_5);
 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_5);
 VAR_13 = FUNC_3(sizeof(*VAR_13), VAR_5);
 if (VAR_14 == ((void*)0) || VAR_12 == ((void*)0) || VAR_13 == ((void*)0)) {
  VAR_15 = -VAR_2;
  goto fail;
 }

 FUNC_0(&VAR_14->work, VAR_7);
 VAR_14->client = VAR_9;
 VAR_14->todo = VAR_11;
 VAR_14->generation = -1;
 VAR_14->channels = VAR_10->channels;
 VAR_14->bandwidth = VAR_10->bandwidth;
 VAR_14->e_alloc = VAR_12;
 VAR_14->e_dealloc = VAR_13;

 VAR_12->iso_resource.closure = VAR_10->closure;
 VAR_12->iso_resource.type = VAR_3;
 VAR_13->iso_resource.closure = VAR_10->closure;
 VAR_13->iso_resource.type = VAR_4;

 if (VAR_11 == VAR_6) {
  VAR_14->resource.release = VAR_8;
  VAR_15 = FUNC_1(VAR_9, &VAR_14->resource, VAR_5);
  if (VAR_15 < 0)
   goto fail;
 } else {
  VAR_14->resource.release = ((void*)0);
  VAR_14->resource.handle = -1;
  FUNC_4(VAR_14, 0);
 }
 VAR_10->handle = VAR_14->resource.handle;

 return 0;
 fail:
 FUNC_2(VAR_14);
 FUNC_2(VAR_12);
 FUNC_2(VAR_13);

 return VAR_15;
}
