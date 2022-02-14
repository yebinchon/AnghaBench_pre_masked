
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grouplist {struct grouplist* gr_next; } ;
struct exportlist {int ex_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct exportlist*) ;
 int FUNC_1 (struct grouplist*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int ,...) ;

__attribute__((used)) static void
FUNC_3(struct exportlist *VAR_5, struct grouplist *VAR_6, const char *VAR_7)
{
 struct grouplist *VAR_8;

 if (!(VAR_4 & VAR_2)) {
  if (VAR_7 != ((void*)0))
   FUNC_2(VAR_1, "bad exports list line '%s': %s", VAR_3,
       VAR_7);
  else
   FUNC_2(VAR_1, "bad exports list line '%s'", VAR_3);
 }
 if (VAR_5 && (VAR_5->ex_flag & VAR_0) == 0)
  FUNC_0(VAR_5);
 while (VAR_6) {
  VAR_8 = VAR_6;
  VAR_6 = VAR_6->gr_next;
  FUNC_1(VAR_8);
 }
}
