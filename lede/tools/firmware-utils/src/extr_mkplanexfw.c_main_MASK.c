
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
typedef char uchar ;
struct stat {int st_size; } ;
struct planex_hdr {int sha1sum; int version; int * unk1; void* datalen; } ;
typedef int sha1_context ;
typedef int seed ;
struct TYPE_3__ {int datalen; int seed; int * unk; } ;
typedef int FILE ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 TYPE_1__* VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *) ;
 int * FUNC_7 (int *,char*) ;
 int FUNC_8 (char*,int,int,int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int,int,int *) ;
 int FUNC_11 (int,char**,char*) ;
 int * VAR_5 ;
 char* FUNC_12 (int) ;
 int FUNC_13 (char*,int,int) ;
 int * VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,char*,int) ;
 int FUNC_17 (int ,int,char*,char*) ;
 int FUNC_18 (int *,struct stat*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int) ;
 char* VAR_9 ;

int FUNC_21(int VAR_10, char *VAR_11[])
{
 int VAR_12 = VAR_0;
 int VAR_13;
 int VAR_14;
 struct stat VAR_15;
 char *VAR_16;
 struct planex_hdr *VAR_17;
 sha1_context VAR_18;
 uint32_t VAR_19;

 FILE *VAR_20, *VAR_21;

 VAR_8 = FUNC_3(VAR_11[0]);

 while ( 1 ) {
  int VAR_22;

  VAR_22 = FUNC_11(VAR_10, VAR_11, "B:i:o:v:h");
  if (VAR_22 == -1)
   break;

  switch (VAR_22) {
  case 'B':
   VAR_3 = VAR_7;
   break;
  case 'i':
   VAR_5 = VAR_7;
   break;
  case 'o':
   VAR_6 = VAR_7;
   break;
  case 'v':
   VAR_9 = VAR_7;
   break;
  case 'h':
   FUNC_20(VAR_1);
   break;
  default:
   FUNC_20(VAR_0);
   break;
  }
 }

 if (VAR_3 == ((void*)0)) {
  FUNC_0("no board specified");
  goto err;
 }

 VAR_2 = FUNC_6(VAR_3);
 if (VAR_2 == ((void*)0)) {
  FUNC_0("unknown board '%s'", VAR_3);
  goto err;
 };

 if (VAR_5 == ((void*)0)) {
  FUNC_0("no input file specified");
  goto err;
 }

 if (VAR_6 == ((void*)0)) {
  FUNC_0("no output file specified");
  goto err;
 }

 VAR_14 = FUNC_18(VAR_5, &VAR_15);
 if (VAR_14){
  FUNC_1("stat failed on %s", VAR_5);
  goto err;
 }

 if (VAR_15.st_size > VAR_2->datalen) {
  FUNC_0("file '%s' is too big - max size: 0x%08X (exceeds %lu bytes)\n",
      VAR_5, VAR_2->datalen, VAR_15.st_size - VAR_2->datalen);
  goto err;
 }

 VAR_13 = VAR_2->datalen + 0x10000;
 VAR_16 = FUNC_12(VAR_13);
 if (!VAR_16) {
  FUNC_0("no memory for buffer\n");
  goto err;
 }

 FUNC_13(VAR_16, 0xff, VAR_13);
 VAR_17 = (struct planex_hdr *)VAR_16;

 VAR_17->datalen = FUNC_2(VAR_2->datalen);
 VAR_17->unk1[0] = VAR_2->unk[0];
 VAR_17->unk1[1] = VAR_2->unk[1];

 FUNC_17(VAR_17->version, sizeof(VAR_17->version), "%s", VAR_9);

 VAR_21 = FUNC_7(VAR_5, "r");
 if (VAR_21 == ((void*)0)) {
  FUNC_1("could not open \"%s\" for reading", VAR_5);
  goto err_free;
 }

 VAR_4 = 0;
 FUNC_8(VAR_16 + sizeof(*VAR_17), VAR_15.st_size, 1, VAR_21);
 if (VAR_4 != 0) {
  FUNC_1("unable to read from file %s", VAR_5);
  goto err_close_in;
 }

 VAR_19 = FUNC_2(VAR_2->seed);
 FUNC_15(&VAR_18);
 FUNC_16(&VAR_18, (uchar *) &VAR_19, sizeof(VAR_19));
 FUNC_16(&VAR_18, VAR_16 + sizeof(*VAR_17), VAR_2->datalen);
 FUNC_14(&VAR_18, VAR_17->sha1sum);

 VAR_20 = FUNC_7(VAR_6, "w");
 if (VAR_20 == ((void*)0)) {
  FUNC_1("could not open \"%s\" for writing", VAR_6);
  goto err_close_in;
 }

 VAR_4 = 0;
 FUNC_10(VAR_16, VAR_13, 1, VAR_20);
 if (VAR_4) {
  FUNC_1("unable to write to file %s", VAR_6);
  goto err_close_out;
 }

 VAR_12 = VAR_1;

 out_flush:
 FUNC_5(VAR_20);

 err_close_out:
 FUNC_4(VAR_20);
 if (VAR_12 != VAR_1) {
  FUNC_19(VAR_6);
 }

 err_close_in:
 FUNC_4(VAR_21);

 err_free:
 FUNC_9(VAR_16);

 err:
 return VAR_12;
}
