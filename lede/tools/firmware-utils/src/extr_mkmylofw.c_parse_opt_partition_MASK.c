
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mylo_partition {scalar_t__ addr; scalar_t__ size; int flags; scalar_t__ param; } ;
struct fw_part {char* name; struct mylo_partition mylo; } ;
struct fw_block {scalar_t__ addr; scalar_t__ blocklen; int flags; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_10 ;
 struct fw_block* VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 struct fw_part* VAR_14 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char**) ;
 scalar_t__ FUNC_3 (char,char*) ;
 scalar_t__ FUNC_4 (char*,scalar_t__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int ) ;

int
FUNC_7(char VAR_15, char *VAR_16)
{
 char VAR_17[VAR_2];
 char *VAR_18[VAR_1];
 int VAR_19;
 char *VAR_20;
 struct mylo_partition *VAR_21;
 struct fw_part *VAR_22;

 if (FUNC_3(VAR_15, VAR_16)) {
  goto err_out;
 }

 if (VAR_13 >= VAR_4) {
  FUNC_0(0, "too many partitions specified");
  goto err_out;
 }

 VAR_22 = &VAR_14[VAR_13++];
 VAR_21 = &VAR_22->mylo;

 VAR_19 = FUNC_2(VAR_16, VAR_17, VAR_18);


 VAR_20 = VAR_18[0];
 if (FUNC_1(VAR_20)) {
  FUNC_0(0,"partition address missing in -%c %s",VAR_15, VAR_16);
  goto err_out;
 } else if (FUNC_4(VAR_20, &VAR_21->addr) != 0) {
  FUNC_0(0,"invalid partition address: %s", VAR_20);
  goto err_out;
 }


 VAR_20 = VAR_18[1];
 if (FUNC_1(VAR_20)) {
  FUNC_0(0,"partition size missing in -%c %s",VAR_15, VAR_16);
  goto err_out;
 } else if (FUNC_4(VAR_20, &VAR_21->size) != 0) {
  FUNC_0(0,"invalid partition size: %s", VAR_20);
  goto err_out;
 }


 VAR_20 = VAR_18[2];
 if (FUNC_1(VAR_20) == 0) {
  for ( ; *VAR_20 != '\0'; VAR_20++) {
   switch (*VAR_20) {
   case 'a':
    VAR_21->flags |= VAR_5;
    break;
   case 'p':
    VAR_21->flags |= VAR_8;
    break;
   case 'l':
    VAR_21->flags |= VAR_7;
    break;
   case 'h':
    VAR_21->flags |= VAR_6;
    break;
   default:
    FUNC_0(0, "invalid partition flag \"%c\"", *VAR_20);
    goto err_out;
   }
  }
 }


 VAR_20 = VAR_18[3];
 if (FUNC_1(VAR_20)) {

  VAR_21->param = 0;
 } else if (FUNC_4(VAR_20, &VAR_21->param) != 0) {
  FUNC_0(0,"invalid partition parameter: %s", VAR_20);
  goto err_out;
 }

 VAR_20 = VAR_18[4];
 if (FUNC_1(VAR_20)) {

  VAR_22->name[0] = '\0';
 } else {
  FUNC_6(VAR_22->name, VAR_20, VAR_9);
 }


 if (VAR_21->size == 0) {
  VAR_21->size = VAR_10 - VAR_21->addr;
 }


 VAR_20 = VAR_18[5];
 if (FUNC_1(VAR_20) == 0) {
  struct fw_block *VAR_23;

  if (VAR_12 == VAR_3) {
   FUNC_0(0,"too many blocks specified", VAR_20);
   goto err_out;
  }
  VAR_23 = &VAR_11[VAR_12++];
  VAR_23->name = FUNC_5(VAR_20);
  VAR_23->addr = VAR_21->addr;
  VAR_23->blocklen = VAR_21->size;
  if (VAR_21->flags & VAR_6) {
   VAR_23->flags |= VAR_0;
  }
 }


 return 0;

err_out:
 return -1;
}
