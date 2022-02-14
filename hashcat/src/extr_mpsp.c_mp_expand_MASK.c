
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef char u32 ;
struct TYPE_10__ {int opts_type; } ;
typedef TYPE_1__ hashconfig_t ;
struct TYPE_11__ {TYPE_1__* hashconfig; } ;
typedef TYPE_2__ hashcat_ctx_t ;
struct TYPE_12__ {char* cs_buf; int cs_len; } ;
typedef TYPE_3__ cs_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (TYPE_2__*,char*,int,TYPE_3__*,char) ;

__attribute__((used)) static int FUNC_4 (hashcat_ctx_t *VAR_1, const char *VAR_2, size_t VAR_3, cs_t *VAR_4, cs_t *VAR_5, u32 VAR_6, int VAR_7)
{
  const hashconfig_t *VAR_8 = VAR_1->hashconfig;

  size_t VAR_9;

  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  {
    u32 VAR_10 = VAR_2[VAR_9] & 0xff;

    if (VAR_7 == 1 && VAR_10 == '?')
    {
      VAR_9++;

      if (VAR_9 == VAR_3)
      {
        FUNC_0 (VAR_1, "Syntax error in mask: %s", VAR_2);

        return -1;
      }

      u32 VAR_11 = VAR_2[VAR_9] & 0xff;

      int VAR_12 = 0;

      switch (VAR_11)
      {
        case 'l': VAR_12 = FUNC_3 (VAR_1, VAR_4[0].cs_buf, VAR_4[0].cs_len, VAR_5, VAR_6);
                  break;
        case 'u': VAR_12 = FUNC_3 (VAR_1, VAR_4[1].cs_buf, VAR_4[1].cs_len, VAR_5, VAR_6);
                  break;
        case 'd': VAR_12 = FUNC_3 (VAR_1, VAR_4[2].cs_buf, VAR_4[2].cs_len, VAR_5, VAR_6);
                  break;
        case 's': VAR_12 = FUNC_3 (VAR_1, VAR_4[3].cs_buf, VAR_4[3].cs_len, VAR_5, VAR_6);
                  break;
        case 'a': VAR_12 = FUNC_3 (VAR_1, VAR_4[4].cs_buf, VAR_4[4].cs_len, VAR_5, VAR_6);
                  break;
        case 'b': VAR_12 = FUNC_3 (VAR_1, VAR_4[5].cs_buf, VAR_4[5].cs_len, VAR_5, VAR_6);
                  break;
        case 'h': VAR_12 = FUNC_3 (VAR_1, VAR_4[6].cs_buf, VAR_4[6].cs_len, VAR_5, VAR_6);
                  break;
        case 'H': VAR_12 = FUNC_3 (VAR_1, VAR_4[7].cs_buf, VAR_4[7].cs_len, VAR_5, VAR_6);
                  break;
        case '1': if (VAR_5[0].cs_len == 0) { FUNC_0 (VAR_1, "Custom-charset 1 is undefined."); return -1; }
                  VAR_12 = FUNC_3 (VAR_1, VAR_5[0].cs_buf, VAR_5[0].cs_len, VAR_5, VAR_6);
                  break;
        case '2': if (VAR_5[1].cs_len == 0) { FUNC_0 (VAR_1, "Custom-charset 2 is undefined."); return -1; }
                  VAR_12 = FUNC_3 (VAR_1, VAR_5[1].cs_buf, VAR_5[1].cs_len, VAR_5, VAR_6);
                  break;
        case '3': if (VAR_5[2].cs_len == 0) { FUNC_0 (VAR_1, "Custom-charset 3 is undefined."); return -1; }
                  VAR_12 = FUNC_3 (VAR_1, VAR_5[2].cs_buf, VAR_5[2].cs_len, VAR_5, VAR_6);
                  break;
        case '4': if (VAR_5[3].cs_len == 0) { FUNC_0 (VAR_1, "Custom-charset 4 is undefined."); return -1; }
                  VAR_12 = FUNC_3 (VAR_1, VAR_5[3].cs_buf, VAR_5[3].cs_len, VAR_5, VAR_6);
                  break;
        case '?': VAR_12 = FUNC_3 (VAR_1, &VAR_10, 1, VAR_5, VAR_6);
                  break;
        default: FUNC_0 (VAR_1, "Syntax error in mask: %s", VAR_2);
                  return -1;
      }

      if (VAR_12 == -1) return -1;
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

        u32 VAR_13 = VAR_2[VAR_9] & 0xff;

        if ((FUNC_2 ((u8) VAR_10) == 0) || (FUNC_2 ((u8) VAR_13) == 0))
        {
          FUNC_0 (VAR_1, "Invalid hex character detected in mask %s", VAR_2);

          return -1;
        }

        u32 VAR_14 = 0;

        VAR_14 = (u32) FUNC_1 ((u8) VAR_13) << 0;
        VAR_14 |= (u32) FUNC_1 ((u8) VAR_10) << 4;

        const int VAR_15 = FUNC_3 (VAR_1, &VAR_14, 1, VAR_5, VAR_6);

        if (VAR_15 == -1) return -1;
      }
      else
      {
        u32 VAR_16 = VAR_10;

        const int VAR_17 = FUNC_3 (VAR_1, &VAR_16, 1, VAR_5, VAR_6);

        if (VAR_17 == -1) return -1;
      }
    }
  }

  return 0;
}
