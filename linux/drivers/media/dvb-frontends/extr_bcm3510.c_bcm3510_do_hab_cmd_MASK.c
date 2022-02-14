
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bcm3510_state {int hab_mutex; } ;
typedef int ob ;
typedef int ib ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm3510_state*,int*,int) ;
 int FUNC_1 (struct bcm3510_state*,int*,int) ;
 int FUNC_2 (int*,int,int (*) (char*)) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int*,int*,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct bcm3510_state *VAR_3, u8 VAR_4, u8 VAR_5, u8 *VAR_6, u8 VAR_7, u8 *VAR_8, u8 VAR_9)
{
 u8 VAR_10[VAR_2], VAR_11[VAR_2];
 int VAR_12 = 0;

 if (VAR_9 + 2 > sizeof(VAR_11)) {
  FUNC_3("do_hab_cmd: ilen=%d is too big!\n", VAR_9);
  return -VAR_1;
 }

 if (VAR_7 + 2 > sizeof(VAR_10)) {
  FUNC_3("do_hab_cmd: olen=%d is too big!\n", VAR_7);
  return -VAR_1;
 }

 VAR_10[0] = VAR_4;
 VAR_10[1] = VAR_5;
 FUNC_4(&VAR_10[2],VAR_6,VAR_7);

 FUNC_3("hab snd: ");
 FUNC_2(VAR_10,VAR_7+2,FUNC_3);
 FUNC_3("\n");

 if (FUNC_5(&VAR_3->hab_mutex) < 0)
  return -VAR_0;

 if ((VAR_12 = FUNC_1(VAR_3, VAR_10, VAR_7+2)) < 0 ||
  (VAR_12 = FUNC_0(VAR_3, VAR_11, VAR_9+2)) < 0)
  goto error;

 FUNC_3("hab get: ");
 FUNC_2(VAR_11,VAR_9+2,FUNC_3);
 FUNC_3("\n");

 FUNC_4(VAR_8,&VAR_11[2],VAR_9);
error:
 FUNC_6(&VAR_3->hab_mutex);
 return VAR_12;
}
