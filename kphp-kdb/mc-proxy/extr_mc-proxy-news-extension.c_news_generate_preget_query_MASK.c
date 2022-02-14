
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct news_gather_extra {int request_tag; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int*,int) ;
 int FUNC_2 (char*,char*,char*,int,int) ;

int FUNC_3 (char *VAR_9, const char *VAR_10, int VAR_11, void *VAR_12, int VAR_13) {
  if (!VAR_8[VAR_13]) return 0;
  struct news_gather_extra* VAR_14 = VAR_12;
  int VAR_15 = VAR_8[VAR_13];
  int VAR_16, VAR_17 = VAR_7[VAR_13];
  VAR_6[0] = ((VAR_3 || VAR_2) ? 0x30303030 : 0x32303030);
  FUNC_0 (1 + VAR_15 * ((VAR_3 || VAR_2) ? 1 : 3) <= VAR_0);
  for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
    FUNC_0 (VAR_17 >= 0);
    if ((VAR_3 || VAR_2)){
      VAR_6[VAR_16+1] = VAR_4[VAR_17];
    } else {
      VAR_6[3*VAR_16+1] = VAR_4[3*VAR_17];
      VAR_6[3*VAR_16+2] = VAR_4[3*VAR_17+1];
      VAR_6[3*VAR_16+3] = VAR_4[3*VAR_17+2];
    }
    VAR_17 = VAR_5[VAR_17];
  }

  FUNC_0 (VAR_17 == -1 && VAR_15 > 0);
 if (VAR_1) {
   VAR_15 *= 3;
 }
  int VAR_18;
  FUNC_0 (VAR_1 || (VAR_3 || VAR_2));
  int VAR_19 = (VAR_3 || VAR_2) ? 0 : 1;
  VAR_18 = FUNC_2 (VAR_9, "set %slist%d 0 0 %d\r\n", VAR_19 <= 0 ? "user" : "object", VAR_14->request_tag, VAR_15*4+4);
  FUNC_1 (VAR_9 + VAR_18, VAR_6, VAR_15 * 4 + 4);
  VAR_18 += VAR_15 * 4 + 4;
  return VAR_18;
}
