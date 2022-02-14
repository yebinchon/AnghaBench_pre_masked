
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_unaligned_load; int (* blkstore ) (int,int,int,int) ;int (* blkfetch ) (int,int,int,int) ;} ;
struct TYPE_4__ {TYPE_1__ x; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int,int,int,int) ;
 int FUNC_3 (int,int,int,int) ;
 int FUNC_4 (int,int,int,int) ;
 int FUNC_5 (int,int,int,int) ;
 int FUNC_6 (int,int,int,int) ;

__attribute__((used)) static void FUNC_7(int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9[]) {
 int VAR_10;

 FUNC_0(VAR_0->x.max_unaligned_load);
 if (VAR_3 > VAR_0->x.max_unaligned_load
 && (VAR_3 > VAR_2 || VAR_3 > VAR_1))
  VAR_3 = VAR_0->x.max_unaligned_load;
 for (VAR_10 = 0; VAR_10+VAR_3 < VAR_8; VAR_10 += 2*VAR_3) {
  (*VAR_0->x.blkfetch)(VAR_3, VAR_7+VAR_10, VAR_6, VAR_9[0]);
  (*VAR_0->x.blkfetch)(VAR_3, VAR_7+VAR_10+VAR_3, VAR_6, VAR_9[1]);
  (*VAR_0->x.blkstore)(VAR_3, VAR_5+VAR_10, VAR_4, VAR_9[0]);
  (*VAR_0->x.blkstore)(VAR_3, VAR_5+VAR_10+VAR_3, VAR_4, VAR_9[1]);
 }
 if (VAR_10 < VAR_8) {
  (*VAR_0->x.blkfetch)(VAR_3, VAR_10+VAR_7, VAR_6, VAR_9[0]);
  (*VAR_0->x.blkstore)(VAR_3, VAR_10+VAR_5, VAR_4, VAR_9[0]);
 }
}
