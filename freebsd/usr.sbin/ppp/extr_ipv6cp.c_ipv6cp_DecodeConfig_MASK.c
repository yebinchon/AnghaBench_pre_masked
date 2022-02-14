
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct ipv6cp {int peer_tokenreq; int his_reject; int my_reject; int myaddr; int * my_ifid; int fsm; int * his_ifid; } ;
struct TYPE_2__ {int id; int len; } ;
struct fsm_opt {TYPE_1__ hdr; int * data; } ;
struct fsm_decode {scalar_t__ rejend; scalar_t__ rej; scalar_t__ nakend; scalar_t__ nak; } ;
struct fsm {int bundle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;


 int FUNC_0 (int *,int) ;

 int FUNC_1 (int ,int *,int *) ;
 struct ipv6cp* FUNC_2 (struct fsm*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fsm_decode*) ;
 struct fsm_opt* FUNC_5 (int **) ;
 int FUNC_6 (struct fsm_decode*,struct fsm_opt*) ;
 int FUNC_7 (struct ipv6cp*,int *,int *) ;
 int FUNC_8 (struct ipv6cp*,int *,struct fsm_decode*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int *,int *,int) ;
 int FUNC_12 (int *,int *,int) ;
 int FUNC_13 (int *,int ,int) ;
 char* FUNC_14 (int) ;
 int FUNC_15 (char*,int,char*,char*,int) ;

__attribute__((used)) static void
FUNC_16(struct fsm *VAR_4, u_char *VAR_5, u_char *VAR_6, int VAR_7,
                    struct fsm_decode *VAR_8)
{

  struct ipv6cp *VAR_9 = FUNC_2(VAR_4);
  int VAR_10;
  char VAR_11[100];
  u_char VAR_12[VAR_0], VAR_13[VAR_0];
  struct fsm_opt *VAR_14;

  FUNC_13(VAR_13, 0, VAR_0);

  while (VAR_6 - VAR_5 >= (int)sizeof(VAR_14->hdr)) {
    if ((VAR_14 = FUNC_5(&VAR_5)) == ((void*)0))
      break;

    FUNC_15(VAR_11, sizeof VAR_11, " %s[%d]", FUNC_14(VAR_14->hdr.id),
             VAR_14->hdr.len);

    switch (VAR_14->hdr.id) {
    case 128:
      FUNC_12(VAR_12, VAR_14->data, VAR_0);
      FUNC_10(VAR_1, "%s 0x%02x%02x%02x%02x%02x%02x%02x%02x\n", VAR_11,
   VAR_12[0], VAR_12[1], VAR_12[2], VAR_12[3], VAR_12[4], VAR_12[5], VAR_12[6], VAR_12[7]);

      switch (VAR_7) {
      case 129:
        VAR_9->peer_tokenreq = 1;
        FUNC_8(VAR_9, VAR_12, VAR_8);
        break;

      case 131:
        if (FUNC_11(VAR_12, VAR_13, VAR_0) == 0) {
          FUNC_10(FUNC_9(VAR_1) ? VAR_1 : VAR_2,
       "0x0000000000000000: Unacceptable IntefaceID!\n");
          FUNC_3(&VAR_9->fsm);
        } else if (FUNC_11(VAR_12, VAR_9->his_ifid, VAR_0) == 0) {
          FUNC_10(FUNC_9(VAR_1) ? VAR_1 : VAR_2,
       "0x%02x%02x%02x%02x%02x%02x%02x%02x: "
       "Unacceptable IntefaceID!\n",
       VAR_12[0], VAR_12[1], VAR_12[2], VAR_12[3],
       VAR_12[4], VAR_12[5], VAR_12[6], VAR_12[7]);
        } else if (FUNC_11(VAR_12, VAR_9->my_ifid, VAR_0) != 0) {
          VAR_10 = 100;
   while (VAR_10 && !FUNC_7(VAR_9, VAR_12, VAR_9->his_ifid)) {
     do {
       VAR_10--;
       FUNC_0(VAR_12, 1);
     } while (VAR_10 && FUNC_11(VAR_12, VAR_9->his_ifid, VAR_0) == 0);
   }

          if (VAR_10 == 0) {
            FUNC_10(FUNC_9(VAR_1) ? VAR_1 : VAR_2,
                       "0x0000000000000000: Unacceptable IntefaceID!\n");
            FUNC_3(&VAR_9->fsm);
          } else {
     FUNC_10(VAR_1, "%s changing IntefaceID: "
         "0x%02x%02x%02x%02x%02x%02x%02x%02x "
         "--> 0x%02x%02x%02x%02x%02x%02x%02x%02x\n", VAR_11,
         VAR_9->my_ifid[0], VAR_9->my_ifid[1],
         VAR_9->my_ifid[2], VAR_9->my_ifid[3],
         VAR_9->my_ifid[4], VAR_9->my_ifid[5],
         VAR_9->my_ifid[6], VAR_9->my_ifid[7],
         VAR_12[0], VAR_12[1], VAR_12[2], VAR_12[3],
         VAR_12[4], VAR_12[5], VAR_12[6], VAR_12[7]);
            FUNC_12(VAR_9->my_ifid, VAR_12, VAR_0);
            FUNC_1(VAR_4->bundle, &VAR_9->myaddr, ((void*)0));
          }
        }
        break;

      case 130:
        VAR_9->his_reject |= (1 << VAR_14->hdr.id);
        break;
      }
      break;

    default:
      if (VAR_7 != VAR_3) {
        VAR_9->my_reject |= (1 << VAR_14->hdr.id);
        FUNC_6(VAR_8, VAR_14);
      }
      break;
    }
  }

  if (VAR_7 != VAR_3) {
    if (VAR_7 == 129 && !VAR_9->peer_tokenreq) {
      if (VAR_8->rejend == VAR_8->rej && VAR_8->nakend == VAR_8->nak) {







        VAR_9->peer_tokenreq = 1;
      }
      FUNC_13(VAR_12, 0, VAR_0);
      FUNC_8(VAR_9, VAR_12, VAR_8);
    }
    FUNC_4(VAR_8);
  }
}
