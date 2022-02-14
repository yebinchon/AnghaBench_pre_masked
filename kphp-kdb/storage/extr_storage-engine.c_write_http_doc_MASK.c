
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int * VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct connection*,int,int ,int,char*,int ) ;
 int FUNC_2 (int *,void*,int) ;

__attribute__((used)) static void FUNC_3 (struct connection *VAR_1, void *VAR_2, int VAR_3, int VAR_4, int VAR_5) {
  static char VAR_6[128] =
    "Expires: Thu, 31 Dec 2037 23:55:55 GMT\r\n"
    "Cache-Control: max-age=315360000\r\n"
    "Last-Modified: *****************************\r\n";
  FUNC_0 (VAR_6 + (40 + 34 + 15), VAR_4);
  FUNC_1 (VAR_1, 200, 0, VAR_3, VAR_6, VAR_0[VAR_5]);
  FUNC_2 (&VAR_1->Out, VAR_2, VAR_3);
}
