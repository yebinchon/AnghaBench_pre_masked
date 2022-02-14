
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct agp_memory {int type; int page_count; } ;
typedef int off_t ;
struct TYPE_7__ {TYPE_1__* ops; } ;
typedef TYPE_2__ alpha_agp_info ;
struct TYPE_9__ {int num_entries; } ;
struct TYPE_8__ {void* current_size; TYPE_2__* dev_private_data; } ;
struct TYPE_6__ {int (* bind ) (TYPE_2__*,int,struct agp_memory*) ;} ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (void*) ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_1 (struct agp_memory*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,int,struct agp_memory*) ;

__attribute__((used)) static int FUNC_4(struct agp_memory *VAR_3, off_t VAR_4,
     int VAR_5)
{
 alpha_agp_info *VAR_6 = VAR_2->dev_private_data;
 int VAR_7, VAR_8;
 void *VAR_9;

 if (VAR_5 >= VAR_0 || VAR_3->type >= VAR_0)
  return -VAR_1;

 VAR_9 = VAR_2->current_size;
 VAR_7 = FUNC_0(VAR_9)->num_entries;
 if ((VAR_4 + VAR_3->page_count) > VAR_7)
  return -VAR_1;

 VAR_8 = VAR_6->ops->bind(VAR_6, VAR_4, VAR_3);
 FUNC_2();
 FUNC_1(VAR_3);

 return VAR_8;
}
