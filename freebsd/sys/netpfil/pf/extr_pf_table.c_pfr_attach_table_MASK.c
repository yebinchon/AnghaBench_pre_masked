
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tbl ;
struct pfr_table {struct pfr_table* pfrt_anchor; struct pfr_table* pfrt_name; } ;
struct pfr_ktable {int pfrkt_flags; int * pfrkt_refcnt; struct pfr_ktable* pfrkt_root; } ;
struct pf_ruleset {struct pf_anchor* anchor; } ;
struct pf_anchor {char* path; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct pfr_table*,int) ;
 struct pfr_ktable* FUNC_2 (struct pfr_table*,int ,int) ;
 int FUNC_3 (struct pfr_ktable*,int ) ;
 int FUNC_4 (struct pfr_ktable*) ;
 struct pfr_ktable* FUNC_5 (struct pfr_table*) ;
 int FUNC_6 (struct pfr_ktable*,int) ;
 int FUNC_7 (struct pfr_table*,char*,int) ;
 int VAR_2 ;

struct pfr_ktable *
FUNC_8(struct pf_ruleset *VAR_3, char *VAR_4)
{
 struct pfr_ktable *VAR_5, *VAR_6;
 struct pfr_table VAR_7;
 struct pf_anchor *VAR_8 = VAR_3->anchor;

 FUNC_0();

 FUNC_1(&VAR_7, sizeof(VAR_7));
 FUNC_7(VAR_7.pfrt_name, VAR_4, sizeof(VAR_7.pfrt_name));
 if (VAR_8 != ((void*)0))
  FUNC_7(VAR_7.pfrt_anchor, VAR_8->path, sizeof(VAR_7.pfrt_anchor));
 VAR_5 = FUNC_5(&VAR_7);
 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_2(&VAR_7, VAR_2, 1);
  if (VAR_5 == ((void*)0))
   return (((void*)0));
  if (VAR_8 != ((void*)0)) {
   FUNC_1(VAR_7.pfrt_anchor, sizeof(VAR_7.pfrt_anchor));
   VAR_6 = FUNC_5(&VAR_7);
   if (VAR_6 == ((void*)0)) {
    VAR_6 = FUNC_2(&VAR_7, 0, 1);
    if (VAR_6 == ((void*)0)) {
     FUNC_3(VAR_5, 0);
     return (((void*)0));
    }
    FUNC_4(VAR_6);
   }
   VAR_5->pfrkt_root = VAR_6;
  }
  FUNC_4(VAR_5);
 }
 if (!VAR_5->pfrkt_refcnt[VAR_0]++)
  FUNC_6(VAR_5, VAR_5->pfrkt_flags|VAR_1);
 return (VAR_5);
}
