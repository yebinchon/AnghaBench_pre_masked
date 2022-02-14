
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int*) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2+3; VAR_6++) {
  VAR_3[VAR_6] = FUNC_0(VAR_1);
  if (!VAR_3[VAR_6]) {
   while (VAR_6--)
    FUNC_2(VAR_3[VAR_6]);
   return -VAR_0;
  }
 }


 if (VAR_2 > 4)
  VAR_4 += FUNC_3(4, &VAR_5);
 if (VAR_2 > 5)
  VAR_4 += FUNC_3(5, &VAR_5);



 if (VAR_2 > 12) {
  VAR_4 += FUNC_3(11, &VAR_5);
  VAR_4 += FUNC_3(12, &VAR_5);
 }





 if (VAR_2 > 24)
  VAR_4 += FUNC_3(24, &VAR_5);

 VAR_4 += FUNC_3(VAR_2, &VAR_5);

 FUNC_1("\n");
 FUNC_1("complete (%d tests, %d failure%s)\n",
    VAR_5, VAR_4, VAR_4 == 1 ? "" : "s");

 for (VAR_6 = 0; VAR_6 < VAR_2+3; VAR_6++)
  FUNC_2(VAR_3[VAR_6]);

 return 0;
}
