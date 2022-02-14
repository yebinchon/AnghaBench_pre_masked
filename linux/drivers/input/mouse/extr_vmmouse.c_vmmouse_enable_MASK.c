
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct psmouse {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int,int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct psmouse*,char*,...) ;
 int FUNC_2 (struct psmouse*) ;

__attribute__((used)) static int FUNC_3(struct psmouse *VAR_9)
{
 u32 VAR_10, VAR_11;
 u32 VAR_12, VAR_13, VAR_14, VAR_15;





 FUNC_0(VAR_0, VAR_5,
      VAR_12, VAR_13, VAR_14, VAR_15);




 FUNC_0(VAR_3, 0, VAR_10, VAR_12, VAR_13, VAR_14);
 if ((VAR_10 & 0x0000ffff) == 0) {
  FUNC_1(VAR_9, "empty flags - assuming no device\n");
  return -VAR_4;
 }

 FUNC_0(VAR_1, 1 ,
      VAR_11, VAR_12, VAR_13, VAR_14);
 if (VAR_11 != VAR_8) {
  FUNC_1(VAR_9, "Unexpected version value: %u vs %u\n",
       (unsigned) VAR_11, VAR_8);
  FUNC_2(VAR_9);
  return -VAR_4;
 }




 FUNC_0(VAR_2, VAR_7,
      VAR_12, VAR_13, VAR_14, VAR_15);

 FUNC_0(VAR_0, VAR_6,
      VAR_12, VAR_13, VAR_14, VAR_15);

 return 0;
}
