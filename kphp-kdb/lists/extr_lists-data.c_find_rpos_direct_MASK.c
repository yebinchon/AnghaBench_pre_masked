
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int object_id_t ;
struct TYPE_3__ {int N; int A; } ;
typedef TYPE_1__ listree_direct_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3 (listree_direct_t *VAR_0, object_id_t VAR_1) {
  int VAR_2 = -1, VAR_3 = VAR_0->N, VAR_4;


  while (VAR_3 - VAR_2 > 1) {
    VAR_4 = (VAR_2 + VAR_3) / 2;
    if (FUNC_2 (VAR_1, FUNC_0 (VAR_0->A, VAR_4)) <= 0) {
      VAR_3 = VAR_4;
    } else {
      VAR_2 = VAR_4;
    }
  }
  FUNC_1 (VAR_3 >= 0 && VAR_3 <= VAR_0->N);
  return VAR_0->N - VAR_3;
}
