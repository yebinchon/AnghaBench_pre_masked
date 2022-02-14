
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct bcma_device {TYPE_1__ id; int bus; } ;


 int FUNC_0 (char const**) ;
 int FUNC_1 (int ,char*,int ,char*) ;
 int FUNC_2 (char*,char*,char const*,char) ;

__attribute__((used)) static void FUNC_3(struct bcma_device *VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 static const char *VAR_3[] = {"2(S)", "3", "4", "5", "6", "D", "I"};
 char VAR_4[25];
 char *VAR_5 = VAR_4;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_3); VAR_2++)
  VAR_5 += FUNC_2(VAR_5, " %s%c",
    VAR_3[VAR_2], VAR_2 == VAR_1 ? '*' : ' ');

 FUNC_1(VAR_0->bus, "core 0x%04x, irq:%s\n", VAR_0->id.id, VAR_4);
}
