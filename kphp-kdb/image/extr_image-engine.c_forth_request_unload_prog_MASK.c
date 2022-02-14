
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct forth_request {int * prog; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct forth_request*) ;
 int FUNC_2 (struct forth_request*) ;
 int FUNC_3 (int *,struct forth_request*) ;
 int FUNC_4 (int *,struct forth_request*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5 (struct forth_request *VAR_2) {
  FUNC_4 (&VAR_0, VAR_2);
  FUNC_0 (VAR_2->prog != ((void*)0));
  FUNC_1 (VAR_2);
  FUNC_0 (VAR_2->prog == ((void*)0));
  FUNC_3 (&VAR_1, VAR_2);
  FUNC_2 (VAR_2);
}
