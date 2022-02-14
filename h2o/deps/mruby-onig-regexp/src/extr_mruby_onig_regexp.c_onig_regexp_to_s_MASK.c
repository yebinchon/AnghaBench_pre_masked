
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int OnigUChar ;
typedef int OnigRegex ;


 int FUNC_0 (int *,int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_6 ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int *,int *,int ,int ,int ,int *) ;
 scalar_t__* FUNC_10 (char*,int) ;
 int FUNC_11 (int *,int ,char const*,long) ;
 scalar_t__ FUNC_12 (char const*,char) ;

__attribute__((used)) static mrb_value
FUNC_13(mrb_state *VAR_7, mrb_value VAR_8) {
  int VAR_9;
  const int VAR_10 = VAR_4|VAR_3|VAR_2;
  long VAR_11;
  const char* VAR_12;
  mrb_value VAR_13 = FUNC_6(VAR_7, "(?");
  char VAR_14[5];

  OnigRegex VAR_15;
  FUNC_0(VAR_7, VAR_8, &VAR_6, VAR_15);
  VAR_9 = FUNC_8(VAR_15);
  mrb_value VAR_16 = FUNC_4(VAR_7, VAR_8, FUNC_3(VAR_7, "@source"));
  VAR_12 = FUNC_2(VAR_16);
  VAR_11 = FUNC_1(VAR_16);

 again:
  if (VAR_11 >= 4 && VAR_12[0] == '(' && VAR_12[1] == '?') {
    int VAR_17 = 1;
    VAR_12 += 2;
    if ((VAR_11 -= 2) > 0) {
      do {
        if(FUNC_12(VAR_12, 'i')) { VAR_9 |= VAR_3; }
        if(FUNC_12(VAR_12, 'x')) { VAR_9 |= VAR_2; }
        if(FUNC_12(VAR_12, 'm')) { VAR_9 |= VAR_4; }
        ++VAR_12;
      } while (--VAR_11 > 0);
    }
    if (VAR_11 > 1 && *VAR_12 == '-') {
      ++VAR_12;
      --VAR_11;
      do {
        if(FUNC_12(VAR_12, 'i')) { VAR_9 &= ~VAR_3; }
        if(FUNC_12(VAR_12, 'x')) { VAR_9 &= ~VAR_2; }
        if(FUNC_12(VAR_12, 'm')) { VAR_9 &= ~VAR_4; }
        ++VAR_12;
      } while (--VAR_11 > 0);
    }
    if (*VAR_12 == ')') {
      --VAR_11;
      ++VAR_12;
      goto again;
    }
    if (*VAR_12 == ':' && VAR_12[VAR_11-1] == ')') {
      OnigRegex VAR_18;
      ++VAR_12;
      VAR_11 -= 2;
      VAR_17 = FUNC_9(&VAR_18, (OnigUChar*)VAR_12, (OnigUChar*)VAR_12 + VAR_11, VAR_1,
                     VAR_0, VAR_5, ((void*)0));
      FUNC_7(VAR_18);
    }
    if (VAR_17) {
      VAR_9 = FUNC_8(VAR_15);
      VAR_12 = FUNC_2(VAR_16);
      VAR_11 = FUNC_1(VAR_16);
    }
  }

  if (*FUNC_10(VAR_14, VAR_9)) FUNC_5(VAR_7, VAR_13, VAR_14);

  if ((VAR_9 & VAR_10) != VAR_10) {
    VAR_14[0] = '-';
    FUNC_10(VAR_14 + 1, ~VAR_9);
    FUNC_5(VAR_7, VAR_13, VAR_14);
  }

  FUNC_5(VAR_7, VAR_13, ":");
  FUNC_11(VAR_7, VAR_13, VAR_12, VAR_11);
  FUNC_5(VAR_7, VAR_13, ")");
  return VAR_13;
}
