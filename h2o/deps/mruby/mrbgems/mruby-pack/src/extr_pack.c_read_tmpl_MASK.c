
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmpl {char idx; int str; } ;
typedef int mrb_state ;
typedef char mrb_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 char FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ VAR_28 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,int ,char*,int ) ;
 int FUNC_6 (int *,char*,int) ;
 int * FUNC_7 (char*,int) ;

__attribute__((used)) static void
FUNC_8(mrb_state *VAR_29, struct tmpl *VAR_30, int *VAR_31, int *VAR_32, int *VAR_33, int *VAR_34, unsigned int *VAR_35)
{
  mrb_int VAR_36, VAR_37;
  int VAR_38, VAR_39, VAR_40, VAR_41 = 0;
  int VAR_42 = 1;
  unsigned int VAR_43 = 0;
  const char *VAR_44;

  VAR_44 = FUNC_1(VAR_30->str);
  VAR_37 = FUNC_0(VAR_30->str);

  VAR_36 = VAR_44[VAR_30->idx++];
alias:
  switch (VAR_36) {
  case 'A':
    VAR_39 = VAR_12;
    VAR_40 = VAR_27;
    VAR_43 |= VAR_20 | VAR_14;
    break;
  case 'a':
    VAR_39 = VAR_12;
    VAR_40 = VAR_27;
    VAR_43 |= VAR_20 | VAR_14 | VAR_22;
    break;
  case 'C':
    VAR_39 = VAR_3;
    VAR_40 = VAR_25;
    VAR_41 = 1;
    break;
  case 'c':
    VAR_39 = VAR_3;
    VAR_40 = VAR_25;
    VAR_41 = 1;
    VAR_43 |= VAR_19;
    break;
  case 'D': case 'd':
    VAR_39 = VAR_4;
    VAR_40 = VAR_24;
    VAR_41 = 8;
    VAR_43 |= VAR_19;
    break;
  case 'F': case 'f':
    VAR_39 = VAR_5;
    VAR_40 = VAR_24;
    VAR_41 = 4;
    VAR_43 |= VAR_19;
    break;
  case 'E':
    VAR_39 = VAR_4;
    VAR_40 = VAR_24;
    VAR_41 = 8;
    VAR_43 |= VAR_19 | VAR_18;
    break;
  case 'e':
    VAR_39 = VAR_5;
    VAR_40 = VAR_24;
    VAR_41 = 4;
    VAR_43 |= VAR_19 | VAR_18;
    break;
  case 'G':
    VAR_39 = VAR_4;
    VAR_40 = VAR_24;
    VAR_41 = 8;
    VAR_43 |= VAR_19 | VAR_15;
    break;
  case 'g':
    VAR_39 = VAR_5;
    VAR_40 = VAR_24;
    VAR_41 = 4;
    VAR_43 |= VAR_19 | VAR_15;
    break;
  case 'H':
    VAR_39 = VAR_6;
    VAR_40 = VAR_27;
    VAR_43 |= VAR_14;
    break;
  case 'h':
    VAR_39 = VAR_6;
    VAR_40 = VAR_27;
    VAR_43 |= VAR_14 | VAR_17;
    break;
  case 'I':
    switch (sizeof(int)) {
      case 2: VAR_36 = 'S'; goto alias;
      case 4: VAR_36 = 'L'; goto alias;
      case 8: VAR_36 = 'Q'; goto alias;
      default:
        FUNC_5(VAR_29, VAR_1, "mruby-pack does not support sizeof(int) == %S", FUNC_3(sizeof(int)));
    }
    break;
  case 'i':
    switch (sizeof(int)) {
      case 2: VAR_36 = 's'; goto alias;
      case 4: VAR_36 = 'l'; goto alias;
      case 8: VAR_36 = 'q'; goto alias;
      default:
        FUNC_5(VAR_29, VAR_1, "mruby-pack does not support sizeof(int) == %S", FUNC_3(sizeof(int)));
    }
    break;
  case 'L':
    VAR_39 = VAR_8;
    VAR_40 = VAR_25;
    VAR_41 = 4;
    break;
  case 'l':
    VAR_39 = VAR_8;
    VAR_40 = VAR_25;
    VAR_41 = 4;
    VAR_43 |= VAR_19;
    break;
  case 'm':
    VAR_39 = VAR_2;
    VAR_40 = VAR_27;
    VAR_43 |= VAR_20;
    break;
  case 'N':
    VAR_39 = VAR_8;
    VAR_40 = VAR_25;
    VAR_41 = 4;
    VAR_43 |= VAR_15;
    break;
  case 'n':
    VAR_39 = VAR_11;
    VAR_40 = VAR_25;
    VAR_41 = 2;
    VAR_43 |= VAR_15;
    break;
  case 'Q':
    VAR_39 = VAR_10;
    VAR_40 = VAR_25;
    VAR_41 = 8;
    break;
  case 'q':
    VAR_39 = VAR_10;
    VAR_40 = VAR_25;
    VAR_41 = 8;
    VAR_43 |= VAR_19;
    break;
  case 'S':
    VAR_39 = VAR_11;
    VAR_40 = VAR_25;
    VAR_41 = 2;
    break;
  case 's':
    VAR_39 = VAR_11;
    VAR_40 = VAR_25;
    VAR_41 = 2;
    VAR_43 |= VAR_19;
    break;
  case 'U':
    VAR_39 = VAR_13;
    VAR_40 = VAR_25;
    break;
  case 'V':
    VAR_39 = VAR_8;
    VAR_40 = VAR_25;
    VAR_41 = 4;
    VAR_43 |= VAR_18;
    break;
  case 'v':
    VAR_39 = VAR_11;
    VAR_40 = VAR_25;
    VAR_41 = 2;
    VAR_43 |= VAR_18;
    break;
  case 'x':
    VAR_39 = VAR_9;
    VAR_40 = VAR_26;
    break;
  case 'Z':
    VAR_39 = VAR_12;
    VAR_40 = VAR_27;
    VAR_43 |= VAR_20 | VAR_14 | VAR_21;
    break;
  default:
    VAR_39 = VAR_7;
    VAR_40 = VAR_26;
    break;
  }


  while (VAR_30->idx < VAR_37) {
    VAR_38 = VAR_44[VAR_30->idx++];
    if (FUNC_2(VAR_38)) {
      VAR_42 = VAR_38 - '0';
      while (VAR_30->idx < VAR_37 && FUNC_2(VAR_44[VAR_30->idx])) {
        VAR_42 = VAR_42 * 10 + (VAR_44[VAR_30->idx++] - '0');
        if (VAR_42 < 0) {
          FUNC_4(VAR_29, VAR_1, "too big template length");
        }
      }
      continue;
    } else if (VAR_38 == '*') {
      VAR_42 = -1;
    } else if (VAR_38 == '_' || VAR_38 == '!' || VAR_38 == '<' || VAR_38 == '>') {
      if (FUNC_7("sSiIlLqQ", (int)VAR_36) == ((void*)0)) {
        char VAR_45 = (char)VAR_38;
        FUNC_5(VAR_29, VAR_0, "'%S' allowed only after types sSiIlLqQ", FUNC_6(VAR_29, &VAR_45, 1));
      }
      if (VAR_38 == '_' || VAR_38 == '!') {
        VAR_43 |= VAR_23;
      } else if (VAR_38 == '<') {
        VAR_43 |= VAR_18;
      } else if (VAR_38 == '>') {
        VAR_43 |= VAR_15;
      }
    } else {
      VAR_30->idx--;
      break;
    }
  }

  if ((VAR_43 & VAR_18) || (!(VAR_43 & VAR_15) && VAR_28)) {
    VAR_43 |= VAR_16;
  }

  *VAR_31 = VAR_39;
  *VAR_32 = VAR_40;
  *VAR_33 = VAR_41;
  *VAR_34 = VAR_42;
  *VAR_35 = VAR_43;
}
