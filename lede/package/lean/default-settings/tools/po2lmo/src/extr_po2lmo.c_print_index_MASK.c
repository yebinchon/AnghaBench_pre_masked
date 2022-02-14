
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int offset; int val_id; int key_id; } ;
typedef TYPE_1__ lmo_entry_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (void*,int,int,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, int VAR_2, FILE *VAR_3)
{
 lmo_entry_t *VAR_4;

 FUNC_1(VAR_1, VAR_2, sizeof(*VAR_4), VAR_0);

 for (VAR_4 = VAR_1; VAR_2 > 0; VAR_2--, VAR_4++)
 {
  FUNC_0(VAR_4->key_id, VAR_3);
  FUNC_0(VAR_4->val_id, VAR_3);
  FUNC_0(VAR_4->offset, VAR_3);
  FUNC_0(VAR_4->length, VAR_3);
 }
}
