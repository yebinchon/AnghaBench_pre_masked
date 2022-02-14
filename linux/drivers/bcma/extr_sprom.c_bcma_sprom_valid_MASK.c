
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int revision; } ;
struct bcma_bus {TYPE_1__ sprom; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (struct bcma_bus*,char*,int) ;
 int FUNC_1 (int const*,size_t) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct bcma_bus *VAR_2, const u16 *VAR_3,
       size_t VAR_4)
{
 u16 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_5 = VAR_3[VAR_4 - 1] & VAR_1;
 if (VAR_5 != 8 && VAR_5 != 9 && VAR_5 != 10) {
  FUNC_2("Unsupported SPROM revision: %d\n", VAR_5);
  return -VAR_0;
 }

 VAR_2->sprom.revision = VAR_5;
 FUNC_0(VAR_2, "Found SPROM revision %d\n", VAR_5);

 return 0;
}
