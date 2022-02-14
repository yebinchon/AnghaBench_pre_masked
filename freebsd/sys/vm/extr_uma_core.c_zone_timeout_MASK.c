
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
typedef TYPE_2__* uma_keg_t ;
typedef int u_int ;
struct uma_hash {int uh_hashsize; } ;
struct TYPE_9__ {int uk_flags; int uk_pages; int uk_ppera; struct uma_hash uk_hash; } ;
struct TYPE_8__ {int uz_flags; int * uz_domain; TYPE_2__* uz_keg; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct uma_hash*,int) ;
 scalar_t__ FUNC_6 (struct uma_hash*,struct uma_hash*) ;
 int FUNC_7 (struct uma_hash*) ;
 int VAR_2 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(uma_zone_t VAR_3)
{
 uma_keg_t VAR_4;
 u_int VAR_5;

 if ((VAR_3->uz_flags & VAR_0) != 0)
  goto update_wss;

 VAR_4 = VAR_3->uz_keg;
 FUNC_0(VAR_4);







 if (VAR_4->uk_flags & VAR_1 &&
     (VAR_5 = VAR_4->uk_pages / VAR_4->uk_ppera) >
      VAR_4->uk_hash.uh_hashsize) {
  struct uma_hash VAR_6;
  struct uma_hash VAR_7;
  int VAR_8;







  FUNC_1(VAR_4);
  VAR_8 = FUNC_5(&VAR_6, 1 << FUNC_4(VAR_5));
  FUNC_0(VAR_4);
  if (VAR_8) {
   if (FUNC_6(&VAR_4->uk_hash, &VAR_6)) {
    VAR_7 = VAR_4->uk_hash;
    VAR_4->uk_hash = VAR_6;
   } else
    VAR_7 = VAR_6;

   FUNC_1(VAR_4);
   FUNC_7(&VAR_7);
   return;
  }
 }
 FUNC_1(VAR_4);

update_wss:
 FUNC_2(VAR_3);
 for (int VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  FUNC_8(&VAR_3->uz_domain[VAR_9]);
 FUNC_3(VAR_3);
}
