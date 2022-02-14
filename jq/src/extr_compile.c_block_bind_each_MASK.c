
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* next; } ;
typedef TYPE_1__ inst ;
struct TYPE_9__ {TYPE_1__* first; } ;
typedef TYPE_2__ block ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__,int,int ) ;
 int FUNC_2 (TYPE_2__,int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(block VAR_1, block VAR_2, int VAR_3) {
  FUNC_0(FUNC_2(VAR_1, VAR_3));
  VAR_3 |= VAR_0;
  int VAR_4 = 0;
  for (inst* VAR_5 = VAR_1.first; VAR_5; VAR_5 = VAR_5->next) {
    VAR_4 += FUNC_1(FUNC_3(VAR_5), VAR_2, VAR_3, 0);
  }
  return VAR_4;
}
