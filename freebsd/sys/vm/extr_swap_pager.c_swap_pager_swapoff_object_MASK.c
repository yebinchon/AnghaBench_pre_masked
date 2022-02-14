
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef TYPE_3__* vm_object_t ;
struct swdevt {int dummy; } ;
struct swblk {scalar_t__* d; scalar_t__ p; } ;
typedef scalar_t__ daddr_t ;
struct TYPE_6__ {int swp_blks; } ;
struct TYPE_7__ {TYPE_1__ swp; } ;
struct TYPE_8__ {TYPE_2__ un_pager; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct swblk* FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,struct swdevt*) ;

__attribute__((used)) static void
FUNC_3(struct swdevt *VAR_4, vm_object_t VAR_5)
{
 struct swblk *VAR_6;
 vm_pindex_t VAR_7, VAR_8;
 daddr_t VAR_9, VAR_10, VAR_11;
 int VAR_12;

 VAR_10 = 0;
 for (VAR_7 = 0; (VAR_6 = FUNC_0(
     &VAR_5->un_pager.swp.swp_blks, VAR_7)) != ((void*)0); ) {
  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
   VAR_9 = VAR_6->d[VAR_12];
   if (!FUNC_2(VAR_9, VAR_4))
    VAR_9 = VAR_2;





   if (VAR_10 == 0) {
    if (VAR_9 != VAR_2) {
     VAR_11 = VAR_9;
     VAR_8 = VAR_6->p + VAR_12;
     VAR_10 = 1;
    }
    continue;
   }






   if (VAR_10 < VAR_0 / VAR_1 &&
       VAR_11 + VAR_10 == VAR_9 &&
       VAR_8 + VAR_10 == VAR_6->p + VAR_12) {
    ++VAR_10;
    continue;
   }
   FUNC_1(VAR_5, VAR_8, VAR_10);
   VAR_10 = 0;
   break;
  }
  if (VAR_12 == VAR_3)
   VAR_7 = VAR_6->p + VAR_3;
 }
 if (VAR_10 > 0)
  FUNC_1(VAR_5, VAR_8, VAR_10);
}
