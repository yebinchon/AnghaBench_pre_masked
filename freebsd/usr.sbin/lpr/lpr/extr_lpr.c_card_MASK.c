
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,size_t) ;

__attribute__((used)) static void
FUNC_1(int VAR_2, const char *VAR_3)
{
 char VAR_4[VAR_0];
 register char *VAR_5 = VAR_4;
 size_t VAR_6 = 2;

 *VAR_5++ = VAR_2;
 while ((VAR_2 = *VAR_3++) != '\0' && VAR_6 < sizeof(VAR_4)) {
  *VAR_5++ = (VAR_2 == '\n') ? ' ' : VAR_2;
  VAR_6++;
 }
 *VAR_5++ = '\n';
 FUNC_0(VAR_1, VAR_4, VAR_6);
}
