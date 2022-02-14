
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct dmar_map_entry {struct dmar_domain* domain; } ;
struct dmar_domain {int entries_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int) ;
 int VAR_4 ;
 struct dmar_map_entry* FUNC_2 (int ,int) ;

struct dmar_map_entry *
FUNC_3(struct dmar_domain *VAR_5, u_int VAR_6)
{
 struct dmar_map_entry *VAR_7;

 FUNC_0((VAR_6 & ~(VAR_0)) == 0,
     ("unsupported flags %x", VAR_6));

 VAR_7 = FUNC_2(VAR_4, ((VAR_6 & VAR_0) !=
     0 ? VAR_2 : VAR_1) | VAR_3);
 if (VAR_7 != ((void*)0)) {
  VAR_7->domain = VAR_5;
  FUNC_1(&VAR_5->entries_cnt, 1);
 }
 return (VAR_7);
}
