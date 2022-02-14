
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,unsigned int*,char*,unsigned int,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (char*,unsigned int,int,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int ,int ) ;
 unsigned int FUNC_7 (int *) ;
 char* FUNC_8 (unsigned int) ;
 int VAR_3 ;

int
FUNC_9 (int VAR_4, char *VAR_5[])
{
  char *VAR_6;
  char *VAR_7;
  unsigned int VAR_8, VAR_9, VAR_10;
  FILE *VAR_11, *VAR_12;







  if (VAR_4 < 4) {
    FUNC_3 (&VAR_3, "Usage: %s binary_file output_file array_name\n", VAR_5[0]);
    return -1;
  }

  VAR_11 = FUNC_2 (VAR_5[1], "rb");
  if (VAR_11 == ((void*)0)) {
    FUNC_3 (&VAR_3, "%s: can't open %s for reading\n", VAR_5[0], VAR_5[1]);
    return -1;
  }

  FUNC_6 (VAR_11, 0, VAR_1);
  VAR_9 = FUNC_7 (VAR_11);
  FUNC_6 (VAR_11, 0, VAR_2);

  if ((VAR_6 = FUNC_8 (VAR_9)) == ((void*)0)) {
    FUNC_3 (&VAR_3, "Unable to malloc bin2c.c buffer\n");
    FUNC_1 (VAR_11);
    return -1;
  }

  FUNC_4 (VAR_6, VAR_9, 1, VAR_11);
  FUNC_1 (VAR_11);
  VAR_12 = FUNC_2 (VAR_5[2], "w");
  if (VAR_12 == ((void*)0)) {
    FUNC_3 (&VAR_3, "%s: can't open %s for writing\n", VAR_5[0], VAR_5[1]);
    FUNC_5 (VAR_6);
    return -1;
  }

  VAR_7 = VAR_5[3];
  VAR_10 = 0;

  FUNC_3 (VAR_12, "const char %s[%u] = {", VAR_7, VAR_9);
  for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8) {
    if (VAR_10)
      FUNC_3 (VAR_12, ", ");
    else
      VAR_10 = 1;
    if ((VAR_8 % 11) == 0)
      FUNC_3 (VAR_12, "\n\t");
    FUNC_3 (VAR_12, "0x%.2x", VAR_6[VAR_8] & 0xff);
  }
  FUNC_3 (VAR_12, "\n};\n\n");
  FUNC_3 (VAR_12, "const int %s_length = %u;\n", VAR_7, VAR_9);






  FUNC_1 (VAR_12);
  FUNC_5 (VAR_6);

  return 0;
}
