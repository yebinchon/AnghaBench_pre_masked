
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hent {int h_count; float h_feetpages; char* h_name; struct hent* h_link; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,size_t) ;
 struct hent** VAR_1 ;
 size_t VAR_2 ;
 double VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct hent**,size_t,int,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3(void)
{
 struct hent **VAR_5;
 register struct hent *VAR_6, **VAR_7;
 register int VAR_8, VAR_9;
 size_t VAR_10;
 float VAR_11;

 VAR_6 = VAR_1[0];
 VAR_8 = 1;
 VAR_5 = (struct hent **) FUNC_0(sizeof VAR_6, VAR_2);
 for (VAR_7 = VAR_5, VAR_10 = VAR_2; VAR_10--; VAR_7++) {
  while (VAR_6 == ((void*)0))
   VAR_6 = VAR_1[VAR_8++];
  *VAR_7 = VAR_6;
  VAR_6 = VAR_6->h_link;
 }
 FUNC_2(VAR_5, VAR_2, sizeof VAR_6, VAR_4);
 FUNC_1("  Login               pages/feet   runs    price\n");
 VAR_11 = 0.0;
 VAR_9 = 0;
 for (VAR_7 = VAR_5, VAR_10 = VAR_2; VAR_10--; VAR_7++) {
  VAR_6 = *VAR_7;
  VAR_9 += VAR_6->h_count;
  VAR_11 += VAR_6->h_feetpages;
  FUNC_1("%-24s %7.2f %4d   $%6.2f\n", VAR_6->h_name,
      VAR_6->h_feetpages, VAR_6->h_count, VAR_6->h_feetpages * VAR_3);
 }
 if (VAR_0) {
  FUNC_1("\n");
  FUNC_1("%-24s %7.2f %4d   $%6.2f\n", "total", VAR_11,
      VAR_9, VAR_11 * VAR_3);
 }
}
