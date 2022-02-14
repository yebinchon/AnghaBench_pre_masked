
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ib_pd {int dummy; } ;
struct TYPE_2__ {int pdn; } ;


 void* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (void*,void*,struct ib_pd*,int) ;
 struct ib_pd* VAR_0 ;
 struct ib_pd* VAR_1 ;
 int VAR_2 ;
 struct ib_pd* VAR_3 ;
 struct ib_pd* VAR_4 ;
 int VAR_5 ;
 struct ib_pd* VAR_6 ;
 TYPE_1__* FUNC_2 (struct ib_pd*) ;
 struct ib_pd* VAR_7 ;
 struct ib_pd* VAR_8 ;

__attribute__((used)) static void FUNC_3(struct ib_pd *VAR_9, u32 *VAR_10, int VAR_11,
       int VAR_12, int VAR_13)
{
 void *VAR_14;

 VAR_14 = FUNC_0(VAR_2, VAR_10, VAR_5);

 FUNC_1(VAR_14, VAR_14, VAR_3, 1);
 FUNC_1(VAR_14, VAR_14, VAR_6, 0xffffff);
 FUNC_1(VAR_14, VAR_14, VAR_9, FUNC_2(VAR_9)->pdn);
 FUNC_1(VAR_14, VAR_14, VAR_7, VAR_11);
 FUNC_1(VAR_14, VAR_14, VAR_0, VAR_12 & 0x3);
 FUNC_1(VAR_14, VAR_14, VAR_1, (VAR_12 >> 2) & 0x7);
 FUNC_1(VAR_14, VAR_14, VAR_8, 1);
 FUNC_1(VAR_14, VAR_14, VAR_4, VAR_13);
}
