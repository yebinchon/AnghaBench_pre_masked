
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct mpeg_pldt {int payload; } ;
struct TYPE_7__ {int len; } ;
struct TYPE_8__ {TYPE_3__ stream; } ;
struct fw_pkt {TYPE_4__ mode; } ;
struct TYPE_6__ {scalar_t__ psize; scalar_t__ npacket; scalar_t__ nchunk; } ;
struct TYPE_5__ {int psize; int npacket; int nchunk; } ;
struct fw_isochreq {char ch; char tag; TYPE_2__ tx; TYPE_1__ rx; } ;
struct fw_isobufreq {char ch; char tag; TYPE_2__ tx; TYPE_1__ rx; } ;
struct ciphdr {scalar_t__ fmt; int fn; int len; int qpc; int dbc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int ,struct fw_isochreq*) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char const*,int,int) ;
 int FUNC_8 (int,char*,int ) ;
 int VAR_14 ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int FUNC_10 (int,int ,int) ;

void
FUNC_11(int VAR_15, const char *VAR_16, char VAR_17, int VAR_18)
{
 struct ciphdr *VAR_19;
 struct fw_isochreq VAR_20;
 struct fw_isobufreq VAR_21;
 struct fw_pkt *VAR_22;
 struct mpeg_pldt *VAR_23;
 uint32_t *VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
 char *VAR_32;

 VAR_30 = 0;

 if (FUNC_9(VAR_16, "-") == 0)
  VAR_25 = VAR_12;
 else {
  VAR_25 = FUNC_7(VAR_16, VAR_7 | VAR_9 | VAR_8, 0660);
  if (VAR_25 == -1)
   FUNC_1(VAR_2, "%s", VAR_16);
 }
 VAR_32 = FUNC_6(VAR_11);

 VAR_21.rx.nchunk = VAR_5;
 VAR_21.rx.npacket = VAR_6;
 VAR_21.rx.psize = VAR_10;
 VAR_21.tx.nchunk = 0;
 VAR_21.tx.npacket = 0;
 VAR_21.tx.psize = 0;
 if (FUNC_5(VAR_15, VAR_4, &VAR_21) < 0)
  FUNC_1(1, "ioctl");

 VAR_20.ch = VAR_17 & 0x3f;
 VAR_20.tag = (VAR_17 >> 6) & 3;

 if (FUNC_5(VAR_15, VAR_3, &VAR_20) < 0)
  FUNC_1(1, "ioctl");

 VAR_26 = VAR_28 = 0;
 while (VAR_18 <= 0 || VAR_26 <= VAR_18) {
  VAR_27 = VAR_31 = FUNC_8(VAR_15, VAR_32, VAR_11);



  if (VAR_27 < 0) {
   if (VAR_13 == VAR_1) {
    FUNC_3(VAR_14, "(EAGAIN) - push 'Play'?\n");
    continue;
   }
   FUNC_1(1, "read failed");
  }
  VAR_24 = (uint32_t *) VAR_32;

  do {
   VAR_22 = (struct fw_pkt *) VAR_24;







   VAR_19 = (struct ciphdr *)(VAR_24 + 1);
   if (VAR_19->fmt != VAR_0)
    FUNC_2(1, "unknown format 0x%x", VAR_19->fmt);
   if (VAR_19->fn != 3) {
    FUNC_2(1,
      "unsupported MPEG TS stream, fn=%d (only fn=3 is supported)",
      VAR_19->fn);
   }
   VAR_24 = (uint32_t *) (VAR_19 + 1);

   if (VAR_22->mode.stream.len <= sizeof(struct ciphdr)) {


    goto next;
   }
   if (VAR_19->dbc % (1<<VAR_19->fn) == 0)
    VAR_30 = 1;

   for (VAR_23 = (struct mpeg_pldt *)VAR_24;
       (intptr_t)VAR_23 < (intptr_t)((char *)VAR_24 +
       VAR_22->mode.stream.len - sizeof(struct ciphdr));
       VAR_23++) {
    if (VAR_30 == 1)
     FUNC_10(VAR_25, VAR_23->payload,
         sizeof(VAR_23->payload));
   }

next:


   VAR_29 = VAR_22->mode.stream.len + 4;
   VAR_24 = (uint32_t *)((intptr_t)VAR_22 + VAR_29);
   VAR_31 -= VAR_29;
  } while (VAR_31 > 0);




 }
 if (VAR_25 != VAR_12)
  FUNC_0(VAR_25);
 FUNC_3(VAR_14, "\n");
}
