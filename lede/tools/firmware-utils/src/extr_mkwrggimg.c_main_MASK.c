
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wrgg03_header {int devname; int offset; int size; int buildno; int reserve; int flag; int model; int version; int magic2; int magic1; int signature; } ;
struct stat {int st_size; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_7 ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (char*,int,int,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,int,int *) ;
 int FUNC_9 (struct wrgg03_header*,char*,int) ;
 int FUNC_10 (int,char**,char*) ;
 int * VAR_8 ;
 char* FUNC_11 (int) ;
 int FUNC_12 (struct wrgg03_header*,char,int) ;
 int * VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int FUNC_13 (int *,int,int) ;
 int VAR_14 ;
 int * VAR_15 ;
 int FUNC_14 (int *,struct stat*) ;
 int FUNC_15 (int ,int *,int) ;
 int FUNC_16 (void*,int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int) ;
 int * VAR_16 ;

int FUNC_19(int VAR_17, char *VAR_18[])
{
 struct wrgg03_header *VAR_19;
 char *VAR_20;
 struct stat VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24 = VAR_0;

 FILE *VAR_25, *VAR_26;

 VAR_13 = FUNC_2(VAR_18[0]);

 while ( 1 ) {
  int VAR_27;

  VAR_27 = FUNC_10(VAR_17, VAR_18, "bd:i:m:o:s:v:B:O:h");
  if (VAR_27 == -1)
   break;

  switch (VAR_27) {
  case 'b':
   VAR_3 = 1;
   break;
  case 'B':
   VAR_4 = VAR_12;
   break;
  case 'd':
   VAR_5 = VAR_12;
   break;
  case 'i':
   VAR_8 = VAR_12;
   break;
  case 'm':
   VAR_9 = VAR_12;
   break;
  case 'o':
   VAR_11 = VAR_12;
   break;
  case 's':
   VAR_15 = VAR_12;
   break;
  case 'v':
   VAR_16 = VAR_12;
   break;
  case 'O':
   VAR_10 = FUNC_16(VAR_12, ((void*)0), 0);
   break;
  case 'h':
   FUNC_18(VAR_1);
   break;

  default:
   FUNC_18(VAR_0);
   break;
  }
 }

 if (VAR_15 == ((void*)0)) {
  FUNC_0("no signature specified");
  goto err;
 }

 if (VAR_8 == ((void*)0)) {
  FUNC_0("no input file specified");
  goto err;
 }

 if (VAR_11 == ((void*)0)) {
  FUNC_0("no output file specified");
  goto err;
 }

 if (VAR_5 == ((void*)0)) {
  FUNC_0("no device name specified");
  goto err;
 }

 if (VAR_9 == ((void*)0)) {
  FUNC_0("no model name specified");
  goto err;
 }

 if (VAR_4 == ((void*)0)) {
  FUNC_0("no build number specified");
  goto err;
 }

 if (VAR_16 == ((void*)0)) {
  FUNC_0("no version specified");
  goto err;
 }

 VAR_23 = FUNC_14(VAR_8, &VAR_21);
 if (VAR_23){
  FUNC_1("stat failed on %s", VAR_8);
  goto err;
 }

 VAR_22 = VAR_21.st_size + sizeof(struct wrgg03_header);
 VAR_20 = FUNC_11(VAR_22);
 if (!VAR_20) {
  FUNC_0("no memory for buffer\n");
  goto err;
 }

 VAR_26 = FUNC_5(VAR_8, "r");
 if (VAR_26 == ((void*)0)) {
  FUNC_1("could not open \"%s\" for reading", VAR_8);
  goto err_free;
 }

 VAR_6 = 0;
 FUNC_6(VAR_20 + sizeof(struct wrgg03_header), VAR_21.st_size, 1, VAR_26);
 if (VAR_6 != 0) {
  FUNC_1("unable to read from file %s", VAR_8);
  goto close_in;
 }

 VAR_19 = (struct wrgg03_header *) VAR_20;
 FUNC_12(VAR_19, '\0', sizeof(struct wrgg03_header));

 FUNC_15(VAR_19->signature, VAR_15, sizeof(VAR_19->signature));
 FUNC_13(&VAR_19->magic1, VAR_2, 0);
 FUNC_13(&VAR_19->magic2, VAR_2, 0);
 FUNC_15(VAR_19->version, VAR_16, sizeof(VAR_19->version));
 FUNC_15(VAR_19->model, VAR_9, sizeof(VAR_19->model));
 FUNC_13(&VAR_19->flag, VAR_7, 0);
 FUNC_13(&VAR_19->reserve, VAR_14, 0);
 FUNC_15(VAR_19->buildno, VAR_4, sizeof(VAR_19->buildno));
 FUNC_13(&VAR_19->size, VAR_21.st_size, VAR_3);
 FUNC_13(&VAR_19->offset, VAR_10, VAR_3);
 FUNC_15(VAR_19->devname, VAR_5, sizeof(VAR_19->devname));

 FUNC_9(VAR_19, VAR_20 + sizeof(struct wrgg03_header), VAR_21.st_size);

 VAR_25 = FUNC_5(VAR_11, "w");
 if (VAR_25 == ((void*)0)) {
  FUNC_1("could not open \"%s\" for writing", VAR_11);
  goto close_in;
 }

 VAR_6 = 0;
 FUNC_8(VAR_20, VAR_22, 1, VAR_25);
 if (VAR_6) {
  FUNC_1("unable to write to file %s", VAR_11);
  goto close_out;
 }

 FUNC_4(VAR_25);

 VAR_24 = VAR_1;

close_out:
 FUNC_3(VAR_25);
 if (VAR_24 != VAR_1)
  FUNC_17(VAR_11);
close_in:
 FUNC_3(VAR_26);
err_free:
 FUNC_7(VAR_20);
err:
 return VAR_24;
}
