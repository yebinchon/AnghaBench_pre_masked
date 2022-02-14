
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jv_parser {int tokenpos; int tokenlen; char* tokenbuf; } ;


 int FUNC_0 (int) ;
 char* FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(struct jv_parser* VAR_0, char VAR_1) {
  FUNC_0(VAR_0->tokenpos <= VAR_0->tokenlen);
  if (VAR_0->tokenpos >= (VAR_0->tokenlen - 1)) {
    VAR_0->tokenlen = VAR_0->tokenlen*2 + 256;
    VAR_0->tokenbuf = FUNC_1(VAR_0->tokenbuf, VAR_0->tokenlen);
  }
  FUNC_0(VAR_0->tokenpos < VAR_0->tokenlen);
  VAR_0->tokenbuf[VAR_0->tokenpos++] = VAR_1;
}
