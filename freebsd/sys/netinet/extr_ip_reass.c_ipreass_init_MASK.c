
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipq {int dummy; } ;
struct TYPE_2__ {scalar_t__ count; int lock; int head; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 () ;
 int VAR_12 ;
 int FUNC_4 (int,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int *,char*,int *,int) ;
 int VAR_15 ;
 int FUNC_6 (char*,int,int *,int *,int *,int *,int ,int ) ;
 int FUNC_7 (int ,int) ;

void
FUNC_8(void)
{
 int VAR_16;

 for (int VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {
  FUNC_2(&VAR_7[VAR_17].head);
  FUNC_5(&VAR_7[VAR_17].lock, "IP reassembly", ((void*)0),
      VAR_4 | VAR_5);
  VAR_7[VAR_17].count = 0;
 }
 VAR_8 = FUNC_3();
 VAR_11 = 16;
 VAR_9 = FUNC_6("ipq", sizeof(struct ipq), ((void*)0), ((void*)0), ((void*)0),
     ((void*)0), VAR_6, 0);
 VAR_16 = VAR_2;
 VAR_16 = FUNC_7(VAR_9, VAR_16);
 VAR_10 = FUNC_4(VAR_16 / (VAR_1 / 2), 1);

 if (FUNC_1(VAR_12)) {
  VAR_14 = VAR_3;
  FUNC_0(VAR_15, VAR_13,
      ((void*)0), VAR_0);
 }
}
