
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct index_item {int extra; } ;
struct TYPE_5__ {int extra; int words; } ;
typedef TYPE_1__ item_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 struct index_item* FUNC_2 (long long) ;
 int * FUNC_3 (struct index_item*,int ) ;
 TYPE_1__* FUNC_4 (long long,int ) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6 (long long VAR_5) {
  item_t *VAR_6 = FUNC_4 (VAR_5, VAR_1);
  struct index_item *VAR_7 = FUNC_2 (VAR_5);
  if (VAR_7) {
    VAR_7->extra |= VAR_0;
    VAR_4++;
    FUNC_0 (!VAR_6);
    FUNC_5 ((item_t *) VAR_7, FUNC_3 (VAR_7, 0));
    return 1;
  }
  if (!VAR_6 || (VAR_6->extra & VAR_0)) { return 0; }
  FUNC_1 (VAR_6);
  FUNC_5 (VAR_6, &VAR_6->words);
  VAR_3++;
  VAR_2++;
  return 1;
}
