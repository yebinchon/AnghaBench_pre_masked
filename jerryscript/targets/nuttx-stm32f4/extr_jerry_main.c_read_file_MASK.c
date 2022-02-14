
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (int *,unsigned int,long,int *) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *,int ,int ) ;
 long FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ FUNC_7 (long) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static const uint8_t *
FUNC_9 (const char *VAR_2,
           size_t *VAR_3)
{
  FILE *VAR_4 = FUNC_1 (VAR_2, "r");
  if (VAR_4 == ((void*)0))
  {
    FUNC_6 (VAR_0, "Error: cannot open file: %s\n", VAR_2);
    return ((void*)0);
  }

  int VAR_5 = FUNC_4 (VAR_4, 0, VAR_1);
  if (VAR_5 != 0)
  {
    FUNC_6 (VAR_0, "Failed to seek (error: %d)\n", VAR_5);
    FUNC_0 (VAR_4);
    return ((void*)0);
  }

  long VAR_6 = FUNC_5 (VAR_4);
  if (VAR_6 < 0)
  {
    FUNC_6 (VAR_0, "Failed to get the file size(error %ld)\n", VAR_6);
    FUNC_0 (VAR_4);
    return ((void*)0);
  }

  FUNC_8 (VAR_4);

  uint8_t *VAR_7 = (uint8_t *) FUNC_7 (VAR_6);

  if (VAR_7 == ((void*)0))
  {
    FUNC_6 (VAR_0, "Out of memory error\n");
    FUNC_0 (VAR_4);
    return ((void*)0);
  }

  size_t VAR_8 = FUNC_2 (VAR_7, 1u, VAR_6, VAR_4);

  if (!VAR_8 || VAR_8 != VAR_6)
  {
    FUNC_6 (VAR_0, "Error: failed to read file: %s\n", VAR_2);
    FUNC_3 ((void*) VAR_7);

    FUNC_0 (VAR_4);
    return ((void*)0);
  }

  FUNC_0 (VAR_4);

  *VAR_3 = VAR_8;
  return (const uint8_t *) VAR_7;
}
