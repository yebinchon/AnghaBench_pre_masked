
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {struct ref_update* util; } ;
struct strbuf {int dummy; } ;
struct ref_update {int refname; } ;
struct ref_transaction {size_t nr; int state; struct ref_update** updates; struct packed_transaction_backend_data* backend_data; } ;
struct ref_store {int dummy; } ;
struct packed_transaction_backend_data {int own_lock; int updates; } ;
struct packed_ref_store {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 struct packed_ref_store* FUNC_1 (struct ref_store*,int,char*) ;
 scalar_t__ FUNC_2 (struct ref_store*,int ,struct strbuf*) ;
 int FUNC_3 (struct packed_ref_store*,struct ref_transaction*) ;
 scalar_t__ FUNC_4 (int *,struct strbuf*) ;
 struct string_list_item* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct packed_ref_store*,int *,struct strbuf*) ;
 struct packed_transaction_backend_data* FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct ref_store *VAR_5,
          struct ref_transaction *VAR_6,
          struct strbuf *VAR_7)
{
 struct packed_ref_store *VAR_8 = FUNC_1(
   VAR_5,
   VAR_1 | VAR_2 | VAR_0,
   "ref_transaction_prepare");
 struct packed_transaction_backend_data *VAR_9;
 size_t VAR_10;
 int VAR_11 = VAR_4;
 VAR_9 = FUNC_9(1, sizeof(*VAR_9));
 FUNC_6(&VAR_9->updates, 0);

 VAR_6->backend_data = VAR_9;





 for (VAR_10 = 0; VAR_10 < VAR_6->nr; VAR_10++) {
  struct ref_update *VAR_12 = VAR_6->updates[VAR_10];
  struct string_list_item *VAR_13 =
   FUNC_5(&VAR_9->updates, VAR_12->refname);


  VAR_13->util = VAR_12;
 }
 FUNC_7(&VAR_9->updates);

 if (FUNC_4(&VAR_9->updates, VAR_7))
  goto failure;

 if (!FUNC_0(&VAR_8->lock)) {
  if (FUNC_2(VAR_5, 0, VAR_7))
   goto failure;
  VAR_9->own_lock = 1;
 }

 if (FUNC_8(VAR_8, &VAR_9->updates, VAR_7))
  goto failure;

 VAR_6->state = VAR_3;
 return 0;

failure:
 FUNC_3(VAR_8, VAR_6);
 return VAR_11;
}
