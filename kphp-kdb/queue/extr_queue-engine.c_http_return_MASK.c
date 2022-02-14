
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct connection*,int,int ,int,int ,char*) ;
 int FUNC_3 (int *,char const*,int) ;

void FUNC_4 (struct connection *VAR_3, const char *VAR_4) {
  FUNC_0 (VAR_4 != ((void*)0));
  int VAR_5 = FUNC_1 (VAR_4);
  VAR_0++;
  VAR_1 += VAR_5;
  FUNC_2 (VAR_3, 200, 0, VAR_5, VAR_2, "text/javascript; charset=UTF-8");
  FUNC_3 (&VAR_3->Out, VAR_4, VAR_5);
}
