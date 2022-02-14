
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
typedef int u_long ;
struct tcphdr {int th_off; int th_x2; scalar_t__ th_sum; int th_seq; } ;
struct libalias {int dummy; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct ip {int ip_hl; int ip_len; int ip_sum; TYPE_1__ ip_src; } ;
struct in_addr {scalar_t__ s_addr; } ;
struct alias_link {int dummy; } ;


 int FUNC_0 (struct alias_link*,int,int,int,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int*,int*,int) ;
 struct alias_link* FUNC_3 (struct libalias*,struct in_addr,struct in_addr,int,int ,int ,int) ;
 struct in_addr FUNC_4 (struct alias_link*) ;
 int FUNC_5 (struct alias_link*) ;
 int FUNC_6 (int ,struct alias_link*) ;
 unsigned short VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_7 (struct alias_link*) ;
 int FUNC_8 (struct alias_link*) ;
 scalar_t__ FUNC_9 (struct ip*) ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_10 (unsigned long) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (struct ip*) ;
 scalar_t__ FUNC_13 (char) ;
 int FUNC_14 (char*,char*,unsigned int) ;
 char* VAR_4 ;
 int FUNC_15 (int) ;
 int FUNC_16 (char*,unsigned int,char*,int) ;

__attribute__((used)) static void
FUNC_17(struct libalias *VAR_5,
    struct ip *VAR_6,
    struct alias_link *VAR_7,
    int VAR_8

)
{
 int VAR_9, VAR_10, VAR_11;
 struct in_addr VAR_12;
 u_short VAR_13;
 char *VAR_14;
 struct tcphdr *VAR_15;
 int VAR_16;


 VAR_15 = (struct tcphdr *)FUNC_12(VAR_6);
 VAR_9 = (VAR_6->ip_hl + VAR_15->th_off) << 2;
 VAR_10 = FUNC_15(VAR_6->ip_len);
 VAR_11 = VAR_10 - VAR_9;





 if (VAR_11 < (int)sizeof(":A!a@n.n PRIVMSG A :aDCC 1 1a") - 1)
  return;


 VAR_14 = (char *)VAR_6;
 VAR_14 += VAR_9;
 VAR_8 -= VAR_9;



 for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++) {
  if (VAR_14[VAR_16] == '\001')
   goto lFOUND_CTCP;
 }
 return;

lFOUND_CTCP:
 {
  unsigned int VAR_17 = VAR_16;
  unsigned int VAR_18 = 0;

  unsigned long VAR_19;
  unsigned short VAR_20;


lCTCP_START:
  if (VAR_16 >= VAR_11 || VAR_18 >= VAR_2)
   goto lPACKET_DONE;
  VAR_4[VAR_18++] = VAR_14[VAR_16++];


  if (VAR_16 + 4 >= VAR_11)
   goto lBAD_CTCP;
  if (VAR_14[VAR_16 + 0] != 'D')
   goto lBAD_CTCP;
  if (VAR_14[VAR_16 + 1] != 'C')
   goto lBAD_CTCP;
  if (VAR_14[VAR_16 + 2] != 'C')
   goto lBAD_CTCP;
  if (VAR_14[VAR_16 + 3] != ' ')
   goto lBAD_CTCP;

  VAR_16 += 4;
  if (VAR_18 + 4 > VAR_2)
   goto lPACKET_DONE;
  VAR_4[VAR_18++] = 'D';
  VAR_4[VAR_18++] = 'C';
  VAR_4[VAR_18++] = 'C';
  VAR_4[VAR_18++] = ' ';

  FUNC_1(("Found DCC\n"));




  while (VAR_14[VAR_16] == ' ') {
   if (++VAR_16 >= VAR_11) {
    FUNC_1(("DCC packet terminated in just spaces\n"));
    goto lPACKET_DONE;
   }
  }

  FUNC_1(("Transferring command...\n"));
  while (VAR_14[VAR_16] != ' ') {
   VAR_4[VAR_18++] = VAR_14[VAR_16];
   if (++VAR_16 >= VAR_11 || VAR_18 >= VAR_2) {
    FUNC_1(("DCC packet terminated during command\n"));
    goto lPACKET_DONE;
   }
  }

  if (VAR_16 + 1 < VAR_11 && VAR_18 < VAR_2)
   VAR_4[VAR_18++] = VAR_14[VAR_16++];

  FUNC_1(("Done command - removing spaces\n"));




  while (VAR_14[VAR_16] == ' ') {
   if (++VAR_16 >= VAR_11) {
    FUNC_1(("DCC packet terminated in just spaces (post-command)\n"));
    goto lPACKET_DONE;
   }
  }

  FUNC_1(("Transferring filename...\n"));
  while (VAR_14[VAR_16] != ' ') {
   VAR_4[VAR_18++] = VAR_14[VAR_16];
   if (++VAR_16 >= VAR_11 || VAR_18 >= VAR_2) {
    FUNC_1(("DCC packet terminated during filename\n"));
    goto lPACKET_DONE;
   }
  }

  if (VAR_16 + 1 < VAR_11 && VAR_18 < VAR_2)
   VAR_4[VAR_18++] = VAR_14[VAR_16++];

  FUNC_1(("Done filename - removing spaces\n"));




  while (VAR_14[VAR_16] == ' ') {
   if (++VAR_16 >= VAR_11) {
    FUNC_1(("DCC packet terminated in just spaces (post-filename)\n"));
    goto lPACKET_DONE;
   }
  }

  FUNC_1(("Fetching IP address\n"));

  VAR_19 = 0;
  while (VAR_16 < VAR_11 && FUNC_13(VAR_14[VAR_16])) {
   if (VAR_19 > VAR_3 / 10UL) {
    FUNC_1(("DCC Address overflow (org_addr == 0x%08lx, next char %c\n", VAR_19, VAR_14[VAR_16]));
    goto lBAD_CTCP;
   }
   VAR_19 *= 10;
   VAR_19 += VAR_14[VAR_16++] - '0';
  }
  FUNC_1(("Skipping space\n"));
  if (VAR_16 + 1 >= VAR_11 || VAR_14[VAR_16] != ' ') {
   FUNC_1(("Overflow (%d >= %d) or bad character (%02x) terminating IP address\n", VAR_16 + 1, VAR_11, VAR_14[VAR_16]));
   goto lBAD_CTCP;
  }





  while (VAR_14[VAR_16] == ' ') {
   if (++VAR_16 >= VAR_11) {
    FUNC_1(("Packet failure - space overflow.\n"));
    goto lPACKET_DONE;
   }
  }
  FUNC_1(("Fetching port number\n"));

  VAR_20 = 0;
  while (VAR_16 < VAR_11 && FUNC_13(VAR_14[VAR_16])) {
   if (VAR_20 > 6554) {

    FUNC_1(("DCC: port number overflow\n"));
    goto lBAD_CTCP;
   }
   VAR_20 *= 10;
   VAR_20 += VAR_14[VAR_16++] - '0';
  }

  if (VAR_16 >= VAR_11 || (VAR_14[VAR_16] != '\001' && VAR_14[VAR_16] != ' ')) {
   FUNC_1(("Bad port termination\n"));
   goto lBAD_CTCP;
  }
  FUNC_1(("Got IP %lu and port %u\n", VAR_19, (unsigned)VAR_20));


  {
   struct alias_link *VAR_21;
   struct in_addr VAR_22;


   VAR_13 = FUNC_11(VAR_20);
   VAR_12.s_addr = FUNC_10(VAR_19);
   VAR_22.s_addr = 0;


   if (!VAR_19 || !VAR_20 ||
       VAR_6->ip_src.s_addr != VAR_12.s_addr ||
       VAR_20 < VAR_0)
    goto lBAD_CTCP;






   VAR_21 = FUNC_3(VAR_5, VAR_12, VAR_22,
       VAR_13, 0,
       VAR_1, 1);
   FUNC_1(("Got a DCC link\n"));
   if (VAR_21) {
    struct in_addr VAR_23;
    u_short VAR_24;

    int VAR_25;



    FUNC_7(VAR_21);


    VAR_23 = FUNC_4(VAR_7);
    VAR_25 = FUNC_16(&VAR_4[VAR_18],
        VAR_2 - VAR_18,
        "%lu ", (u_long) FUNC_10(VAR_23.s_addr));
    if (VAR_25 < 0) {
     FUNC_1(("DCC packet construct failure.\n"));
     goto lBAD_CTCP;
    }
    if ((VAR_18 += VAR_25) >= VAR_2) {

     FUNC_1(("DCC constructed packet overflow.\n"));
     goto lBAD_CTCP;
    }
    VAR_24 = FUNC_5(VAR_21);
    VAR_25 = FUNC_16(&VAR_4[VAR_18],
        VAR_2 - VAR_18,
        "%u", FUNC_11(VAR_24));
    if (VAR_25 < 0) {
     FUNC_1(("DCC packet construct failure.\n"));
     goto lBAD_CTCP;
    }
    VAR_18 += VAR_25;




    FUNC_1(("Aliased IP %lu and port %u\n", VAR_23.s_addr, (unsigned)VAR_24));
   }
  }





lBAD_CTCP:
  for (; VAR_16 < VAR_11 && VAR_18 < VAR_2; VAR_16++, VAR_18++) {
   VAR_4[VAR_18] = VAR_14[VAR_16];
   if (VAR_14[VAR_16] == '\001') {
    goto lNORMAL_TEXT;
   }
  }
  goto lPACKET_DONE;

lNORMAL_TEXT:
  for (; VAR_16 < VAR_11 && VAR_18 < VAR_2; VAR_16++, VAR_18++) {
   VAR_4[VAR_18] = VAR_14[VAR_16];
   if (VAR_14[VAR_16] == '\001') {
    goto lCTCP_START;
   }
  }

lPACKET_DONE:
  VAR_18 = VAR_18 > VAR_8 - VAR_17 ? VAR_8 - VAR_17 : VAR_18;
  FUNC_14(VAR_14 + VAR_17, VAR_4, VAR_18);


  {
   int VAR_26;

   FUNC_8(VAR_7);
   VAR_15 = (struct tcphdr *)FUNC_12(VAR_6);
   VAR_26 = FUNC_6(VAR_15->th_seq, VAR_7);
   FUNC_0(VAR_7, VAR_26 + VAR_17 + VAR_18 - VAR_11, VAR_6->ip_hl,
       VAR_6->ip_len, VAR_15->th_seq, VAR_15->th_off);
  }


  {
   u_short VAR_27;

   VAR_27 = FUNC_11(VAR_9 + VAR_18 + VAR_17);
   FUNC_2(&VAR_6->ip_sum,
       &VAR_27,
       &VAR_6->ip_len,
       1);
   VAR_6->ip_len = VAR_27;
  }


  VAR_15->th_sum = 0;



  VAR_15->th_sum = FUNC_9(VAR_6);

  return;
 }
}
