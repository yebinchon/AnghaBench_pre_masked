
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_char_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int const*,int ,int const*,int ,int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int VAR_5 ;
 int FUNC_17 (char const*) ;

int
FUNC_18 (void)
{
  FUNC_1 ();

  if (!FUNC_9 (VAR_1))
  {
    FUNC_11 (VAR_3, "Line info support is disabled!\n");
    return 0;
  }

  FUNC_8 (VAR_2);

  jerry_value_t VAR_6 = FUNC_6 ();


  {
    jerry_value_t VAR_7 = FUNC_4 (VAR_5);
    jerry_value_t VAR_8 = FUNC_5 ((const jerry_char_t *) "resourceName");
    jerry_value_t VAR_9 = FUNC_14 (VAR_6, VAR_8, VAR_7);
    FUNC_12 (VAR_9);
    FUNC_12 (VAR_8);
    FUNC_12 (VAR_7);
  }

  FUNC_12 (VAR_6);

  const char *VAR_10 = ("function f1 () {\n"
                          "  if (resourceName() !== 'demo1.js') return false; \n"
                          "  if (resourceName(f1) !== 'demo1.js') return false; \n"
                          "  if (resourceName(5) !== '<anonymous>') return false; \n"
                          "  return f1; \n"
                          "} \n"
                          "f1();");
  const char *VAR_11 = "demo1.js";

  jerry_value_t VAR_12 = FUNC_10 ((const jerry_char_t *) VAR_11,
                                       FUNC_17 (VAR_11),
                                       (const jerry_char_t *) VAR_10,
                                       FUNC_17 (VAR_10),
                                       VAR_4);
  FUNC_0 (!FUNC_15 (VAR_12));

  jerry_value_t VAR_13 = FUNC_13 (VAR_12);
  FUNC_0 (!FUNC_15 (VAR_13));
  FUNC_0 (FUNC_16 (VAR_13));

  jerry_value_t VAR_14 = FUNC_7 (VAR_13);
  jerry_value_t VAR_15 = FUNC_5 ((const jerry_char_t *) VAR_11);
  FUNC_0 (FUNC_2 (VAR_0, VAR_14, VAR_15));
  FUNC_12 (VAR_15);
  FUNC_12 (VAR_14);

  FUNC_12 (VAR_13);
  FUNC_12 (VAR_12);

  const char *VAR_16 = ("function f2 () { \n"
                          "  if (resourceName() !== 'demo2.js') return false; \n"
                          "  if (resourceName(f2) !== 'demo2.js') return false; \n"
                          "  if (resourceName(f1) !== 'demo1.js') return false; \n"
                          "  if (resourceName(Object.prototype) !== '<anonymous>') return false; \n"
                          "  if (resourceName(Function) !== '<anonymous>') return false; \n"
                          "  return f2; \n"
                          "} \n"
                          "f2(); \n");
  const char *VAR_17 = "demo2.js";


  VAR_12 = FUNC_10 ((const jerry_char_t *) VAR_17,
                         FUNC_17 (VAR_17),
                         (const jerry_char_t *) VAR_16,
                         FUNC_17 (VAR_16),
                         VAR_4);
  FUNC_0 (!FUNC_15 (VAR_12));

  VAR_13 = FUNC_13 (VAR_12);
  FUNC_0 (!FUNC_15 (VAR_13));
  FUNC_0 (FUNC_16 (VAR_13));

  VAR_14 = FUNC_7 (VAR_13);
  jerry_value_t VAR_18 = FUNC_5 ((const jerry_char_t *) VAR_17);
  FUNC_0 (FUNC_2 (VAR_0, VAR_14, VAR_18));
  FUNC_12 (VAR_18);
  FUNC_12 (VAR_14);

  FUNC_12 (VAR_13);
  FUNC_12 (VAR_12);

  FUNC_3 ();

  return 0;
}
