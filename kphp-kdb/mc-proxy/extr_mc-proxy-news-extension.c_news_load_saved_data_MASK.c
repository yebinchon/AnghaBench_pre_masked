
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keep_mc_store {int magic; scalar_t__ len; scalar_t__ user_id; } ;
struct connection {int Tmp; } ;
typedef int nb_iterator_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct keep_mc_store* VAR_5 ;
 int FUNC_0 (int) ;
 struct keep_mc_store VAR_6 ;
 int FUNC_1 (int *,struct keep_mc_store*,int) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ VAR_7 ;

void FUNC_3 (struct connection *VAR_8) {
  struct keep_mc_store *VAR_9 = 0;

  if (!VAR_8->Tmp) {
    VAR_7 = 0;
    return;
  }

  nb_iterator_t VAR_10;
  FUNC_2 (&VAR_10, VAR_8->Tmp);
  int VAR_11 = FUNC_1 (&VAR_10, &VAR_6, sizeof (struct keep_mc_store));
  if (VAR_11 != sizeof (struct keep_mc_store)) {
    VAR_7 = 0;
    return;
  }
  VAR_9 = &VAR_6;
  FUNC_0 (VAR_9->magic = VAR_2);

  VAR_4 = 0;
  VAR_7 = VAR_9->user_id;

  VAR_4 = (VAR_9->len < VAR_0 ? VAR_9->len : VAR_0);
  if ((VAR_3 || VAR_1)) {
    FUNC_0 (FUNC_1 (&VAR_10, VAR_5, VAR_4 * 4) == VAR_4 * 4);
  } else {
    FUNC_0 (FUNC_1 (&VAR_10, VAR_5, VAR_4 * 12) == VAR_4 * 12);
  }


}
