
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiButton ;
typedef int uiBox ;


 int * FUNC_0 () ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (char*) ;

__attribute__((used)) static uiBox *FUNC_7(int VAR_0, int VAR_1, int VAR_2)
{
 uiBox *VAR_3;
 uiButton *VAR_4[4];



 VAR_3 = FUNC_0)();
 FUNC_3(VAR_3, 1);
 if (VAR_0 != 0) {
  VAR_4[0] = FUNC_6("First");
  FUNC_2(VAR_3, FUNC_4(VAR_4[0]), VAR_2);
 }
 if (VAR_0 != 1) {
  VAR_4[1] = FUNC_6("Second");
  FUNC_2(VAR_3, FUNC_4(VAR_4[1]), VAR_2);
 }
 if (VAR_0 != 2) {
  VAR_4[2] = FUNC_6("Third");
  FUNC_2(VAR_3, FUNC_4(VAR_4[2]), VAR_2);
 }
 if (VAR_0 != 3) {
  VAR_4[3] = FUNC_6("Fourth");
  FUNC_2(VAR_3, FUNC_4(VAR_4[3]), VAR_2);
 }
 if (VAR_1 != -1)
  FUNC_5(FUNC_4(VAR_4[VAR_1]));
 return VAR_3;
}
