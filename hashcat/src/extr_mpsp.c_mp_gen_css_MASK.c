
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_12__ {int opts_type; } ;
typedef TYPE_1__ hashconfig_t ;
struct TYPE_13__ {TYPE_1__* hashconfig; } ;
typedef TYPE_2__ hashcat_ctx_t ;
struct TYPE_14__ {int* cs_buf; int cs_len; } ;
typedef TYPE_3__ cs_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 void* FUNC_4 (TYPE_2__*,int*,int,TYPE_3__*,size_t) ;

__attribute__((used)) static int FUNC_5 (hashcat_ctx_t *VAR_1, char *VAR_2, size_t VAR_3, cs_t *VAR_4, cs_t *VAR_5, cs_t *VAR_6, u32 *VAR_7)
{
  const hashconfig_t *VAR_8 = VAR_1->hashconfig;

  FUNC_3 (VAR_6, 0, 256 * sizeof (cs_t));

  size_t VAR_9;
  size_t VAR_10;

  for (VAR_9 = 0, VAR_10 = 0; VAR_9 < VAR_3; VAR_9++, VAR_10++)
  {
    char VAR_11 = VAR_2[VAR_9];

    if (VAR_11 == '?')
    {
      VAR_9++;

      if (VAR_9 == VAR_3)
      {
        FUNC_0 (VAR_1, "Syntax error in mask: %s", VAR_2);

        return -1;
      }

      char VAR_12 = VAR_2[VAR_9];

      u32 VAR_13 = (u32) VAR_12;

      int VAR_14 = 0;

      switch (VAR_12)
      {
        case 'l': VAR_14 = FUNC_4 (VAR_1, VAR_4[0].cs_buf, VAR_4[0].cs_len, VAR_6, VAR_10);
                  break;
        case 'u': VAR_14 = FUNC_4 (VAR_1, VAR_4[1].cs_buf, VAR_4[1].cs_len, VAR_6, VAR_10);
                  break;
        case 'd': VAR_14 = FUNC_4 (VAR_1, VAR_4[2].cs_buf, VAR_4[2].cs_len, VAR_6, VAR_10);
                  break;
        case 's': VAR_14 = FUNC_4 (VAR_1, VAR_4[3].cs_buf, VAR_4[3].cs_len, VAR_6, VAR_10);
                  break;
        case 'a': VAR_14 = FUNC_4 (VAR_1, VAR_4[4].cs_buf, VAR_4[4].cs_len, VAR_6, VAR_10);
                  break;
        case 'b': VAR_14 = FUNC_4 (VAR_1, VAR_4[5].cs_buf, VAR_4[5].cs_len, VAR_6, VAR_10);
                  break;
        case 'h': VAR_14 = FUNC_4 (VAR_1, VAR_4[6].cs_buf, VAR_4[6].cs_len, VAR_6, VAR_10);
                  break;
        case 'H': VAR_14 = FUNC_4 (VAR_1, VAR_4[7].cs_buf, VAR_4[7].cs_len, VAR_6, VAR_10);
                  break;
        case '1': if (VAR_5[0].cs_len == 0) { FUNC_0 (VAR_1, "Custom-charset 1 is undefined."); return -1; }
                  VAR_14 = FUNC_4 (VAR_1, VAR_5[0].cs_buf, VAR_5[0].cs_len, VAR_6, VAR_10);
                  break;
        case '2': if (VAR_5[1].cs_len == 0) { FUNC_0 (VAR_1, "Custom-charset 2 is undefined."); return -1; }
                  VAR_14 = FUNC_4 (VAR_1, VAR_5[1].cs_buf, VAR_5[1].cs_len, VAR_6, VAR_10);
                  break;
        case '3': if (VAR_5[2].cs_len == 0) { FUNC_0 (VAR_1, "Custom-charset 3 is undefined."); return -1; }
                  VAR_14 = FUNC_4 (VAR_1, VAR_5[2].cs_buf, VAR_5[2].cs_len, VAR_6, VAR_10);
                  break;
        case '4': if (VAR_5[3].cs_len == 0) { FUNC_0 (VAR_1, "Custom-charset 4 is undefined."); return -1; }
                  VAR_14 = FUNC_4 (VAR_1, VAR_5[3].cs_buf, VAR_5[3].cs_len, VAR_6, VAR_10);
                  break;
        case '?': VAR_14 = FUNC_4 (VAR_1, &VAR_13, 1, VAR_6, VAR_10);
                  break;
        default: FUNC_0 (VAR_1, "Syntax error in mask: %s", VAR_2);
                  return -1;
      }

      if (VAR_14 == -1) return -1;
    }
    else
    {
      if (VAR_8->opts_type & VAR_0)
      {
        VAR_9++;



        if (VAR_9 == VAR_3)
        {
          FUNC_0 (VAR_1, "The hex-charset option expects exactly 2 hexadecimal chars. Failed mask: %s", VAR_2);

          return -1;
        }

        char VAR_15 = VAR_2[VAR_9];



        if ((FUNC_2 ((u8) VAR_11) == 0) || (FUNC_2 ((u8) VAR_15) == 0))
        {
          FUNC_0 (VAR_1, "Invalid hex character detected in mask %s", VAR_2);

          return -1;
        }

        u32 VAR_16 = 0;

        VAR_16 |= (u32) FUNC_1 ((u8) VAR_15) << 0;
        VAR_16 |= (u32) FUNC_1 ((u8) VAR_11) << 4;

        const int VAR_17 = FUNC_4 (VAR_1, &VAR_16, 1, VAR_6, VAR_10);

        if (VAR_17 == -1) return -1;
      }
      else
      {
        u32 VAR_18 = (u32) VAR_11;

        const int VAR_19 = FUNC_4 (VAR_1, &VAR_18, 1, VAR_6, VAR_10);

        if (VAR_19 == -1) return -1;
      }
    }
  }

  if (VAR_10 == 0)
  {
    FUNC_0 (VAR_1, "Invalid mask length (0).");

    return -1;
  }

  *VAR_7 = VAR_10;

  return 0;
}
