
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct lev_dns_delete_records {int name; } ;
struct TYPE_4__ {scalar_t__ qtype; scalar_t__ name_len; int name; } ;
typedef TYPE_1__ record_t ;


 scalar_t__ VAR_0 ;
 struct lev_dns_delete_records* FUNC_0 (scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (int,char*,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7 (record_t *VAR_3) {
  if (VAR_2 && !FUNC_1 (VAR_2->name, VAR_2->name_len, VAR_3->name, VAR_3->name_len) && VAR_2->qtype == VAR_3->qtype) {
    return;
  }

  FUNC_5 ();
  FUNC_6 (3, "Delete records for name '%.*s' of type %d.\n", VAR_3->name_len, VAR_3->name, VAR_3->qtype);
  struct lev_dns_delete_records *VAR_4 = FUNC_0 (VAR_0 + VAR_3->name_len, sizeof (struct lev_dns_delete_records) + VAR_3->name_len, VAR_3->qtype);
  FUNC_4 (VAR_4->name, VAR_3->name, VAR_3->name_len);
  VAR_2 = VAR_3;
  if (FUNC_2 () > (1 << 23)) {
    FUNC_3 (0);
  }
  VAR_1++;
}
