
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int device_t ;
typedef int cell_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int*,int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, int *VAR_3)
{
 phandle_t VAR_4;
 cell_t VAR_5[5];
 int VAR_6;

 if ((VAR_4 = FUNC_3(VAR_2)) == -1) {
  if (VAR_1)
   FUNC_2(VAR_2, "no ofw node found\n");
  return (VAR_0);
 }
 VAR_6 = FUNC_1(VAR_4, "ibm,associativity");
 if (VAR_6 <= 0)
  return (VAR_0);
 FUNC_0(VAR_4, "ibm,associativity",
  VAR_5, VAR_6);

 *VAR_3 = VAR_5[3];
 if (VAR_1)
  FUNC_2(VAR_2, "domain(%d)\n", *VAR_3);
 return (0);
}
