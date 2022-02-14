
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iser_device {int ig_list; int refcount; } ;
struct TYPE_2__ {int device_list_mutex; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct iser_device*) ;
 int FUNC_1 (char*,struct iser_device*,int ) ;
 int FUNC_2 (struct iser_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct iser_device *VAR_1)
{
 FUNC_4(&VAR_0.device_list_mutex);
 VAR_1->refcount--;
 FUNC_1("device %p refcount %d\n", VAR_1, VAR_1->refcount);
 if (!VAR_1->refcount) {
  FUNC_0(VAR_1);
  FUNC_3(&VAR_1->ig_list);
  FUNC_2(VAR_1);
 }
 FUNC_5(&VAR_0.device_list_mutex);
}
