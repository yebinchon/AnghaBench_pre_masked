
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct ngdevice {TYPE_1__ dev; int cs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*,char*,char const*) ;
 char* FUNC_1 (size_t) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (char*,char*) ;
 size_t FUNC_5 (char const*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char const*,char*) ;

__attribute__((used)) static int
FUNC_8(struct ngdevice *VAR_4, const char *VAR_5)
{
  char VAR_6[VAR_2];
  char *VAR_7;
  size_t VAR_8;
  int VAR_9, VAR_10;





  VAR_5 += FUNC_7(VAR_5, " \t");
  VAR_8 = FUNC_5(VAR_5, " \t");
  if (VAR_8 >= sizeof VAR_6) {
    FUNC_2(VAR_1, "%s: %.*s: Node path too long\n",
                 VAR_4->dev.name, VAR_8, VAR_5);
    return 0;
  }
  FUNC_3(VAR_6, VAR_5, VAR_8);
  VAR_6[VAR_8] = '\0';
  VAR_5 += VAR_8;

  VAR_5 += FUNC_7(VAR_5, " \t");
  VAR_8 = FUNC_5(VAR_5, " \t");
  for (VAR_9 = VAR_8; VAR_9 >= 0; VAR_9--)
    if (VAR_5[VAR_9] == '%')
      VAR_8++;
  if ((VAR_7 = FUNC_1(VAR_8 + 4)) == ((void*)0)) {
    FUNC_2(VAR_1, "%s: alloca(%d) failure... %s\n",
               VAR_4->dev.name, VAR_8 + 4, FUNC_6(VAR_3));
    return 0;
  }





  for (VAR_9 = VAR_10 = 0; VAR_9 < (int)VAR_8;) {
    if (VAR_5[VAR_10] == '%')
      VAR_7[VAR_9++] = '%';
    VAR_7[VAR_9++] = VAR_5[VAR_10++];
  }
  FUNC_4(VAR_7 + VAR_9, " %s");
  VAR_5 += VAR_10;

  VAR_5 += FUNC_7(VAR_5, " \t");
  if (FUNC_0(VAR_4->cs, VAR_6, VAR_7, VAR_5) < 0) {
    FUNC_2(VAR_0, "%s: NgSendAsciiMsg (to %s): \"%s\", \"%s\": %s\n",
               VAR_4->dev.name, VAR_6, VAR_7, VAR_5, FUNC_6(VAR_3));
    return 0;
  }

  return 1;
}
