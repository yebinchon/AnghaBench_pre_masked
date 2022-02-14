
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buf; size_t len; } ;
typedef TYPE_1__ parser_t ;


 int VAR_0 ;
 char* FUNC_0 (size_t,int ) ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (char*,size_t,int ) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static bool
FUNC_4(parser_t *VAR_1, const char *VAR_2) {
 size_t VAR_3 = FUNC_3(VAR_2);
 char *VAR_4 = (VAR_1->buf == ((void*)0)) ? FUNC_0(VAR_3 + 1,
     VAR_0) : FUNC_2(VAR_1->buf, VAR_1->len + VAR_3 + 1,
     VAR_0);
 if (VAR_4 == ((void*)0)) {
  return 1;
 }
 FUNC_1(&VAR_4[VAR_1->len], VAR_2, VAR_3 + 1);
 VAR_1->buf = VAR_4;
 VAR_1->len += VAR_3;
 return 0;
}
