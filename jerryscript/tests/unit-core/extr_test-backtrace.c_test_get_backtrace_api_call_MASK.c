
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_char_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,char const*) ;

__attribute__((used)) static void
FUNC_13 (void)
{
  FUNC_7 (VAR_0);

  jerry_value_t VAR_2 = FUNC_6 ();

  jerry_value_t VAR_3 = FUNC_3 (VAR_1);
  jerry_value_t VAR_4 = FUNC_4 ((const jerry_char_t *) "backtrace");
  jerry_value_t VAR_5 = FUNC_9 (VAR_2, VAR_4, VAR_3);
  FUNC_0 (!FUNC_11 (VAR_5));

  FUNC_8 (VAR_5);
  FUNC_8 (VAR_4);
  FUNC_8 (VAR_3);

  FUNC_8 (VAR_2);

  const char *VAR_6 = ("function f() {\n"
                        "  return backtrace(0);\n"
                        "}\n"
                        "\n"
                        "function g() {\n"
                        "  return f();\n"
                        "}\n"
                        "\n"
                        "function h() {\n"
                        "  return g();\n"
                        "}\n"
                        "\n"
                        "h();\n");

  jerry_value_t VAR_7 = FUNC_12 ("something.js", VAR_6);

  FUNC_0 (!FUNC_11 (VAR_7)
               && FUNC_10 (VAR_7));

  FUNC_0 (FUNC_5 (VAR_7) == 4);

  FUNC_1 (VAR_7, 0, "something.js:2");
  FUNC_1 (VAR_7, 1, "something.js:6");
  FUNC_1 (VAR_7, 2, "something.js:10");
  FUNC_1 (VAR_7, 3, "something.js:13");

  FUNC_8 (VAR_7);



  VAR_6 = ("function f() {\n"
            "  return backtrace(2);\n"
            "}\n"
            "\n"
            "function g() {\n"
            "  return f();\n"
            "}\n"
            "\n"
            "function h() {\n"
            "  return g();\n"
            "}\n"
            "\n"
            "h();\n");

  VAR_7 = FUNC_12 ("something_else.js", VAR_6);

  FUNC_0 (!FUNC_11 (VAR_7)
               && FUNC_10 (VAR_7));

  FUNC_0 (FUNC_5 (VAR_7) == 2);

  FUNC_1 (VAR_7, 0, "something_else.js:2");
  FUNC_1 (VAR_7, 1, "something_else.js:6");

  FUNC_8 (VAR_7);

  FUNC_2 ();
}
