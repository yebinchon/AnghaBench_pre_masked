
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hent {double h_feetpages; char* h_name; int h_count; struct hent* h_link; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,char*,double,char*,int) ;
 struct hent** VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void
FUNC_6(void)
{
 register struct hent *VAR_5;
 register int VAR_6;
 FILE *VAR_7;

 if ((VAR_7 = FUNC_3(VAR_4, "w")) == ((void*)0)) {
  FUNC_5("%s", VAR_4);
  VAR_2++;
  return;
 }
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = VAR_3[VAR_6];
  while (VAR_5 != ((void*)0)) {
   FUNC_4(VAR_7, "%7.2f\t%s\t%d\n", VAR_5->h_feetpages,
       VAR_5->h_name, VAR_5->h_count);
   VAR_5 = VAR_5->h_link;
  }
 }
 FUNC_2(VAR_7);
 if (FUNC_1(VAR_7)) {
  FUNC_5("%s", VAR_4);
  VAR_2++;
 }
 FUNC_0(VAR_7);
 if ((VAR_7 = FUNC_3(VAR_1, "w")) == ((void*)0))
  FUNC_5("%s", VAR_1);
 else
  FUNC_0(VAR_7);
}
