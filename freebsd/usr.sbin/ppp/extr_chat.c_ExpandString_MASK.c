
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct chat {TYPE_5__* physical; int phone; } ;
struct TYPE_10__ {TYPE_4__* dl; } ;
struct TYPE_9__ {TYPE_3__* bundle; } ;
struct TYPE_6__ {int name; int key; } ;
struct TYPE_7__ {TYPE_1__ auth; } ;
struct TYPE_8__ {TYPE_2__ cfg; } ;


 int VAR_0 ;
 int FUNC_0 (struct chat*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static char *
FUNC_3(struct chat *VAR_1, const char *VAR_2, char *VAR_3, int VAR_4, int VAR_5)
{
  int VAR_6;

  VAR_3[--VAR_4] = '\0';
  while (*VAR_2 && VAR_4 > 0) {
    switch (*VAR_2) {
    case '\\':
      VAR_2++;
      switch (*VAR_2) {
      case 'c':
 VAR_5 = 0;
 break;
      case 'd':
        FUNC_0(VAR_1, 2 * VAR_0);
 break;
      case 'p':
        FUNC_0(VAR_1, VAR_0 / 4);
 break;
      case 'n':
 *VAR_3++ = '\n';
 VAR_4--;
 break;
      case 'r':
 *VAR_3++ = '\r';
 VAR_4--;
 break;
      case 's':
 *VAR_3++ = ' ';
 VAR_4--;
 break;
      case 't':
 *VAR_3++ = '\t';
 VAR_4--;
 break;
      case 'P':
 FUNC_2(VAR_3, VAR_1->physical->dl->bundle->cfg.auth.key, VAR_4);
        VAR_6 = FUNC_1(VAR_3);
 VAR_4 -= VAR_6;
 VAR_3 += VAR_6;
 break;
      case 'T':
        if (VAR_1->phone) {
          FUNC_2(VAR_3, VAR_1->phone, VAR_4);
          VAR_6 = FUNC_1(VAR_3);
          VAR_4 -= VAR_6;
          VAR_3 += VAR_6;
        }
 break;
      case 'U':
 FUNC_2(VAR_3, VAR_1->physical->dl->bundle->cfg.auth.name, VAR_4);
        VAR_6 = FUNC_1(VAR_3);
 VAR_4 -= VAR_6;
 VAR_3 += VAR_6;
 break;
      default:
 VAR_4--;
 *VAR_3++ = *VAR_2;
 break;
      }
      if (*VAR_2)
 VAR_2++;
      break;
    case '^':
      VAR_2++;
      if (*VAR_2) {
 *VAR_3++ = *VAR_2++ & 0x1f;
 VAR_4--;
      }
      break;
    default:
      *VAR_3++ = *VAR_2++;
      VAR_4--;
      break;
    }
  }
  if (--VAR_4 > 0) {
    if (VAR_5)
      *VAR_3++ = '\r';
  }
  if (--VAR_4 > 0)
    *VAR_3++ = '\0';
  return (VAR_3);
}
