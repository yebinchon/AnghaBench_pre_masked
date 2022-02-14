
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* hnext; } ;
typedef TYPE_1__ place_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 int FUNC_0 (int ) ;
 int const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline int FUNC_2 (int VAR_6) {
  FUNC_0 (VAR_0);
  const int VAR_7 = VAR_3;
  int VAR_8 = VAR_5, VAR_9 = VAR_1, VAR_10 = VAR_6 * 10;
  do {
    place_t *VAR_11 = VAR_2[VAR_8];
    while (VAR_11) {
      FUNC_1 (VAR_11);
      VAR_6--;
      VAR_11 = VAR_11->hnext;
    }
    VAR_8++;
    if (VAR_8 >= VAR_9) {
      VAR_8 -= VAR_9;
    }
  } while (VAR_8 != VAR_5 && VAR_6 > 0 && --VAR_10 > 0);
  VAR_5 = VAR_8;
  VAR_4 += VAR_7 - VAR_3;
  return 1;
}
