
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_tape_errors {int io_resid; int* io_cdb; int* io_sense; int ctl_resid; int* ctl_cdb; int* ctl_sense; } ;
union mterrstat {struct scsi_tape_errors scsi_errstat; } ;
typedef int u_int32_t ;
struct mtrblim {int mt_op; int mt_count; int min_block_length; int max_block_length; int granularity; } ;
struct mtop {int mt_op; int mt_count; int min_block_length; int max_block_length; int granularity; } ;
struct mtget {int mt_op; int mt_count; int min_block_length; int max_block_length; int granularity; } ;
struct commands {int c_flags; int c_code; int * c_name; scalar_t__ c_ronly; } ;
typedef int rblim ;
typedef int mt_com ;
typedef struct mtrblim* caddr_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int const VAR_4 ;
 int const VAR_5 ;
 int VAR_6 ;


 char* FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct mtrblim*,int) ;
 struct commands* VAR_12 ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int,char*,char const*) ;
 int FUNC_5 (int) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int,char**,char*) ;
 scalar_t__ FUNC_8 (int,int const,struct mtrblim*) ;
 int FUNC_9 (char) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int,char**,int,char const*) ;
 int FUNC_12 (int const,int,char**,int,char const*) ;
 int FUNC_13 (char const*,int ) ;
 char* VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (struct mtrblim*) ;
 scalar_t__ FUNC_16 (char const*,char*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char const*) ;
 scalar_t__ FUNC_19 (char const*,int *,int) ;
 int FUNC_20 (char*,char**,int ) ;
 int FUNC_21 () ;
 int FUNC_22 () ;

