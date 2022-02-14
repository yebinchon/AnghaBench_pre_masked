
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int test_int_numbers ;
struct TYPE_3__ {int typedarray_type; int * constructor_name; } ;
typedef TYPE_1__ test_entry_t ;
typedef int jerry_value_t ;
typedef int jerry_typedarray_type_t ;







 int FUNC_0 (int) ;
 double FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,size_t) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 double FUNC_16 (int,int) ;

__attribute__((used)) static void FUNC_17 (test_entry_t VAR_0[])
{
  int VAR_1[5] = {-5, -70, 13, 0, 56};
  double VAR_2[5] = {-83.153, -35.15, 0, 13.1, 89.8975};
  uint8_t VAR_3[5] = {83, 15, 36, 0, 43};

  for (uint32_t VAR_4 = 0; VAR_0[VAR_4].constructor_name != ((void*)0); VAR_4++)
  {
    jerry_value_t VAR_5;
    uint32_t VAR_6 = sizeof (VAR_1) / sizeof (int);
    jerry_value_t VAR_7 = FUNC_5 (VAR_0[VAR_4].typedarray_type, VAR_6);
    jerry_typedarray_type_t VAR_8 = FUNC_10 (VAR_7);

    jerry_value_t VAR_9;
    jerry_value_t VAR_10;

    switch (VAR_8)
    {
      case 128:
      case 130:
      case 129:
      {
        for (uint8_t VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
        {
          VAR_5 = FUNC_3 (VAR_1[VAR_11]);
          FUNC_0 (!FUNC_6 (VAR_7, VAR_11));
          VAR_9 = FUNC_12 (VAR_7, VAR_11, VAR_5);
          VAR_10 = FUNC_9 (VAR_7, VAR_11);

          FUNC_0 (FUNC_13 (VAR_9));
          FUNC_0 (FUNC_7 (VAR_9));
          FUNC_0 (!FUNC_6 (VAR_7, VAR_11));
          FUNC_0 (FUNC_8 (VAR_10) == VAR_1[VAR_11]);

          FUNC_11 (VAR_5);
          FUNC_11 (VAR_9);
          FUNC_11 (VAR_10);
        }
        break;
      }
      case 132:
      case 131:
      {
        for (uint8_t VAR_12 = 0; VAR_12 < VAR_6; VAR_12++)
        {
          VAR_5 = FUNC_3 (VAR_2[VAR_12]);
          FUNC_0 (!FUNC_6 (VAR_7, VAR_12));
          VAR_9 = FUNC_12 (VAR_7, VAR_12, VAR_5);
          VAR_10 = FUNC_9 (VAR_7, VAR_12);

          FUNC_0 (FUNC_13 (VAR_9));
          FUNC_0 (FUNC_7 (VAR_9));
          FUNC_0 (!FUNC_6 (VAR_7, VAR_12));

          double VAR_13 = FUNC_16 (10, -5);
          double VAR_14 = FUNC_1 (FUNC_8 (VAR_10) - VAR_2[VAR_12]);
          FUNC_0 (VAR_14 < VAR_13);

          FUNC_11 (VAR_5);
          FUNC_11 (VAR_9);
          FUNC_11 (VAR_10);


          for (uint8_t VAR_15 = 0; VAR_15 < 2; VAR_15++)
          {
            jerry_value_t VAR_16 = FUNC_4 (VAR_15);
            jerry_value_t VAR_17 = FUNC_12 (VAR_7, 0, VAR_16);
            FUNC_0 (FUNC_13 (VAR_17));
            FUNC_0 (FUNC_7 (VAR_17));
            jerry_value_t VAR_18 = FUNC_9 (VAR_7, 0);
            FUNC_0 (FUNC_2 (FUNC_8 (VAR_18)));

            FUNC_11 (VAR_16);
            FUNC_11 (VAR_17);
            FUNC_11 (VAR_18);
          }
        }
        break;
      }
      default:
      {
        for (uint8_t VAR_19 = 0; VAR_19 < VAR_6; VAR_19++)
        {
          VAR_5 = FUNC_3 (VAR_3[VAR_19]);
          FUNC_0 (!FUNC_6 (VAR_7, VAR_19));
          VAR_9 = FUNC_12 (VAR_7, VAR_19, VAR_5);
          VAR_10 = FUNC_9 (VAR_7, VAR_19);

          FUNC_0 (FUNC_13 (VAR_9));
          FUNC_0 (FUNC_7 (VAR_9));
          FUNC_0 (!FUNC_6 (VAR_7, VAR_19));
          FUNC_0 (FUNC_8 (VAR_10) == VAR_3[VAR_19]);

          FUNC_11 (VAR_5);
          FUNC_11 (VAR_9);
          FUNC_11 (VAR_10);
        }
        break;
      }
    }

    jerry_value_t VAR_20 = FUNC_12 (VAR_7, 100, FUNC_3 (50));
    FUNC_0 (FUNC_14 (VAR_20));
    jerry_value_t VAR_21 = FUNC_9 (VAR_7, 100);
    FUNC_0 (FUNC_15 (VAR_21));

    FUNC_11 (VAR_20);
    FUNC_11 (VAR_21);
    FUNC_11 (VAR_7);
  }
}
