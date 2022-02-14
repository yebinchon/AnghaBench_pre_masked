
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct parisc_device {TYPE_1__ dev; scalar_t__ hw_path; } ;
struct hardware_path {int* bc; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ,struct hardware_path*) ;
 int FUNC_2 (char*,char*,unsigned char) ;

__attribute__((used)) static void FUNC_3(struct parisc_device *VAR_0)
{
 struct hardware_path VAR_1;
 char VAR_2[28];
 char *VAR_3 = VAR_2;
 int VAR_4;

 FUNC_1(VAR_0->dev.parent, &VAR_1);

 for (VAR_4 = 0; VAR_4 < 6; VAR_4++) {
  if (VAR_1.bc[VAR_4] == -1)
   continue;
  VAR_3 += FUNC_2(VAR_3, "%u:", (unsigned char) VAR_1.bc[VAR_4]);
 }
 FUNC_2(VAR_3, "%u", (unsigned char) VAR_0->hw_path);
 FUNC_0(&VAR_0->dev, VAR_2);
}
