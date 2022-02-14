
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int imagetag_cmdline_arg_type ;






 int FUNC_0 (void*) ;
 int FUNC_1 (char*,char const**) ;
 int FUNC_2 (int ,char*,char*,char const*,...) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*) ;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (char const*,char**,int ) ;

__attribute__((used)) static
int FUNC_6(void *VAR_2, char **VAR_3,
               unsigned int *VAR_4, unsigned int *VAR_5,
               char *VAR_6, const char *VAR_7[],
               const char *VAR_8,
               imagetag_cmdline_arg_type VAR_9,
               int VAR_10, int VAR_11,
               int VAR_12, int VAR_13,
               const char *VAR_14, char VAR_15,
               const char *VAR_16)
{
  char *VAR_17 = 0;
  const char *VAR_18 = VAR_6;
  int VAR_19;
  char **VAR_20;
  FUNC_0 (VAR_2);

  VAR_17 = 0;
  VAR_19 = 0;

  if (!VAR_13 && VAR_5 && (*VAR_5 || (VAR_10 && *VAR_4)))
    {
      if (VAR_15 != '-')
        FUNC_2 (VAR_1, "%s: `--%s' (`-%c') option given more than once%s\n",
               VAR_0, VAR_14, VAR_15,
               (VAR_16 ? VAR_16 : ""));
      else
        FUNC_2 (VAR_1, "%s: `--%s' option given more than once%s\n",
               VAR_0, VAR_14,
               (VAR_16 ? VAR_16 : ""));
      return 1;
    }

  if (VAR_7 && (VAR_19 = FUNC_1((VAR_6 ? VAR_6 : VAR_8), VAR_7)) < 0)
    {
      if (VAR_15 != '-')
        FUNC_2 (VAR_1, "%s: %s argument, \"%s\", for option `--%s' (`-%c')%s\n",
          VAR_0, (VAR_19 == -2) ? "ambiguous" : "invalid", VAR_6, VAR_14, VAR_15,
          (VAR_16 ? VAR_16 : ""));
      else
        FUNC_2 (VAR_1, "%s: %s argument, \"%s\", for option `--%s'%s\n",
          VAR_0, (VAR_19 == -2) ? "ambiguous" : "invalid", VAR_6, VAR_14,
          (VAR_16 ? VAR_16 : ""));
      return 1;
    }

  if (VAR_4 && *VAR_4 && ! VAR_11)
    return 0;
  if (VAR_5)
    (*VAR_5)++;
  if (VAR_4)
    (*VAR_4)++;
  if (VAR_7)
    VAR_18 = VAR_7[VAR_19];

  switch(VAR_9) {
  case 131:
    *((int *)VAR_2) = !*((int *)VAR_2);
    break;
  case 130:
    if (VAR_18) *((int *)VAR_2) = FUNC_5 (VAR_18, &VAR_17, 0);
    break;
  case 128:
    if (VAR_18) {
      VAR_20 = (char **)VAR_2;
      if (!VAR_12 && *VAR_20)
        FUNC_3 (*VAR_20);
      *VAR_20 = FUNC_4 (VAR_18);
    }
    break;
  default:
    break;
  };


  switch(VAR_9) {
  case 130:
    if (VAR_18 && !(VAR_17 && *VAR_17 == '\0')) {
      FUNC_2(VAR_1, "%s: invalid numeric value: %s\n", VAR_0, VAR_18);
      return 1;
    }
    break;
  default:
    ;
  };


  switch(VAR_9) {
  case 129:
  case 131:
    break;
  default:
    if (VAR_6 && VAR_3) {
      if (VAR_12) {
        *VAR_3 = VAR_6;
      } else {
        if (*VAR_3)
          FUNC_3 (*VAR_3);
        *VAR_3 = FUNC_4 (VAR_6);
      }
    }
  };

  return 0;
}
