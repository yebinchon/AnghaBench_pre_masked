
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,int,...) ;

__attribute__((used)) static void FUNC_1 ( char *VAR_0, int VAR_1, int VAR_2 ) {
 VAR_2 /= 1000;

 if (VAR_2 > 3600) {
  FUNC_0( VAR_0, VAR_1, "%d hr %d min", VAR_2 / 3600, (VAR_2 % 3600) / 60 );
 } else if (VAR_2 > 60) {
  FUNC_0( VAR_0, VAR_1, "%d min %d sec", VAR_2 / 60, VAR_2 % 60 );
 } else {
  FUNC_0( VAR_0, VAR_1, "%d sec", VAR_2 );
 }
}
