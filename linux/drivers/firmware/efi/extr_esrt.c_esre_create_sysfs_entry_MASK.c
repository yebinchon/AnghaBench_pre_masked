
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int kset; } ;
struct TYPE_4__ {void* esre1; } ;
struct esre_entry {int list; TYPE_2__ kobj; TYPE_1__ esre; } ;
struct TYPE_6__ {int fw_resource_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct esre_entry*) ;
 int FUNC_1 (TYPE_2__*,int *,int *,char*,int) ;
 struct esre_entry* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_6, int VAR_7)
{
 struct esre_entry *VAR_8;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->kobj.kset = VAR_5;

 if (VAR_4->fw_resource_version == 1) {
  int VAR_9 = 0;

  VAR_8->esre.esre1 = VAR_6;
  VAR_9 = FUNC_1(&VAR_8->kobj, &VAR_3, ((void*)0),
       "entry%d", VAR_7);
  if (VAR_9) {
   FUNC_0(VAR_8);
   return VAR_9;
  }
 }

 FUNC_3(&VAR_8->list, &VAR_2);
 return 0;
}
