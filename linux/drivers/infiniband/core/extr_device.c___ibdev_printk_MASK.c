
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct va_format {int dummy; } ;
struct TYPE_4__ {struct TYPE_4__* parent; } ;
struct ib_device {TYPE_1__ dev; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char const,TYPE_1__*,char*,int ,int ,int ,struct va_format*) ;
 int FUNC_3 (char*,char const*,struct va_format*,...) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0, const struct ib_device *VAR_1,
      struct va_format *VAR_2)
{
 if (VAR_1 && VAR_1->dev.parent)
  FUNC_2(VAR_0[1] - '0',
    VAR_1->dev.parent,
    "%s %s %s: %pV",
    FUNC_0(VAR_1->dev.parent),
    FUNC_1(VAR_1->dev.parent),
    FUNC_1(&VAR_1->dev),
    VAR_2);
 else if (VAR_1)
  FUNC_3("%s%s: %pV",
         VAR_0, FUNC_1(&VAR_1->dev), VAR_2);
 else
  FUNC_3("%s(NULL ib_device): %pV", VAR_0, VAR_2);
}
