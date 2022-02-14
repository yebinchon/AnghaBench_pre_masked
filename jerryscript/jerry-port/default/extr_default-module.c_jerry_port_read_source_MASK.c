
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (int *,unsigned int,size_t,int *) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ FUNC_6 (size_t) ;

uint8_t *
FUNC_7 (const char *VAR_1,
                        size_t *VAR_2)
{
  FILE *VAR_3 = FUNC_1 (VAR_1, "rb");

  if (VAR_3 == ((void*)0))
  {
    FUNC_5 (VAR_0, "Error: failed to open file: %s\n", VAR_1);
    return ((void*)0);
  }

  size_t VAR_4 = FUNC_4 (VAR_3);
  uint8_t *VAR_5 = (uint8_t *) FUNC_6 (VAR_4);

  if (VAR_5 == ((void*)0))
  {
    FUNC_0 (VAR_3);

    FUNC_5 (VAR_0, "Error: failed to allocate memory for module");
    return ((void*)0);
  }

  size_t VAR_6 = FUNC_2 (VAR_5, 1u, VAR_4, VAR_3);

  if (!VAR_6)
  {
    FUNC_0 (VAR_3);
    FUNC_3 (VAR_5);

    FUNC_5 (VAR_0, "Error: failed to read file: %s\n", VAR_1);
    return ((void*)0);
  }

  FUNC_0 (VAR_3);
  *VAR_2 = VAR_6;

  return VAR_5;
}
