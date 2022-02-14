
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int u_long ;
struct tte {int tte_data; } ;
struct TYPE_5__ {int tte_list; } ;
struct TYPE_6__ {int oflags; TYPE_1__ md; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 struct tte* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct tte*,int ) ;
 struct tte* FUNC_3 (struct tte*,int ) ;
 int FUNC_4 (int *,struct tte*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (TYPE_2__*) ;

int
FUNC_9(vm_page_t VAR_7)
{
 struct tte *VAR_8;
 struct tte *VAR_9;
 struct tte *VAR_10;
 u_long VAR_11;
 int VAR_12;

 FUNC_0((VAR_7->oflags & VAR_4) == 0,
     ("pmap_ts_referenced: page %p is not managed", VAR_7));
 VAR_12 = 0;
 FUNC_6(&VAR_6);
 if ((VAR_10 = FUNC_1(&VAR_7->md.tte_list)) != ((void*)0)) {
  VAR_8 = VAR_10;
  do {
   VAR_9 = FUNC_3(VAR_10, VAR_5);
   FUNC_4(&VAR_7->md.tte_list, VAR_10, VAR_5);
   FUNC_2(&VAR_7->md.tte_list, VAR_10, VAR_5);
   if ((VAR_10->tte_data & VAR_1) == 0)
    continue;
   VAR_11 = FUNC_5(&VAR_10->tte_data, VAR_2);
   if ((VAR_11 & VAR_3) != 0)
    FUNC_8(VAR_7);
   if ((VAR_11 & VAR_2) != 0 && ++VAR_12 >=
       VAR_0)
    break;
  } while ((VAR_10 = VAR_9) != ((void*)0) && VAR_10 != VAR_8);
 }
 FUNC_7(&VAR_6);
 return (VAR_12);
}
