
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t u_char ;
struct TYPE_12__ {int auth_ineed; int auth_iwait; } ;
struct TYPE_13__ {TYPE_4__ lcp; } ;
struct physical {TYPE_7__* dl; TYPE_5__ link; } ;
struct mbuf {int dummy; } ;
struct link {int dummy; } ;
struct TYPE_10__ {int * file; } ;
struct TYPE_14__ {TYPE_2__ cfg; } ;
struct bundle {TYPE_6__ radius; } ;
struct TYPE_9__ {int code; scalar_t__ id; int length; } ;
struct TYPE_11__ {char* name; TYPE_1__ hdr; } ;
struct authinfo {scalar_t__ id; TYPE_3__ in; } ;
struct TYPE_15__ {struct authinfo pap; } ;


 scalar_t__ FUNC_0 (struct bundle*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (struct mbuf*) ;
 int VAR_4 ;
 int VAR_5 ;



 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct mbuf* FUNC_2 (struct authinfo*,struct mbuf*) ;
 struct mbuf* FUNC_3 (struct authinfo*,struct mbuf*,size_t) ;
 int FUNC_4 (struct authinfo*) ;
 int FUNC_5 (struct bundle*,size_t*,size_t*) ;
 scalar_t__ FUNC_6 (struct bundle*) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (size_t*) ;
 struct physical* FUNC_10 (struct link*) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (struct mbuf*) ;
 size_t FUNC_13 (struct mbuf*) ;
 struct mbuf* FUNC_14 (struct mbuf*) ;
 int FUNC_15 (struct mbuf*,int ) ;
 size_t* FUNC_16 (int ) ;
 struct mbuf* FUNC_17 (struct mbuf*,size_t*,size_t) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (struct authinfo*) ;
 int FUNC_20 (struct authinfo*) ;
 int * VAR_9 ;
 int FUNC_21 (TYPE_6__*,struct authinfo*,size_t*,size_t*,int,int *,int ) ;
 int FUNC_22 (size_t*) ;

struct mbuf *
FUNC_23(struct bundle *VAR_10, struct link *VAR_11, struct mbuf *VAR_12)
{
  struct physical *VAR_13 = FUNC_10(VAR_11);
  struct authinfo *VAR_14 = &VAR_13->dl->pap;
  u_char VAR_15, VAR_16, *VAR_17;
  const char *VAR_18;
  int VAR_19;

  if (VAR_13 == ((void*)0)) {
    FUNC_11(VAR_0, "pap_Input: Not a physical link - dropped\n");
    FUNC_12(VAR_12);
    return ((void*)0);
  }

  if (FUNC_6(VAR_10) != VAR_7 &&
      FUNC_6(VAR_10) != VAR_6) {
    FUNC_11(VAR_1, "Unexpected pap input - dropped !\n");
    FUNC_12(VAR_12);
    return ((void*)0);
  }

  if ((VAR_12 = FUNC_2(VAR_14, VAR_12)) == ((void*)0) &&
      FUNC_18(VAR_14->in.hdr.length) == 0) {
    FUNC_11(VAR_2, "Pap Input: Truncated header !\n");
    return ((void*)0);
  }

  if (VAR_14->in.hdr.code == 0 || VAR_14->in.hdr.code > VAR_3) {
    FUNC_11(VAR_1, "Pap Input: %d: Bad PAP code !\n", VAR_14->in.hdr.code);
    FUNC_12(VAR_12);
    return ((void*)0);
  }

  if (VAR_14->in.hdr.code != 128 && VAR_14->id != VAR_14->in.hdr.id &&
      FUNC_0(VAR_10, VAR_5)) {

    FUNC_11(VAR_1, "Pap Input: %s dropped (got id %d, not %d)\n",
               VAR_9[VAR_14->in.hdr.code], VAR_14->in.hdr.id, VAR_14->id);
    FUNC_12(VAR_12);
    return ((void*)0);
  }
  FUNC_15(VAR_12, VAR_4);
  VAR_14->id = VAR_14->in.hdr.id;

  if (VAR_12) {
    VAR_12 = FUNC_17(VAR_12, &VAR_15, 1);
    if (VAR_14->in.hdr.code == 130) {





      VAR_12 = FUNC_14(VAR_12);
      VAR_18 = FUNC_1(VAR_12);
      VAR_19 = FUNC_13(VAR_12);
    } else {
      VAR_12 = FUNC_3(VAR_14, VAR_12, VAR_15);
      VAR_18 = VAR_14->in.name;
      VAR_19 = FUNC_22(VAR_14->in.name);
    }
  } else {
    VAR_18 = "";
    VAR_19 = 0;
  }

  FUNC_11(VAR_1, "Pap Input: %s (%.*s)\n",
             VAR_9[VAR_14->in.hdr.code], VAR_19, VAR_18);

  switch (VAR_14->in.hdr.code) {
    case 128:
      if (VAR_12 == ((void*)0)) {
        FUNC_11(VAR_1, "Pap Input: No key given !\n");
        break;
      }
      VAR_12 = FUNC_17(VAR_12, &VAR_16, 1);
      if (FUNC_13(VAR_12) < VAR_16) {
        FUNC_11(VAR_0, "Pap Input: Truncated key !\n");
        break;
      }
      if ((VAR_17 = FUNC_16(VAR_16+1)) == ((void*)0)) {
        FUNC_11(VAR_0, "Pap Input: Out of memory !\n");
        break;
      }
      VAR_12 = FUNC_17(VAR_12, VAR_17, VAR_16);
      VAR_17[VAR_16] = '\0';


      if (*VAR_10->radius.cfg.file) {
        if (!FUNC_21(&VAR_10->radius, VAR_14, VAR_14->in.name,
                                 VAR_17, FUNC_22(VAR_17), ((void*)0), 0))
          FUNC_19(VAR_14);
      } else

      if (FUNC_5(VAR_10, VAR_14->in.name, VAR_17))
        FUNC_20(VAR_14);
      else
        FUNC_19(VAR_14);

      FUNC_9(VAR_17);
      break;

    case 130:
      FUNC_4(VAR_14);
      if (VAR_13->link.lcp.auth_iwait == VAR_8) {
        VAR_13->link.lcp.auth_iwait = 0;
        if (VAR_13->link.lcp.auth_ineed == 0)





          FUNC_8(VAR_13->dl);
      }
      break;

    case 129:
      FUNC_4(VAR_14);
      FUNC_7(VAR_13->dl);
      break;
  }

  FUNC_12(VAR_12);
  return ((void*)0);
}
