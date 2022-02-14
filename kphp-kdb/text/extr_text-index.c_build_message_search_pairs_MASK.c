
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct search_index_pair {int idx; int crc; } ;
struct TYPE_3__ {int local_id; int len; scalar_t__ text; } ;
typedef TYPE_1__ message_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,int) ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3 (message_t *VAR_5) {
  FUNC_0 (VAR_3 >= VAR_2 + VAR_0);

  int VAR_6 = FUNC_2 (VAR_2, VAR_5->text + VAR_4, VAR_5->len);
  FUNC_0 (VAR_6 >= 0 && VAR_6 < VAR_0);
  VAR_2[VAR_6] = 0;



  int VAR_7 = FUNC_1 (VAR_2, VAR_6);

  VAR_3 -= VAR_7 * sizeof (struct search_index_pair);
  FUNC_0 (VAR_2 <= VAR_3);

  struct search_index_pair *VAR_8 = (struct search_index_pair *)VAR_3;

  int VAR_9;
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++, VAR_8++) {
    VAR_8->crc = VAR_1[VAR_9];
    VAR_8->idx = VAR_5->local_id;
  }
}
