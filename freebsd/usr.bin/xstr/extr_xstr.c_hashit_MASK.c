
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash {int hnew; scalar_t__ hpt; struct hash* hnext; int hstr; } ;
typedef scalar_t__ off_t ;


 struct hash* VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static off_t
FUNC_7(char *VAR_2, int VAR_3)
{
 int VAR_4;
 struct hash *VAR_5, *VAR_6;

 VAR_5 = VAR_6 = &VAR_0[FUNC_4(VAR_2) & 0177];
 while (VAR_5->hnext) {
  VAR_5 = VAR_5->hnext;
  VAR_4 = FUNC_3(VAR_2, VAR_5->hstr);
  if (VAR_4 >= 0)
   return (VAR_5->hpt + VAR_4);
 }
 if ((VAR_5 = (struct hash *) FUNC_0(1, sizeof (*VAR_5))) == ((void*)0))
  FUNC_2(8, "calloc");
 VAR_5->hpt = VAR_1;
 if (!(VAR_5->hstr = FUNC_5(VAR_2)))
  FUNC_1(1, ((void*)0));
 VAR_1 += FUNC_6(VAR_5->hstr) + 1;
 VAR_5->hnext = VAR_6->hnext;
 VAR_5->hnew = VAR_3;
 VAR_6->hnext = VAR_5;
 return (VAR_5->hpt);
}
