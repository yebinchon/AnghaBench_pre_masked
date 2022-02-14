
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hent {char* h_name; double h_feetpages; struct hent* h_link; scalar_t__ h_count; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char const*) ;
 struct hent** VAR_0 ;
 int VAR_1 ;
 struct hent* FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static struct hent *
FUNC_5(const char VAR_2[])
{
 register struct hent *VAR_3;
 register int VAR_4;

 if ((VAR_3 = FUNC_2(VAR_2)) != ((void*)0))
  return(VAR_3);
 VAR_4 = FUNC_1(VAR_2);
 VAR_1++;
 VAR_3 = (struct hent *) FUNC_0(sizeof *VAR_3, (size_t)1);
 VAR_3->h_name = (char *) FUNC_0(sizeof(char), FUNC_4(VAR_2)+1);
 FUNC_3(VAR_3->h_name, VAR_2);
 VAR_3->h_feetpages = 0.0;
 VAR_3->h_count = 0;
 VAR_3->h_link = VAR_0[VAR_4];
 VAR_0[VAR_4] = VAR_3;
 return(VAR_3);
}
