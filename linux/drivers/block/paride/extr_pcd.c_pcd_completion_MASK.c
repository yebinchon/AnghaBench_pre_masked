
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcd_unit {int pi; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct pcd_unit*,int ,int,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct pcd_unit*,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct pcd_unit *VAR_6, char *VAR_7, char *VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_9 = -1;
 VAR_13 = 0;
 VAR_14 = 0;

 if (!FUNC_1(VAR_6, VAR_0, VAR_1 | VAR_3 | VAR_2,
        VAR_8, "completion")) {
  VAR_9 = 0;
  while (FUNC_6(VAR_6, 7) & VAR_1) {
   VAR_10 = FUNC_6(VAR_6, 4) + 256 * FUNC_6(VAR_6, 5);
   VAR_12 = (VAR_10 + 3) & 0xfffc;
   VAR_11 = FUNC_6(VAR_6, 2) & 3;

   if ((VAR_11 == 2) && (VAR_12 > 0) && (VAR_14 == 0)) {
    FUNC_3(VAR_6->pi, VAR_7, VAR_12);
    if (VAR_5 > 1)
     FUNC_4("%s: %s: Read %d bytes\n",
            VAR_6->name, VAR_8, VAR_12);
    VAR_9 = 0;
    VAR_14++;
   } else {
    if (VAR_5 > 1)
     FUNC_4
         ("%s: %s: Unexpected phase %d, d=%d, k=%d\n",
          VAR_6->name, VAR_8, VAR_11, VAR_10, VAR_13);
    if (VAR_5 < 2)
     FUNC_5(
         "%s: WARNING: ATAPI phase errors\n",
         VAR_6->name);
    FUNC_0(1);
   }
   if (VAR_13++ > VAR_4) {
    FUNC_4("%s: Stuck DRQ\n", VAR_6->name);
    break;
   }
   if (FUNC_1
       (VAR_6, VAR_0, VAR_1 | VAR_3 | VAR_2, VAR_8,
        "completion")) {
    VAR_9 = -1;
    break;
   }
  }
 }

 FUNC_2(VAR_6->pi);

 return VAR_9;
}
