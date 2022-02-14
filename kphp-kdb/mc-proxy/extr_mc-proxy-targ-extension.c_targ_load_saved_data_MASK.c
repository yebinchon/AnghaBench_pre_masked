
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keep_mc_store {int magic; scalar_t__ tag; scalar_t__ len; } ;
struct connection {int Tmp; } ;
typedef int nb_iterator_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct keep_mc_store* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct keep_mc_store VAR_4 ;
 int FUNC_1 (int *,struct keep_mc_store*,int) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_3 (struct connection *VAR_6) {
  struct keep_mc_store *VAR_7 = 0;

  if (!VAR_6->Tmp) {
    VAR_5 = 0;
    return;
  }

  nb_iterator_t VAR_8;
  FUNC_2 (&VAR_8, VAR_6->Tmp);
  int VAR_9 = FUNC_1 (&VAR_8, &VAR_4, sizeof (struct keep_mc_store));
  if (VAR_9 != sizeof (struct keep_mc_store)) {
    VAR_5 = 0;
    return;
  }
  VAR_7 = &VAR_4;
  FUNC_0 (VAR_7->magic = VAR_3);

  VAR_1 = 0;
  VAR_5 = VAR_7->tag;


  VAR_1 = (VAR_7->len < VAR_0 ? VAR_7->len : VAR_0);
  if (VAR_5 < 0) {
    FUNC_0 (FUNC_1 (&VAR_8, VAR_2, VAR_1 * 4) == VAR_1 * 4);
  } else if (VAR_5 > 0) {
    FUNC_0 (FUNC_1 (&VAR_8, VAR_2, VAR_1) == VAR_1);
  }
}
