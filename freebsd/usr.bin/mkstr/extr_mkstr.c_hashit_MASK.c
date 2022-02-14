
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash {long hval; unsigned int hpt; struct hash* hnext; } ;


 long VAR_0 ;
 struct hash** VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (int ,long,int ) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;

unsigned
FUNC_9(char *VAR_4, int VAR_5, unsigned VAR_6)
{
 int VAR_7;
 struct hash *VAR_8;
 char VAR_9[512];
 long VAR_10 = 0;
 char *VAR_11;

 if (VAR_5)
  FUNC_2(VAR_3);
 for (VAR_11 = VAR_4; *VAR_11;)
  VAR_10 = (VAR_10 << 1) + *VAR_11++;
 VAR_7 = VAR_10 % VAR_0;
 if (VAR_7 < 0)
  VAR_7 += VAR_0;
 if (VAR_5 != 0)
  for (VAR_8 = VAR_1[VAR_7]; VAR_8 != 0; VAR_8 = VAR_8->hnext)
  if (VAR_8->hval == VAR_10) {
   FUNC_4(VAR_2, (long) VAR_8->hpt, 0);
   FUNC_3(VAR_9, sizeof VAR_9, VAR_2);



   if (FUNC_7(VAR_9, VAR_4) == 0)
    break;
  }
 if (!VAR_5 || VAR_8 == 0) {
  VAR_8 = (struct hash *) FUNC_0(1, sizeof *VAR_8);
  if (VAR_8 == ((void*)0))
   FUNC_1(1, ((void*)0));
  VAR_8->hnext = VAR_1[VAR_7];
  VAR_8->hval = VAR_10;
  VAR_8->hpt = VAR_5 ? FUNC_5(VAR_3) : VAR_6;
  if (VAR_5) {
   FUNC_6(VAR_4, sizeof (char), FUNC_8(VAR_4) + 1, VAR_3);
   FUNC_6("\n", sizeof (char), 1, VAR_3);
  }
  VAR_1[VAR_7] = VAR_8;
 }



 return (VAR_8->hpt);
}
