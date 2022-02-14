
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
typedef int tmpbuf ;
struct TYPE_4__ {int Address32; int Address64; } ;
struct TYPE_6__ {int Flags; int Length; int NextChainOffset; TYPE_1__ u; } ;
struct TYPE_5__ {int FlagsLength; int Address; } ;
typedef TYPE_2__ MPI2_SGE_SIMPLE64 ;
typedef TYPE_3__ MPI2_SGE_CHAIN_UNION ;
typedef int MPI2_REQUEST_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int ,int *,int ) ;
 int FUNC_2 (int,int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void
FUNC_5(char *VAR_8, int VAR_9, int VAR_10)
{
 MPI2_SGE_SIMPLE64 *VAR_11;
 MPI2_SGE_CHAIN_UNION *VAR_12;
 MPI2_REQUEST_HEADER *VAR_13;
 u_int VAR_14 = 0, VAR_15;
 char *VAR_16, VAR_17[128];

 VAR_13 = (MPI2_REQUEST_HEADER *)VAR_8;
 VAR_16 = (char *)VAR_8;
 VAR_11 = (MPI2_SGE_SIMPLE64 *)&VAR_16[VAR_9 * 4];
 FUNC_4("SGL for command\n");

 FUNC_1(VAR_16, VAR_6, ((void*)0), 0);
 while (VAR_16 != ((void*)0)) {
  VAR_15 = VAR_11->FlagsLength >> VAR_5;
  FUNC_0(VAR_17, sizeof(VAR_17));
  FUNC_2(VAR_15, VAR_7, VAR_17, sizeof(VAR_17));
  FUNC_4("seg%d flags=%x %s len= 0x%06x addr=0x%016jx\n", VAR_14,
      VAR_15, VAR_17, VAR_11->FlagsLength & 0xffffff,
      FUNC_3(&VAR_11->Address));
  if (VAR_15 & (VAR_3 |
      VAR_2))
   break;
  VAR_11++;
  VAR_14++;
  if (VAR_15 & VAR_4) {
   VAR_12 = (MPI2_SGE_CHAIN_UNION *)VAR_11;
   if ((VAR_12->Flags & VAR_1) == 0) {
    FUNC_4("Invalid chain element\n");
    break;
   }
   FUNC_0(VAR_17, sizeof(VAR_17));
   FUNC_2(VAR_12->Flags, VAR_7, VAR_17,
       sizeof(VAR_17));
   if (VAR_12->Flags & VAR_0)
    FUNC_4("chain64 flags=0x%x %s len=0x%x "
        "Offset=0x%x addr=0x%016jx\n", VAR_12->Flags,
        VAR_17, VAR_12->Length, VAR_12->NextChainOffset,
        FUNC_3(&VAR_12->u.Address64));
   else
    FUNC_4("chain32 flags=0x%x %s len=0x%x "
        "Offset=0x%x addr=0x%08x\n", VAR_12->Flags,
        VAR_17, VAR_12->Length, VAR_12->NextChainOffset,
        VAR_12->u.Address32);
   if (--VAR_10 <= 0)
    break;
   VAR_16 += VAR_6;
   VAR_11 = (MPI2_SGE_SIMPLE64 *)VAR_16;
   FUNC_1(VAR_16, VAR_6, ((void*)0), 0);
  }
 }
}
