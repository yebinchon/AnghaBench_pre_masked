
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_transaction_manager {int dummy; } ;
typedef struct dm_transaction_manager dm_space_map ;
struct dm_block_manager {int dummy; } ;
typedef int dm_block_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct dm_transaction_manager*) ;
 int FUNC_2 (struct dm_transaction_manager*) ;
 int FUNC_3 (struct dm_block_manager*) ;
 int FUNC_4 (struct dm_transaction_manager*) ;
 int FUNC_5 (struct dm_transaction_manager*,struct dm_transaction_manager*,int ,int ) ;
 struct dm_transaction_manager* FUNC_6 () ;
 int FUNC_7 (struct dm_transaction_manager*,struct dm_transaction_manager*,void*,size_t) ;
 struct dm_transaction_manager* FUNC_8 (struct dm_block_manager*,struct dm_transaction_manager*) ;
 int FUNC_9 (struct dm_transaction_manager*) ;

__attribute__((used)) static int FUNC_10(struct dm_block_manager *VAR_0,
     dm_block_t VAR_1,
     struct dm_transaction_manager **VAR_2,
     struct dm_space_map **VAR_3,
     int VAR_4,
     void *VAR_5, size_t VAR_6)
{
 int VAR_7;

 *VAR_3 = FUNC_6();
 if (FUNC_1(*VAR_3))
  return FUNC_2(*VAR_3);

 *VAR_2 = FUNC_8(VAR_0, *VAR_3);
 if (FUNC_1(*VAR_2)) {
  FUNC_4(*VAR_3);
  return FUNC_2(*VAR_2);
 }

 if (VAR_4) {
  VAR_7 = FUNC_5(*VAR_3, *VAR_2, FUNC_3(VAR_0),
       VAR_1);
  if (VAR_7) {
   FUNC_0("couldn't create metadata space map");
   goto bad;
  }

 } else {
  VAR_7 = FUNC_7(*VAR_3, *VAR_2, VAR_5, VAR_6);
  if (VAR_7) {
   FUNC_0("couldn't open metadata space map");
   goto bad;
  }
 }

 return 0;

bad:
 FUNC_9(*VAR_2);
 FUNC_4(*VAR_3);
 return VAR_7;
}
