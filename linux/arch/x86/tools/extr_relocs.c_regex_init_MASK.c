
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int errbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int,int *,char*,int) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static void FUNC_3(int VAR_7)
{
        char VAR_8[128];
        int VAR_9;
 int VAR_10;

 if (VAR_7)
  VAR_3 = VAR_6;
 else
  VAR_3 = VAR_5;

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  if (!VAR_3[VAR_10])
   continue;

  VAR_9 = FUNC_1(&VAR_4[VAR_10], VAR_3[VAR_10],
         VAR_0|VAR_1);

  if (VAR_9) {
   FUNC_2(VAR_9, &VAR_4[VAR_10], VAR_8, sizeof(VAR_8));
   FUNC_0("%s", VAR_8);
  }
        }
}
