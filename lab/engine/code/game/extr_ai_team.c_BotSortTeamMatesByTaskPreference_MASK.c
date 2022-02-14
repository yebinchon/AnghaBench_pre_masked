
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bot_state_t ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*,int*,int) ;

int FUNC_2(bot_state_t *VAR_3, int *VAR_4, int VAR_5) {
 int VAR_6[VAR_0], VAR_7;
 int VAR_8[VAR_0], VAR_9;
 int VAR_10[VAR_0], VAR_11;
 int VAR_12, VAR_13;

 VAR_7 = VAR_9 = VAR_11 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_13 = FUNC_0(VAR_3, VAR_4[VAR_12]);
  if (VAR_13 & VAR_2) {
   VAR_6[VAR_7++] = VAR_4[VAR_12];
  }
  else if (VAR_13 & VAR_1) {
   VAR_8[VAR_9++] = VAR_4[VAR_12];
  }
  else {
   VAR_10[VAR_11++] = VAR_4[VAR_12];
  }
 }
 VAR_5 = 0;

 FUNC_1(&VAR_4[VAR_5], VAR_6, VAR_7 * sizeof(int));
 VAR_5 += VAR_7;

 FUNC_1(&VAR_4[VAR_5], VAR_10, VAR_11 * sizeof(int));
 VAR_5 += VAR_11;

 FUNC_1(&VAR_4[VAR_5], VAR_8, VAR_9 * sizeof(int));
 VAR_5 += VAR_9;

 return VAR_5;
}
