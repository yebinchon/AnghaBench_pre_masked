
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keep_mc_store {int magic; scalar_t__ len; scalar_t__ tag; } ;
struct connection {int Tmp; } ;
typedef int nb_iterator_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct keep_mc_store* VAR_3 ;
 int FUNC_0 (int) ;
 struct keep_mc_store VAR_4 ;
 int FUNC_1 (int *,struct keep_mc_store*,int) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int,char*,...) ;

void FUNC_4 (struct connection *VAR_6) {
  struct keep_mc_store *VAR_7 = 0;

  if (!VAR_6->Tmp) {
    VAR_5 = 0;
    FUNC_3 (4, "newsr_load_saved_data: !c->Tmp\n");
    return;
  }

  nb_iterator_t VAR_8;
  FUNC_2 (&VAR_8, VAR_6->Tmp);
  int VAR_9 = FUNC_1 (&VAR_8, &VAR_4, sizeof (struct keep_mc_store));
  if (VAR_9 != sizeof (struct keep_mc_store)) {
    VAR_5 = 0;
    FUNC_3 (4, "newsr_load_saved_data: l = %d\n", VAR_9);
    return;
  }
  VAR_7 = &VAR_4;
  FUNC_0 (VAR_7->magic = VAR_1);

  VAR_2 = 0;
  VAR_5 = VAR_7->tag;

  VAR_2 = (VAR_7->len < VAR_0 ? VAR_7->len : VAR_0);
  FUNC_0 (FUNC_1 (&VAR_8, VAR_3, VAR_2 * 8) == VAR_2 * 8);
}
