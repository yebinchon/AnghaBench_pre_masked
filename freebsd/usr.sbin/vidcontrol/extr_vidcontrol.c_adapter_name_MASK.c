
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char
*FUNC_0(int VAR_0)
{
    static struct {
 int type;
 const char *name;
    } VAR_1[] = {
 { 130, "MDA" },
 { 131, "Hercules" },
 { 133, "CGA" },
 { 132, "EGA" },
 { 128, "VGA" },
 { 129, "TGA" },
 { -1, "Unknown" },
    };

    int VAR_2;

    for (VAR_2 = 0; VAR_1[VAR_2].type != -1; ++VAR_2)
 if (VAR_1[VAR_2].type == VAR_0)
     break;
    return VAR_1[VAR_2].name;
}
