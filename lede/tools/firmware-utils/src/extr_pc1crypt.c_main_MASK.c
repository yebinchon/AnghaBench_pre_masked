
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {unsigned int st_size; } ;
struct pc1_ctx {int dummy; } ;
typedef int FILE ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (char*,unsigned int,int,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,unsigned int,int,int *) ;
 int FUNC_9 (int,char**,char*) ;
 int * VAR_5 ;
 char* FUNC_10 (unsigned int) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_11 (struct pc1_ctx*,char*,unsigned int) ;
 int FUNC_12 (struct pc1_ctx*,char*,unsigned int) ;
 int FUNC_13 (struct pc1_ctx*) ;
 int FUNC_14 (struct pc1_ctx*) ;
 int VAR_8 ;
 int FUNC_15 (int *,struct stat*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int) ;

int FUNC_18(int VAR_9, char *VAR_10[])
{
 struct pc1_ctx VAR_11;
 int VAR_12 = VAR_1;
 int VAR_13;
 struct stat VAR_14;
 char *VAR_15;
 unsigned VAR_16;

 FILE *VAR_17, *VAR_18;

 VAR_8 = FUNC_2(VAR_10[0]);

 while ( 1 ) {
  int VAR_19;

  VAR_19 = FUNC_9(VAR_9, VAR_10, "di:o:h");
  if (VAR_19 == -1)
   break;

  switch (VAR_19) {
  case 'd':
   VAR_3 = 1;
   break;
  case 'i':
   VAR_5 = VAR_7;
   break;
  case 'o':
   VAR_6 = VAR_7;
   break;
  case 'h':
   FUNC_17(VAR_2);
   break;
  default:
   FUNC_17(VAR_1);
   break;
  }
 }

 if (VAR_5 == ((void*)0)) {
  FUNC_0("no input file specified");
  goto err;
 }

 if (VAR_6 == ((void*)0)) {
  FUNC_0("no output file specified");
  goto err;
 }

 VAR_13 = FUNC_15(VAR_5, &VAR_14);
 if (VAR_13){
  FUNC_1("stat failed on %s", VAR_5);
  goto err;
 }

 VAR_16 = VAR_14.st_size;
 VAR_15 = FUNC_10(VAR_0);
 if (!VAR_15) {
  FUNC_0("no memory for buffer\n");
  goto err;
 }

 VAR_18 = FUNC_5(VAR_5, "r");
 if (VAR_18 == ((void*)0)) {
  FUNC_1("could not open \"%s\" for reading", VAR_5);
  goto err_free;
 }

 VAR_17 = FUNC_5(VAR_6, "w");
 if (VAR_17 == ((void*)0)) {
  FUNC_1("could not open \"%s\" for writing", VAR_6);
  goto err_close_in;
 }

 FUNC_14(&VAR_11);
 while (VAR_16 > 0) {
  unsigned VAR_20;

  if (VAR_16 > VAR_0)
   VAR_20 = VAR_0;
  else
   VAR_20 = VAR_16;

  VAR_4 = 0;
  FUNC_6(VAR_15, VAR_20, 1, VAR_18);
  if (VAR_4 != 0) {
   FUNC_1("unable to read from file %s", VAR_5);
   goto err_close_out;
  }

  if (VAR_3)
   FUNC_11(&VAR_11, VAR_15, VAR_20);
  else
   FUNC_12(&VAR_11, VAR_15, VAR_20);

  VAR_4 = 0;
  FUNC_8(VAR_15, VAR_20, 1, VAR_17);
  if (VAR_4) {
   FUNC_1("unable to write to file %s", VAR_6);
   goto err_close_out;
  }

  VAR_16 -= VAR_20;
 }
 FUNC_13(&VAR_11);

 VAR_12 = VAR_2;

 out_flush:
 FUNC_4(VAR_17);

 err_close_out:
 FUNC_3(VAR_17);
 if (VAR_12 != VAR_2) {
  FUNC_16(VAR_6);
 }

 err_close_in:
 FUNC_3(VAR_18);

 err_free:
 FUNC_7(VAR_15);

 err:
 return VAR_12;
}