int
FUNC_23(int VAR_15, char *VAR_16[])
{
 const struct commands *VAR_17;
 struct mtget VAR_18;
 struct mtop VAR_19;
 int VAR_20, VAR_21, VAR_22;
 const char *VAR_23, *VAR_24;

 FUNC_1(&VAR_19, sizeof(VAR_19));

 if ((VAR_24 = FUNC_6("TAPE")) == ((void*)0))
  VAR_24 = VAR_0;

 while ((VAR_20 = FUNC_7(VAR_15, VAR_16, "f:t:")) != -1)
  switch(VAR_20) {
  case 'f':
  case 't':
   VAR_24 = VAR_13;
   break;
  case '?':
   FUNC_21();
   break;
  default:
   break;
  }
 VAR_15 -= VAR_14;
 VAR_16 += VAR_14;

 if (VAR_15 < 1)
  FUNC_21();

 VAR_21 = FUNC_18(VAR_23 = *VAR_16++);
 for (VAR_17 = VAR_12;; VAR_17++) {
  if (VAR_17->c_name == ((void*)0))
   FUNC_4(1, "%s: unknown command", VAR_23);
  if (FUNC_19(VAR_23, VAR_17->c_name, VAR_21) == 0)
   break;
 }
 if((VAR_17->c_flags & VAR_7) && VAR_15 != 2)
  FUNC_21();
 if(VAR_17->c_flags & VAR_1) {
  FUNC_22();
 }
 if (VAR_17->c_flags & VAR_10) {
  VAR_15--;
  VAR_14 = 0;
 }

 if ((VAR_22 = FUNC_13(VAR_24, VAR_17->c_ronly ? VAR_8 : VAR_9)) < 0)
  FUNC_3(1, "%s", VAR_24);
 if (VAR_17->c_code != VAR_6) {
  VAR_19.mt_op = VAR_17->c_code;
  if (*VAR_16) {
   if (!FUNC_9(**VAR_16) &&
       (VAR_17->c_flags & VAR_3)) {
    const char *VAR_25;
    VAR_19.mt_count = FUNC_10(*VAR_16);
    if (VAR_19.mt_count == 0)
     FUNC_4(1, "%s: unknown density", *VAR_16);
    VAR_25 = FUNC_2(VAR_19.mt_count);
    if (FUNC_16(VAR_25, *VAR_16) != 0)
     FUNC_14(
     "Using \"%s\" as an alias for %s\n",
            *VAR_16, VAR_25);
    VAR_23 = "";
   } else if (!FUNC_9(**VAR_16) &&
       (VAR_17->c_flags & VAR_2)) {

    VAR_19.mt_count = FUNC_17(*VAR_16);
    if ((u_int32_t)VAR_19.mt_count == 0xf0f0f0f0)
     FUNC_4(1, "%s: unknown compression",
          *VAR_16);
    VAR_23 = "";
   } else if ((VAR_17->c_flags & VAR_10) == 0) {
    char *VAR_26;

    VAR_19.mt_count = FUNC_20(*VAR_16, &VAR_26, 0);
    VAR_23 = VAR_26;
   }
   if (((VAR_17->c_flags & VAR_10) == 0)
    && (((VAR_19.mt_count <=
        ((VAR_17->c_flags & VAR_11)? -1: 0))
      && ((VAR_17->c_flags & VAR_2) == 0))
     || *VAR_23))
    FUNC_4(1, "%s: illegal count", *VAR_16);
  }
  else
   VAR_19.mt_count = 1;
  switch (VAR_17->c_code) {
  case 140:
  {
   unsigned int VAR_27;
   union mterrstat VAR_28;
   struct scsi_tape_errors *VAR_29 = &VAR_28.scsi_errstat;

   if (FUNC_8(VAR_22, VAR_17->c_code, (caddr_t)&VAR_28) < 0)
    FUNC_3(2, "%s", VAR_24);
   (void)FUNC_14("Last I/O Residual: %u\n", VAR_29->io_resid);
   (void)FUNC_14(" Last I/O Command:");
   for (VAR_27 = 0; VAR_27 < sizeof (VAR_29->io_cdb); VAR_27++)
    (void)FUNC_14(" %02X", VAR_29->io_cdb[VAR_27]);
   (void)FUNC_14("\n");
   (void)FUNC_14("   Last I/O Sense:\n\n\t");
   for (VAR_27 = 0; VAR_27 < sizeof (VAR_29->io_sense); VAR_27++) {
    (void)FUNC_14(" %02X", VAR_29->io_sense[VAR_27]);
    if (((VAR_27 + 1) & 0xf) == 0) {
     (void)FUNC_14("\n\t");
    }
   }
   (void)FUNC_14("\n");
   (void)FUNC_14("Last Control Residual: %u\n",
       VAR_29->ctl_resid);
   (void)FUNC_14(" Last Control Command:");
   for (VAR_27 = 0; VAR_27 < sizeof (VAR_29->ctl_cdb); VAR_27++)
    (void)FUNC_14(" %02X", VAR_29->ctl_cdb[VAR_27]);
   (void)FUNC_14("\n");
   (void)FUNC_14("   Last Control Sense:\n\n\t");
   for (VAR_27 = 0; VAR_27 < sizeof (VAR_29->ctl_sense); VAR_27++) {
    (void)FUNC_14(" %02X", VAR_29->ctl_sense[VAR_27]);
    if (((VAR_27 + 1) & 0xf) == 0) {
     (void)FUNC_14("\n\t");
    }
   }
   (void)FUNC_14("\n\n");
   FUNC_5(0);

  }
  case 133:
  case 132:
  {
   u_int32_t VAR_30;
   if (FUNC_8(VAR_22, VAR_17->c_code, (caddr_t)&VAR_30) < 0)
    FUNC_3(2, "%s", VAR_24);
   (void)FUNC_14("%s: %s block location %u\n", VAR_24,
       (VAR_17->c_code == 133)? "hardware" :
       "logical", VAR_30);
   FUNC_5(0);

  }
  case 130:
  case 136:
  {
   u_int32_t VAR_31 = (u_int32_t)VAR_19.mt_count;
   if (FUNC_8(VAR_22, VAR_17->c_code, (caddr_t)&VAR_31) < 0)
    FUNC_3(2, "%s", VAR_24);
   FUNC_5(0);

  }
  case 137:
  {
   u_int32_t VAR_32;
   if (FUNC_8(VAR_22, 137, (caddr_t)&VAR_32) < 0)
    FUNC_3(2, "%s", VAR_24);
   (void)FUNC_14("%s: the model is %u filemar%s at EOT\n",
       VAR_24, VAR_32, (VAR_32 > 1)? "ks" : "k");
   FUNC_5(0);

  }
  case 131:
  {
   u_int32_t VAR_33, VAR_34 = (u_int32_t)VAR_19.mt_count;
   if (FUNC_8(VAR_22, 137, (caddr_t)&VAR_33) < 0)
    FUNC_3(2, "%s", VAR_24);
   if (FUNC_8(VAR_22, VAR_17->c_code, (caddr_t)&VAR_34) < 0)
    FUNC_3(2, "%s", VAR_24);
   (void)FUNC_14("%s: old model was %u filemar%s at EOT\n",
       VAR_24, VAR_33, (VAR_33 > 1)? "ks" : "k");
   (void)FUNC_14("%s: new model  is %u filemar%s at EOT\n",
       VAR_24, VAR_34, (VAR_34 > 1)? "ks" : "k");
   FUNC_5(0);

  }
  case 134:
  {
   struct mtrblim VAR_35;

   FUNC_1(&VAR_35, sizeof(VAR_35));

   if (FUNC_8(VAR_22, 134, (caddr_t)&VAR_35) < 0)
    FUNC_3(2, "%s", VAR_24);
   (void)FUNC_14("%s:\n"
       "    min blocksize %u byte%s\n"
       "    max blocksize %u byte%s\n"
       "    granularity %u byte%s\n",
       VAR_24, VAR_35.min_block_length,
       FUNC_0(VAR_35.min_block_length),
       VAR_35.max_block_length,
       FUNC_0(VAR_35.max_block_length),
       (1 << VAR_35.granularity),
       FUNC_0((1 << VAR_35.granularity)));
   FUNC_5(0);

  }
  case 135:
  case 139:
  case 128:
  case 129:
  {
   int VAR_36 = 0;

   VAR_36 = FUNC_12(VAR_17->c_code, VAR_15, VAR_16, VAR_22,
       VAR_24);

   FUNC_5(VAR_36);
  }
  case 138:
  {
   int VAR_37 = 0;

   VAR_37 = FUNC_11(VAR_15, VAR_16, VAR_22, VAR_24);

   FUNC_5(VAR_37);
  }
  default:
   break;
  }
  if (FUNC_8(VAR_22, VAR_5, &VAR_19) < 0)
   FUNC_3(1, "%s: %s", VAR_24, VAR_17->c_name);
 } else {
  if (FUNC_8(VAR_22, VAR_4, &VAR_18) < 0)
   FUNC_3(1, ((void*)0));
  FUNC_15(&VAR_18);
 }
 FUNC_5(0);

}
