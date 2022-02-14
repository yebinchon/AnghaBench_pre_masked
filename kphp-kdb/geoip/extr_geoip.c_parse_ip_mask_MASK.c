
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,int*) ;

void FUNC_2 (unsigned *VAR_2, unsigned *VAR_3) {
  int VAR_4;
  unsigned VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
  FUNC_0 (FUNC_1 (VAR_0 + VAR_1, "%u.%u.%u.%u/%u%n", &VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_4) == 5);
  FUNC_0 (0 <= VAR_5 && VAR_5 < 256);
  FUNC_0 (0 <= VAR_6 && VAR_6 < 256);
  FUNC_0 (0 <= VAR_7 && VAR_7 < 256);
  FUNC_0 (0 <= VAR_8 && VAR_8 < 256);
  FUNC_0 (0 < VAR_9 && VAR_9 <= 32);
  VAR_9 = 32 - VAR_9;
  VAR_1 += VAR_4;
  FUNC_0 (!VAR_0[VAR_1] || VAR_0[VAR_1] == ',');
  *VAR_2 = (VAR_5 << 24) + (VAR_6 << 16) + (VAR_7 << 8) + VAR_8;
  VAR_9 = (1 << VAR_9) - 1;

  FUNC_0 (!(*VAR_2 & VAR_9));
  *VAR_3 = *VAR_2 + VAR_9;
}
