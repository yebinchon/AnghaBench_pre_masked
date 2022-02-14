
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int ,char*,int ,int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ,char*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,char*,int) ;
 int FUNC_12 (int *,int ,char*) ;
 int FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (int *,char*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *,int ,int) ;

__attribute__((used)) static mrb_value
FUNC_17(mrb_state* VAR_0, mrb_value VAR_1, int VAR_2) {
  mrb_value VAR_3;

  if (FUNC_10(VAR_1)) {
    return FUNC_14(VAR_0, "null");
  }

  switch (FUNC_15(VAR_1)) {
  case 134:
  case 133:
  case 129:
  case 135:
  case 128:
    VAR_3 = FUNC_4(VAR_0, VAR_1, "to_s", 0, ((void*)0));
    break;
  case 130:
    VAR_1 = FUNC_4(VAR_0, VAR_1, "to_s", 0, ((void*)0));

  case 131:
    {
      int VAR_4 = FUNC_6(VAR_0);
      char* VAR_5 = FUNC_2(VAR_1);
      char* VAR_6 = FUNC_1(VAR_1);
      VAR_3 = FUNC_14(VAR_0, "\"");
      while (VAR_5 < VAR_6 && *VAR_5) {
        switch (*VAR_5) {
        case '\\':
          VAR_3 = FUNC_12(VAR_0, VAR_3, "\\\\");
          break;
        case '"':
          VAR_3 = FUNC_12(VAR_0, VAR_3, "\\\"");
          break;
        case '\b':
          VAR_3 = FUNC_12(VAR_0, VAR_3, "\\b");
          break;
        case '\f':
          VAR_3 = FUNC_12(VAR_0, VAR_3, "\\f");
          break;
        case '\n':
          VAR_3 = FUNC_12(VAR_0, VAR_3, "\\n");
          break;
        case '\r':
          VAR_3 = FUNC_12(VAR_0, VAR_3, "\\r");
          break;
        case '\t':
          VAR_3 = FUNC_12(VAR_0, VAR_3, "\\t");
          break;
        default:

          VAR_3 = FUNC_11(VAR_0, VAR_3, VAR_5, 1);
        }
        VAR_5++;
      }
      FUNC_12(VAR_0, VAR_3, "\"");
      FUNC_5(VAR_0, VAR_4);
    }
    break;
  case 132:
    {
      mrb_value VAR_7;
      int VAR_8, VAR_9;

      VAR_3 = FUNC_14(VAR_0, "{");
      VAR_7 = FUNC_8(VAR_0, VAR_1);
      VAR_9 = FUNC_0(VAR_7);
      if (VAR_9 == 0) {
        if (VAR_2 >= 0) return FUNC_12(VAR_0, VAR_3, "\n}");
        return FUNC_12(VAR_0, VAR_3, "}");
      }
      if (VAR_2 >= 0) VAR_3 = FUNC_16(VAR_0, VAR_3, ++VAR_2);
      for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
        mrb_value VAR_10;
        int VAR_11 = FUNC_6(VAR_0);
        mrb_value VAR_12 = FUNC_3(VAR_7, VAR_8);
        mrb_value VAR_13 = FUNC_4(VAR_0, VAR_12, "to_s", 0, ((void*)0));
        VAR_13 = FUNC_4(VAR_0, VAR_13, "inspect", 0, ((void*)0));
        FUNC_13(VAR_0, VAR_3, VAR_13);
        FUNC_12(VAR_0, VAR_3, ":");
        VAR_10 = FUNC_7(VAR_0, VAR_1, VAR_12);
        FUNC_13(VAR_0, VAR_3, FUNC_17(VAR_0, VAR_10, VAR_2));
        if (VAR_8 != VAR_9 - 1) {
          FUNC_12(VAR_0, VAR_3, ",");
          if (VAR_2 >= 0) VAR_3 = FUNC_16(VAR_0, VAR_3, VAR_2);
        }
        FUNC_5(VAR_0, VAR_11);
      }
      if (VAR_2 >= 0) VAR_3 = FUNC_16(VAR_0, VAR_3, --VAR_2);
      FUNC_12(VAR_0, VAR_3, "}");
      break;
    }
  case 136:
    {
      int VAR_14, VAR_15;

      VAR_3 = FUNC_14(VAR_0, "[");
      VAR_15 = FUNC_0(VAR_1);
      if (VAR_15 == 0) {
        if (VAR_2 >= 0) return FUNC_12(VAR_0, VAR_3, "\n]");
        return FUNC_12(VAR_0, VAR_3, "]");
      }
      if (VAR_2 >= 0) VAR_3 = FUNC_16(VAR_0, VAR_3, ++VAR_2);
      for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
        int VAR_16 = FUNC_6(VAR_0);
        mrb_value VAR_17 = FUNC_3(VAR_1, VAR_14);
        FUNC_13(VAR_0, VAR_3, FUNC_17(VAR_0, VAR_17, VAR_2));
        if (VAR_14 != VAR_15 - 1) {
          FUNC_12(VAR_0, VAR_3, ",");
          if (VAR_2 >= 0) VAR_3 = FUNC_16(VAR_0, VAR_3, VAR_2);
        }
        FUNC_5(VAR_0, VAR_16);
      }
      if (VAR_2 >= 0) VAR_3 = FUNC_16(VAR_0, VAR_3, --VAR_2);
      FUNC_12(VAR_0, VAR_3, "]");
      break;
    }
  default:
    {
      if (FUNC_9(VAR_0, VAR_1, "to_json"))
        VAR_3 = FUNC_4(VAR_0, VAR_1, "to_json", 0, ((void*)0));
      else
        VAR_3 = FUNC_17(VAR_0, FUNC_4(VAR_0, VAR_1, "to_s", 0, ((void*)0)), VAR_2);
    }
  }
  return VAR_3;
}
