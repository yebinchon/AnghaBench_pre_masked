
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstore {int valid; int metadata_wq; int * callbacks; int pending_count; scalar_t__ callback_count; scalar_t__ current_committed; scalar_t__ next_free; int * header_area; int * zero_area; int * area; int version; struct dm_exception_store* store; } ;
struct dm_exception_store {int userspace_supports_overflow; struct pstore* context; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pstore*) ;
 struct pstore* FUNC_5 (int,int ) ;
 char FUNC_6 (char) ;

__attribute__((used)) static int FUNC_7(struct dm_exception_store *VAR_6, char *VAR_7)
{
 struct pstore *VAR_8;
 int VAR_9;


 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->store = VAR_6;
 VAR_8->valid = 1;
 VAR_8->version = VAR_4;
 VAR_8->area = ((void*)0);
 VAR_8->zero_area = ((void*)0);
 VAR_8->header_area = ((void*)0);
 VAR_8->next_free = VAR_3 + 1;
 VAR_8->current_committed = 0;

 VAR_8->callback_count = 0;
 FUNC_2(&VAR_8->pending_count, 0);
 VAR_8->callbacks = ((void*)0);

 VAR_8->metadata_wq = FUNC_1("ksnaphd", VAR_5, 0);
 if (!VAR_8->metadata_wq) {
  FUNC_0("couldn't start header metadata update thread");
  VAR_9 = -VAR_1;
  goto err_workqueue;
 }

 if (VAR_7) {
  char VAR_10 = FUNC_6(VAR_7[0]);
  if (VAR_10 == 'O')
   VAR_6->userspace_supports_overflow = 1;
  else {
   FUNC_0("Unsupported persistent store option: %s", VAR_7);
   VAR_9 = -VAR_0;
   goto err_options;
  }
 }

 VAR_6->context = VAR_8;

 return 0;

err_options:
 FUNC_3(VAR_8->metadata_wq);
err_workqueue:
 FUNC_4(VAR_8);

 return VAR_9;
}
