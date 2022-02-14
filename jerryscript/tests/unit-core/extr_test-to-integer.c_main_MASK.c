
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_value_t ;
typedef int ecma_number_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 (double) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,int*) ;
 int FUNC_13 (int ) ;
 int VAR_0 ;
 int FUNC_14 () ;
 int FUNC_15 () ;

int
FUNC_16 (void)
{
  FUNC_4 ();

  FUNC_15 ();
  FUNC_7 ();

  ecma_number_t VAR_1;

  ecma_value_t VAR_2 = FUNC_8 (123);

  ecma_number_t VAR_3 = FUNC_12 (VAR_2, &VAR_1);

  FUNC_6 (VAR_2);

  FUNC_3 (!FUNC_1 (VAR_3));
  FUNC_3 (VAR_1 == 123);


  ecma_value_t VAR_4 = FUNC_13 (FUNC_0 ("I am a neat little error message"));

  VAR_3 = FUNC_12 (VAR_4, &VAR_1);

  FUNC_6 (FUNC_2 (VAR_0));

  FUNC_3 (FUNC_1 (VAR_3));


  ecma_value_t VAR_5 = FUNC_9 ();

  VAR_3 = FUNC_12 (VAR_5, &VAR_1);

  FUNC_6 (VAR_5);

  FUNC_3 (!FUNC_1 (VAR_3));
  FUNC_3 (VAR_1 == 0);



  ecma_value_t VAR_6 = FUNC_10 (-0.0f);

  VAR_3 = FUNC_12 (VAR_6, &VAR_1);

  FUNC_6 (VAR_6);

  FUNC_3 (!FUNC_1 (VAR_3));
  FUNC_3 (1.0f / VAR_1 == FUNC_11 (1));


  ecma_value_t VAR_7 = FUNC_10 (+0.0f);

  VAR_3 = FUNC_12 (VAR_7, &VAR_1);

  FUNC_6 (VAR_7);

  FUNC_3 (!FUNC_1 (VAR_3));
  FUNC_3 (1.0f / VAR_1 == FUNC_11 (0));


  ecma_value_t VAR_8 = FUNC_10 (FUNC_11 (1));

  VAR_3 = FUNC_12 (VAR_8, &VAR_1);

  FUNC_6 (VAR_8);

  FUNC_3 (!FUNC_1 (VAR_3));
  FUNC_3 (VAR_1 == FUNC_11 (1));


  ecma_value_t VAR_9 = FUNC_10 (FUNC_11 (0));

  VAR_3 = FUNC_12 (VAR_9, &VAR_1);

  FUNC_6 (VAR_9);

  FUNC_3 (!FUNC_1 (VAR_3));
  FUNC_3 (VAR_1 == FUNC_11 (0));


  ecma_value_t VAR_10 = FUNC_10 (3.001f);

  VAR_3 = FUNC_12 (VAR_10, &VAR_1);

  FUNC_6 (VAR_10);

  FUNC_3 (!FUNC_1 (VAR_3));
  FUNC_3 (VAR_1 == 3);

  ecma_value_t VAR_11 = FUNC_10 (-26.5973);

  VAR_3 = FUNC_12 (VAR_11, &VAR_1);

  FUNC_6 (VAR_11);

  FUNC_3 (!FUNC_1 (VAR_3));
  FUNC_3 (VAR_1 == -26);

  FUNC_5 ();
  FUNC_14 ();

  return 0;
}
