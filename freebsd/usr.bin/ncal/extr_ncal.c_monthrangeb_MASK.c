
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ws ;
typedef int wchar_t ;
struct weekdays {char** names; } ;
struct monthlines {int * extralen; scalar_t__* lines; int * name; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_3 (int,int ) ;
 char* FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int,int,int,struct monthlines*) ;
 int FUNC_6 (struct weekdays*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (int *,int,char*,int *,int) ;
 int FUNC_10 (int *,int *,int) ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static void
FUNC_12(int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct monthlines VAR_8[12];
 struct weekdays VAR_9;
 char VAR_10[VAR_0], VAR_11[VAR_0];
 wchar_t VAR_12[VAR_0], VAR_13[VAR_0];
 const char *VAR_14;
 int VAR_15, VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19, VAR_20;
 int VAR_21;
 int VAR_22 = -1;

 VAR_17 = VAR_5 ? 2 : 3;
 VAR_18 = VAR_5 ? VAR_2 : VAR_1;
 VAR_14 = (VAR_17 == 2) ? " " : "";

 while (VAR_6 != 0) {
  FUNC_0(VAR_4, VAR_3);
  VAR_6--;
  VAR_7++;
 }
 VAR_19 = VAR_3 * 12 + VAR_4 - 1;
 VAR_20 = VAR_19 + VAR_7;

 FUNC_6(&VAR_9);






 VAR_21 = (VAR_7 >= VAR_17 - 1) && (FUNC_1(VAR_19) - 1) % VAR_17 == 0;

 VAR_4 = VAR_19;
 while (VAR_4 <= VAR_20) {
  int VAR_23 = 0;
  for (VAR_15 = 0; VAR_15 != VAR_17 && VAR_4 + VAR_15 <= VAR_20; VAR_15++) {
   FUNC_5(FUNC_2(VAR_4 + VAR_15), FUNC_1(VAR_4 + VAR_15) - 1, VAR_5, VAR_8 + VAR_15);
   VAR_23++;
  }


  if (VAR_4 != VAR_19)
   FUNC_7("\n");


  if (VAR_21 && FUNC_2(VAR_4) != VAR_22) {
   FUNC_8(VAR_10, "%d", FUNC_2(VAR_4));
   FUNC_7("%s\n", FUNC_4(VAR_11, VAR_10, VAR_17 * VAR_18));
   VAR_22 = FUNC_2(VAR_4);
  }


  for (VAR_15 = 0; VAR_15 < VAR_23; VAR_15++)
   if (VAR_21)
    FUNC_11(L"%-*ls  ",
        VAR_18, FUNC_10(VAR_12, VAR_8[VAR_15].name, VAR_18));
   else {
    FUNC_9(VAR_12, sizeof(VAR_12)/sizeof(VAR_12[0]),
        L"%-ls %d", VAR_8[VAR_15].name, FUNC_2(VAR_4 + VAR_15));
    FUNC_11(L"%-*ls  ", VAR_18, FUNC_10(VAR_13, VAR_12, VAR_18));
   }
  FUNC_7("\n");


  for (VAR_15 = 0; VAR_15 < VAR_23; VAR_15++) {
   FUNC_11(L"%s%ls%s%ls%s%ls%s%ls%s%ls%s%ls%s%ls ",
    VAR_14, VAR_9.names[6], VAR_14, VAR_9.names[0],
    VAR_14, VAR_9.names[1], VAR_14, VAR_9.names[2],
    VAR_14, VAR_9.names[3], VAR_14, VAR_9.names[4],
    VAR_14, VAR_9.names[5]);
  }
  FUNC_7("\n");


  for (VAR_15 = 0; VAR_15 != 6; VAR_15++) {
   for (VAR_16 = 0; VAR_16 < VAR_23; VAR_16++)
    FUNC_7("%-*s  ",
        FUNC_3(VAR_18, VAR_8[VAR_16].extralen[VAR_15]),
     VAR_8[VAR_16].lines[VAR_15]+1);
   FUNC_7("\n");
  }

  VAR_4 += VAR_17;
 }
}
