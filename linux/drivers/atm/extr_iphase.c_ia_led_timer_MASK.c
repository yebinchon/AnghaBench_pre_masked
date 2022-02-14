
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_char ;
typedef int u32 ;
struct timer_list {int dummy; } ;
struct TYPE_4__ {int tx_lock; int close_wait; scalar_t__ close_pending; scalar_t__ reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__** VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_7) {
  unsigned long VAR_8;
   static u_char VAR_9[8] = {0, 0, 0, 0, 0, 0, 0, 0};
        u_char VAR_10;
        static u32 VAR_11;
        for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
           if (VAR_3[VAR_10]) {
       VAR_11 = FUNC_3(VAR_3[VAR_10]->reg+VAR_2);
       if (VAR_9[VAR_10] == 0) {
   VAR_9[VAR_10]++;
                 VAR_11 &= (~VAR_0);
                 FUNC_7(VAR_11, VAR_3[VAR_10]->reg+VAR_2);
                 FUNC_1(VAR_3[VAR_10]);
              }
              else {
   VAR_9[VAR_10] = 0;
   VAR_11 |= VAR_0;
                 FUNC_7(VAR_11, VAR_3[VAR_10]->reg+VAR_2);
                 FUNC_4(&VAR_3[VAR_10]->tx_lock, VAR_8);
                 if (VAR_3[VAR_10]->close_pending)
                    FUNC_6(&VAR_3[VAR_10]->close_wait);
                 FUNC_0(VAR_3[VAR_10]);
                 FUNC_5(&VAR_3[VAR_10]->tx_lock, VAR_8);
              }
           }
        }
 FUNC_2(&VAR_4, VAR_6 + VAR_1 / 4);
  return;
}
