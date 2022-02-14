
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commandline {int makefileflag; char* outfile; int infile; scalar_t__ nflag; scalar_t__ mflag; scalar_t__ hflag; scalar_t__ Scflag; scalar_t__ Ssflag; scalar_t__ tflag; scalar_t__ sflag; scalar_t__ lflag; scalar_t__ cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char const** VAR_5 ;
 char const** VAR_6 ;
 int FUNC_0 (int ,char*,int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,char*,scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int ,char*,int ,char*) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (struct commandline*) ;
 int VAR_8 ;
 int FUNC_8 (int,char const**,struct commandline*) ;
 int FUNC_9 () ;
 int FUNC_10 (int,char const**,int ,char*,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_11 (int ,char*,int ,char*) ;
 int FUNC_12 (int ,char*,int ,char*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_13 () ;

int
FUNC_14(int VAR_11, const char *VAR_12[])
{
 struct commandline VAR_13;

 (void) FUNC_6((char *)&VAR_13, 0, sizeof (struct commandline));
 if (!FUNC_8(VAR_11, VAR_12, &VAR_13))
  FUNC_13();





 if (VAR_13.Ssflag || VAR_13.Scflag || VAR_13.makefileflag) {
  FUNC_1(VAR_13.infile, VAR_13.outfile);
 }
 else
  FUNC_1(VAR_13.infile, ((void*)0));

 if (VAR_13.cflag) {
  FUNC_0(VAR_13.infile, "-DRPC_XDR", VAR_0, VAR_13.outfile);
 } else if (VAR_13.hflag) {
  FUNC_4(VAR_13.infile, "-DRPC_HDR", VAR_0, VAR_13.outfile,
      VAR_13.hflag);
 } else if (VAR_13.lflag) {
  FUNC_5(VAR_13.infile, "-DRPC_CLNT", VAR_0, VAR_13.outfile);
 } else if (VAR_13.sflag || VAR_13.mflag || (VAR_13.nflag)) {
  FUNC_10(VAR_11, VAR_12, VAR_13.infile, "-DRPC_SVC", VAR_0,
   VAR_13.outfile, VAR_13.mflag, VAR_13.nflag);
 } else if (VAR_13.tflag) {
  FUNC_12(VAR_13.infile, "-DRPC_TBL", VAR_0, VAR_13.outfile);
 } else if (VAR_13.Ssflag) {
  FUNC_11(VAR_13.infile, "-DRPC_SERVER", VAR_0,
   VAR_13.outfile);
 } else if (VAR_13.Scflag) {
  FUNC_2(VAR_13.infile, "-DRPC_CLIENT", VAR_0,
       VAR_13.outfile);
 } else if (VAR_13.makefileflag) {
  FUNC_7(&VAR_13);
 } else {

  FUNC_0(VAR_13.infile, "-DRPC_XDR", VAR_1, "_xdr.c");
  FUNC_9();
  FUNC_4(VAR_13.infile, "-DRPC_HDR", VAR_1, ".h", VAR_13.hflag);
  FUNC_9();
  FUNC_5(VAR_13.infile, "-DRPC_CLNT", VAR_1, "_clnt.c");
  FUNC_9();
  if (VAR_7 || !VAR_10)
   FUNC_10(VAR_2, VAR_6, VAR_13.infile, "-DRPC_SVC", VAR_1,
   "_svc.c", VAR_13.mflag, VAR_13.nflag);
  else
   FUNC_10(VAR_4, VAR_5, VAR_13.infile, "-DRPC_SVC",
    VAR_1, "_svc.c", VAR_13.mflag, VAR_13.nflag);
  if (VAR_9) {
   FUNC_9();
   FUNC_12(VAR_13.infile, "-DRPC_TBL", VAR_1, "_tbl.i");
  }

  if (VAR_3) {
   FUNC_9();
   FUNC_11(VAR_13.infile, "-DRPC_SERVER", VAR_1,
    "_server.c");
   FUNC_9();
   FUNC_2(VAR_13.infile, "-DRPC_CLIENT", VAR_1,
    "_client.c");

  }
  if (VAR_3 || (VAR_13.makefileflag == 1)){
   FUNC_9();
   FUNC_7(&VAR_13);
  }

 }
 FUNC_3(VAR_8);

}
