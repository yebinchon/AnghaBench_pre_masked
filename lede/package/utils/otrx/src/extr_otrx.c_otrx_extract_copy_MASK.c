
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 size_t FUNC_3 (int *,int,size_t,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,size_t,int ) ;
 size_t FUNC_6 (int *,int,size_t,int *) ;
 int * FUNC_7 (size_t) ;
 int FUNC_8 (char*,size_t,char*) ;
 int VAR_3 ;
 char* VAR_4 ;

__attribute__((used)) static int FUNC_9(FILE *VAR_5, size_t VAR_6, size_t VAR_7, char *VAR_8) {
 FILE *VAR_9;
 size_t VAR_10;
 uint8_t *VAR_11;
 int VAR_12 = 0;

 VAR_9 = FUNC_1(VAR_8, "w");
 if (!VAR_9) {
  FUNC_2(VAR_3, "Couldn't open %s\n", VAR_8);
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_11 = FUNC_7(VAR_7);
 if (!VAR_11) {
  FUNC_2(VAR_3, "Couldn't alloc %zu B buffer\n", VAR_7);
  VAR_12 = -VAR_1;
  goto err_close;
 }

 FUNC_5(VAR_5, VAR_6, VAR_2);
 VAR_10 = FUNC_3(VAR_11, 1, VAR_7, VAR_5);
 if (VAR_10 != VAR_7) {
  FUNC_2(VAR_3, "Couldn't read %zu B of data from %s\n", VAR_7, VAR_4);
  VAR_12 = -VAR_1;
  goto err_free_buf;
 };

 VAR_10 = FUNC_6(VAR_11, 1, VAR_7, VAR_9);
 if (VAR_10 != VAR_7) {
  FUNC_2(VAR_3, "Couldn't write %zu B to %s\n", VAR_7, VAR_8);
  VAR_12 = -VAR_1;
  goto err_free_buf;
 }

 FUNC_8("Extracted 0x%zx bytes into %s\n", VAR_7, VAR_8);

err_free_buf:
 FUNC_4(VAR_11);
err_close:
 FUNC_0(VAR_9);
out:
 return VAR_12;
}
