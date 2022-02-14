
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
typedef TYPE_2__* uma_slab_t ;
typedef TYPE_3__* uma_keg_t ;
struct TYPE_13__ {scalar_t__ uk_free; scalar_t__ uk_reserve; } ;
struct TYPE_12__ {scalar_t__ us_freecount; TYPE_3__* us_keg; } ;
struct TYPE_11__ {int uz_flags; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 void* FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int VAR_3 ;
 TYPE_2__* FUNC_3 (TYPE_1__*,TYPE_3__*,int,int) ;

__attribute__((used)) static int
FUNC_4(uma_zone_t VAR_4, void **VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 uma_slab_t VAR_9;
 uma_keg_t VAR_10;



 int VAR_11;

 VAR_9 = ((void*)0);
 VAR_10 = ((void*)0);

 for (VAR_11 = 0; VAR_11 < VAR_6; ) {
  if ((VAR_9 = FUNC_3(VAR_4, VAR_10, VAR_7, VAR_8)) == ((void*)0))
   break;
  VAR_10 = VAR_9->us_keg;



  while (VAR_9->us_freecount && VAR_11 < VAR_6) {
   VAR_5[VAR_11++] = FUNC_2(VAR_10, VAR_9);
   if (VAR_10->uk_free <= VAR_10->uk_reserve)
    break;
  }

  VAR_8 &= ~VAR_1;
  VAR_8 |= VAR_0;
 }
 if (VAR_9 != ((void*)0))
  FUNC_0(VAR_10);

 return VAR_11;
}
