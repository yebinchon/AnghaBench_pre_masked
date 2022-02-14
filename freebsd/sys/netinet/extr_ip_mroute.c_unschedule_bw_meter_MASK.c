
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bw_meter {int bm_flags; int bm_time_hash; struct bw_meter* bm_time_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct bw_meter** VAR_2 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct bw_meter *VAR_3)
{
    int VAR_4;
    struct bw_meter *VAR_5, *VAR_6;

    FUNC_0();

    if (!(VAR_3->bm_flags & VAR_1))
 return;




    VAR_4 = VAR_3->bm_time_hash;
    if (VAR_4 >= VAR_0)
 return;

    for (VAR_5 = ((void*)0), VAR_6 = VAR_2[VAR_4];
      VAR_6 != ((void*)0); VAR_5 = VAR_6, VAR_6 = VAR_6->bm_time_next)
 if (VAR_6 == VAR_3)
     break;

    if (VAR_6 == ((void*)0))
 FUNC_1("unschedule_bw_meter: bw_meter entry not found");

    if (VAR_5 != ((void*)0))
 VAR_5->bm_time_next = VAR_3->bm_time_next;
    else
 VAR_2[VAR_4] = VAR_3->bm_time_next;

    VAR_3->bm_time_next = ((void*)0);
    VAR_3->bm_time_hash = VAR_0;
}
