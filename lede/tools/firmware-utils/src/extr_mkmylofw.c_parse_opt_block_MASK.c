
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_block {int * name; int flags; int blocklen; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 struct fw_block* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,char**) ;
 scalar_t__ FUNC_4 (char,char*) ;
 scalar_t__ FUNC_5 (char*,int *) ;
 int * FUNC_6 (char*) ;

int
FUNC_7(char VAR_6, char *VAR_7)
{
 char VAR_8[VAR_2];
 char *VAR_9[VAR_1];
 int VAR_10;
 struct fw_block *VAR_11;
 char *VAR_12;

 if (FUNC_4(VAR_6, VAR_7)) {
  goto err_out;
 }

 if (VAR_5 >= VAR_3) {
  FUNC_1(0,"too many blocks specified");
  goto err_out;
 }

 VAR_10 = FUNC_3(VAR_7, VAR_8, VAR_9);
 FUNC_0(1,"processing block option %s, count %d", VAR_7, VAR_10);

 VAR_11 = &VAR_4[VAR_5++];


 VAR_12 = VAR_9[0];
 if (FUNC_2(VAR_12)) {
  FUNC_1(0,"no block address specified in %s", VAR_7);
  goto err_out;
 } else if (FUNC_5(VAR_12, &VAR_11->addr) != 0) {
  FUNC_1(0,"invalid block address: %s", VAR_12);
  goto err_out;
 }


 VAR_12 = VAR_9[1];
 if (FUNC_2(VAR_12)) {
  FUNC_1(0,"no block length specified in %s", VAR_7);
  goto err_out;
 } else if (FUNC_5(VAR_12, &VAR_11->blocklen) != 0) {
  FUNC_1(0,"invalid block length: %s", VAR_12);
  goto err_out;
 }

 if (VAR_10 < 3) {
  FUNC_0(1,"empty block %s", VAR_7);
  goto success;
 }


 VAR_12 = VAR_9[2];
 if (FUNC_2(VAR_12) == 0) {
  for ( ; *VAR_12 != '\0'; VAR_12++) {
   switch (*VAR_12) {
   case 'h':
    VAR_11->flags |= VAR_0;
    break;
   default:
    FUNC_1(0, "invalid block flag \"%c\"", *VAR_12);
    goto err_out;
   }
  }
 }


 VAR_12 = VAR_9[3];
 if (FUNC_2(VAR_12)) {
  FUNC_1(0,"file name missing in %s", VAR_7);
  goto err_out;
 }

 VAR_11->name = FUNC_6(VAR_12);
 if (VAR_11->name == ((void*)0)) {
  FUNC_1(0,"not enough memory");
  goto err_out;
 }

success:

 return 0;

err_out:
 return -1;
}
