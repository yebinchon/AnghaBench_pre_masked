
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csum_state {int dummy; } ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int,char*,char*,size_t) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,size_t,int,int *) ;
 int FUNC_5 (int *,char*,size_t,struct csum_state*) ;

int
FUNC_6(FILE *VAR_2, char *VAR_3, size_t VAR_4, struct csum_state *VAR_5)
{
 char VAR_6[VAR_0];
 size_t VAR_7 = sizeof(VAR_6);
 FILE *VAR_8;
 int VAR_9;

 FUNC_0(2, "writing out file, name=%s, len=%zu",
  VAR_3, VAR_4);

 VAR_1 = 0;
 VAR_8 = FUNC_3(VAR_3,"r");
 if (VAR_1) {
  FUNC_1("unable to open file: %s", VAR_3);
  return -1;
 }

 while (VAR_4 > 0) {
  if (VAR_4 < VAR_7)
   VAR_7 = VAR_4;


  VAR_1 = 0;
  FUNC_4(VAR_6, VAR_7, 1, VAR_8);
  if (VAR_1 != 0) {
   FUNC_1("unable to read from file: %s",VAR_3);
   VAR_9 = -1;
   break;
  }

  VAR_9 = FUNC_5(VAR_2, VAR_6, VAR_7, VAR_5);
  if (VAR_9)
   break;

  VAR_4 -= VAR_7;
 }

 FUNC_2(VAR_8);
 return VAR_9;
}
