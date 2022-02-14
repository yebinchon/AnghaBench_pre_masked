
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_9__ {char const* name; int prev; int lit; scalar_t__ len; } ;
typedef TYPE_1__ symbol_name ;
typedef size_t mrb_sym ;
struct TYPE_10__ {size_t symidx; size_t symcapa; int* symhash; TYPE_1__* symtbl; } ;
typedef TYPE_2__ mrb_state ;
typedef scalar_t__ mrb_bool ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (TYPE_2__*,char const*,size_t,size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_2__*,size_t) ;
 size_t FUNC_6 (char const*,size_t) ;

__attribute__((used)) static mrb_sym
FUNC_7(mrb_state *VAR_2, const char *VAR_3, size_t VAR_4, mrb_bool VAR_5)
{
  mrb_sym VAR_6;
  symbol_name *VAR_7;
  uint8_t VAR_8;

  FUNC_5(VAR_2, VAR_4);
  VAR_8 = FUNC_6(VAR_3, VAR_4);
  VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_8);
  if (VAR_6 > 0) return VAR_6;


  VAR_6 = ++VAR_2->symidx;
  if (VAR_2->symcapa < VAR_6) {
    if (VAR_2->symcapa == 0) VAR_2->symcapa = 100;
    else VAR_2->symcapa = (size_t)(VAR_2->symcapa * 6 / 5);
    VAR_2->symtbl = (symbol_name*)FUNC_3(VAR_2, VAR_2->symtbl, sizeof(symbol_name)*(VAR_2->symcapa+1));
  }
  VAR_7 = &VAR_2->symtbl[VAR_6];
  VAR_7->len = (uint16_t)VAR_4;
  if (VAR_5 || FUNC_4(VAR_3)) {
    VAR_7->name = VAR_3;
    VAR_7->lit = VAR_1;
  }
  else {
    char *VAR_9 = (char *)FUNC_2(VAR_2, VAR_4+1);
    FUNC_1(VAR_9, VAR_3, VAR_4);
    VAR_9[VAR_4] = 0;
    VAR_7->name = (const char*)VAR_9;
    VAR_7->lit = VAR_0;
  }
  if (VAR_2->symhash[VAR_8]) {
    mrb_sym VAR_10 = VAR_6 - VAR_2->symhash[VAR_8];
    if (VAR_10 > 0xff)
      VAR_7->prev = 0xff;
    else
      VAR_7->prev = VAR_10;
  }
  else {
    VAR_7->prev = 0;
  }
  VAR_2->symhash[VAR_8] = VAR_6;

  return VAR_6<<1;
}
