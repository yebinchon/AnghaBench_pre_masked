
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2 ( char *VAR_0, int VAR_1, int VAR_2 )
{
 if (VAR_2 > 1024*1024*1024 ) {
  FUNC_0( VAR_0, VAR_1, "%d", VAR_2 / (1024*1024*1024) );
  FUNC_0( VAR_0+FUNC_1(VAR_0), VAR_1-FUNC_1(VAR_0), ".%02d GB",
   (VAR_2 % (1024*1024*1024))*100 / (1024*1024*1024) );
 } else if (VAR_2 > 1024*1024 ) {
  FUNC_0( VAR_0, VAR_1, "%d", VAR_2 / (1024*1024) );
  FUNC_0( VAR_0+FUNC_1(VAR_0), VAR_1-FUNC_1(VAR_0), ".%02d MB",
   (VAR_2 % (1024*1024))*100 / (1024*1024) );
 } else if (VAR_2 > 1024 ) {
  FUNC_0( VAR_0, VAR_1, "%d KB", VAR_2 / 1024 );
 } else {
  FUNC_0( VAR_0, VAR_1, "%d bytes", VAR_2 );
 }
}
