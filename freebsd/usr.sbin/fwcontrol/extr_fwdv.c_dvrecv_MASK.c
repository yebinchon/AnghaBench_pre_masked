
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wbuf ;
typedef int u_int32_t ;
struct iovec {char* iov_base; int iov_len; } ;
struct TYPE_7__ {int len; } ;
struct TYPE_8__ {TYPE_1__ stream; } ;
struct fw_pkt {TYPE_2__ mode; } ;
struct TYPE_10__ {scalar_t__ psize; scalar_t__ npacket; scalar_t__ nchunk; } ;
struct TYPE_9__ {int npacket; int psize; int nchunk; } ;
struct fw_isochreq {char ch; char tag; TYPE_4__ tx; TYPE_3__ rx; } ;
struct fw_isobufreq {char ch; char tag; TYPE_4__ tx; TYPE_3__ rx; } ;
struct dvdbc {int sct; int dseq; int* payload; } ;
struct TYPE_11__ {int cyc; int fs; } ;
struct TYPE_12__ {TYPE_5__ dv; } ;
struct ciphdr {scalar_t__ fmt; int len; TYPE_6__ fdf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct iovec*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ VAR_17 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int* VAR_18 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int,int ,struct fw_isochreq*) ;
 char* FUNC_8 (int) ;
 int FUNC_9 (char*,int,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (char const*,int,int) ;
 int FUNC_12 (int,char*,int) ;
 int VAR_19 ;
 scalar_t__ FUNC_13 (char const*,char*) ;
 char** VAR_20 ;
 int FUNC_14 (int,struct iovec*,int) ;

void
FUNC_15(int VAR_21, const char *VAR_22, char VAR_23, int VAR_24)
{
 struct fw_isochreq VAR_25;
 struct fw_isobufreq VAR_26;
 struct dvdbc *VAR_27;
 struct ciphdr *VAR_28;
 struct fw_pkt *VAR_29;
 char *VAR_30, *VAR_31;
 u_int32_t *VAR_32;
 int VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40 = -1, VAR_41;
 int VAR_42[] = {250 , 300 };
 struct iovec VAR_43[VAR_10];

 if(FUNC_13(VAR_22, "-") == 0) {
  VAR_36 = VAR_16;
 } else {
  VAR_36 = FUNC_11(VAR_22, VAR_11 | VAR_13 | VAR_12, 0660);
  if (VAR_36 == -1)
   FUNC_2(VAR_5, "%s", VAR_22);
 }
 VAR_31 = FUNC_8(VAR_15);
 VAR_30 = FUNC_8(VAR_1*VAR_8);
 FUNC_9(VAR_30, 0xff, VAR_1*VAR_8);
 FUNC_0(VAR_43, sizeof(VAR_43));

 VAR_26.rx.nchunk = VAR_9;
 VAR_26.rx.npacket = VAR_10;
 VAR_26.rx.psize = VAR_14;
 VAR_26.tx.nchunk = 0;
 VAR_26.tx.npacket = 0;
 VAR_26.tx.psize = 0;
 if (FUNC_7(VAR_21, VAR_7, &VAR_26) < 0)
  FUNC_2(1, "ioctl FW_SSTBUF");

 VAR_25.ch = VAR_23 & 0x3f;
 VAR_25.tag = (VAR_23 >> 6) & 3;

 if (FUNC_7(VAR_21, VAR_6, &VAR_25) < 0)
         FUNC_2(1, "ioctl");

 VAR_37 = VAR_38 = 0;
 while (VAR_24 <= 0 || VAR_37 <= VAR_24) {
  VAR_34 = VAR_33 = FUNC_12(VAR_21, VAR_31, VAR_15);
  if (VAR_33 < 0) {
   if (VAR_17 == VAR_4) {
    FUNC_5(VAR_19, "(EAGAIN) - push 'Play'?\n");
    FUNC_4(VAR_19);
    if (VAR_33 <= 0)
     continue;
   } else
    FUNC_2(1, "read failed");
  }

  VAR_39 = 0;
  VAR_32 = (u_int32_t *) VAR_31;
again:
  VAR_29 = (struct fw_pkt *) VAR_32;





  VAR_28 = (struct ciphdr *)(VAR_32 + 1);
  if (VAR_28->fmt != VAR_0)
   FUNC_3(1, "unknown format 0x%x", VAR_28->fmt);
  VAR_32 = (u_int32_t *) (VAR_28 + 1);





  if (VAR_29->mode.stream.len <= sizeof(struct ciphdr))

   goto next;
  for (VAR_27 = (struct dvdbc *)VAR_32;
    (char *)VAR_27 < (char *)(VAR_32 + VAR_28->len);
    VAR_27+=6) {




   if (VAR_27->sct == VAR_3 && VAR_27->dseq == 0) {
    if (VAR_40 < 0) {
     VAR_40 = VAR_28->fdf.dv.fs;
     FUNC_5(VAR_19, "%s\n", VAR_20[VAR_40]);
    }


    if (VAR_40 == 1 &&
     (VAR_27->payload[0] & VAR_2) == 0)
     VAR_27->payload[0] |= VAR_2;
    VAR_41 = VAR_42[VAR_40];
     FUNC_5(VAR_19, "%d:%02d:%02d %d\r",
     VAR_37 / (3600 * VAR_18[VAR_40]),
     (VAR_37 / (60 * VAR_18[VAR_40])) % 60,
     (VAR_37 / VAR_18[VAR_40]) % 60,
     VAR_37 % VAR_18[VAR_40]);
    VAR_37++;
    FUNC_4(VAR_19);
    VAR_38 = 0;
   }
   if (VAR_37 == 0 || (VAR_24 > 0 && VAR_37 > VAR_24))
    continue;
   VAR_38++;
   VAR_43[VAR_39].iov_base = (char *) VAR_27;
   VAR_43[VAR_39++].iov_len = VAR_1;
   if (VAR_39 >= VAR_10) {
    FUNC_14(VAR_36, VAR_43, VAR_39);
    VAR_39 = 0;
   }
  }
  VAR_32 = (u_int32_t *)VAR_27;
next:
  if ((char *)VAR_32 < VAR_31 + VAR_34)
   goto again;
  if (VAR_39 > 0)
   FUNC_14(VAR_36, VAR_43, VAR_39);
 }
 if (VAR_36 != VAR_16)
  FUNC_1(VAR_36);
 FUNC_5(VAR_19, "\n");
}
