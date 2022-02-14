
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__** VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__*,char const*,int) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_2 (const char *VAR_7, int VAR_8) {
  VAR_5 = (VAR_5 - 1) & (VAR_1 - 1);
  VAR_4[VAR_5] = FUNC_0 (VAR_0);
  VAR_8 = ((VAR_8) < (VAR_2 - 8)) ? (VAR_8) : (VAR_2 - 8);
  FUNC_1 (VAR_3[VAR_5], VAR_7, VAR_8);
  VAR_3[VAR_5][VAR_8] = 0;
  ++VAR_6;
}
