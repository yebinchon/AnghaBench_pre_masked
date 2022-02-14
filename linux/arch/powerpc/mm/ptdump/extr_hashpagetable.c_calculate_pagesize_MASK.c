
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_state {int seq; } ;


 int FUNC_0 (int ,char*,char*,int,char const) ;

__attribute__((used)) static int FUNC_1(struct pg_state *VAR_0, int VAR_1, char VAR_2[])
{
 static const char VAR_3[] = "BKMGTPE";
 const char *VAR_4 = VAR_3;

 while (VAR_1 > 9 && VAR_4[1]) {
  VAR_1 -= 10;
  VAR_4++;
 }
 FUNC_0(VAR_0->seq, "  %s_ps: %i%c\t", VAR_2, 1<<VAR_1, *VAR_4);
 return VAR_1;
}
