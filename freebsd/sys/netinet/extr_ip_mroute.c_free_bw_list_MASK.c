
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bw_meter {struct bw_meter* bm_mfc_next; } ;


 int VAR_0 ;
 int FUNC_0 (struct bw_meter*,int ) ;
 int FUNC_1 (struct bw_meter*) ;

__attribute__((used)) static void
FUNC_2(struct bw_meter *VAR_1)
{
    while (VAR_1 != ((void*)0)) {
 struct bw_meter *VAR_2 = VAR_1;

 VAR_1 = VAR_1->bm_mfc_next;
 FUNC_1(VAR_2);
 FUNC_0(VAR_2, VAR_0);
    }
}
