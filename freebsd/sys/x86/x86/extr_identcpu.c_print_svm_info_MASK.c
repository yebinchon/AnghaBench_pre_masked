
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void)
{
 u_int VAR_3, VAR_4[4];
 uint64_t VAR_5;
 int VAR_6;

 FUNC_1("\n  SVM: ");
 FUNC_0(0x8000000A, VAR_4);
 VAR_3 = VAR_4[3];

 VAR_5 = FUNC_2(VAR_0);
 if ((VAR_5 & VAR_1) == VAR_1)
  FUNC_1("(disabled in BIOS) ");

 if (!VAR_2) {
  VAR_6 = 0;
  if (VAR_3 & (1 << 0)) {
   FUNC_1("%sNP", VAR_6 ? "," : "");
                        VAR_6 = 1;
  }
  if (VAR_3 & (1 << 3)) {
   FUNC_1("%sNRIP", VAR_6 ? "," : "");
                        VAR_6 = 1;
  }
  if (VAR_3 & (1 << 5)) {
   FUNC_1("%sVClean", VAR_6 ? "," : "");
                        VAR_6 = 1;
  }
  if (VAR_3 & (1 << 6)) {
   FUNC_1("%sAFlush", VAR_6 ? "," : "");
                        VAR_6 = 1;
  }
  if (VAR_3 & (1 << 7)) {
   FUNC_1("%sDAssist", VAR_6 ? "," : "");
                        VAR_6 = 1;
  }
  FUNC_1("%sNAsids=%d", VAR_6 ? "," : "", VAR_4[1]);
  return;
 }

 FUNC_1("Features=0x%b", VAR_3,
        "\020"
        "\001NP"
        "\002LbrVirt"
        "\003SVML"
        "\004NRIPS"
        "\005TscRateMsr"
        "\006VmcbClean"
        "\007FlushByAsid"
        "\010DecodeAssist"
        "\011<b8>"
        "\012<b9>"
        "\013PauseFilter"
        "\014EncryptedMcodePatch"
        "\015PauseFilterThreshold"
        "\016AVIC"
        "\017<b14>"
        "\020V_VMSAVE_VMLOAD"
        "\021vGIF"
        "\022GMET"
        "\023<b18>"
        "\024<b19>"
        "\025<b20>"
        "\026<b21>"
        "\027<b22>"
        "\030<b23>"
        "\031<b24>"
        "\032<b25>"
        "\033<b26>"
        "\034<b27>"
        "\035<b28>"
        "\036<b29>"
        "\037<b30>"
        "\040<b31>"
                );
 FUNC_1("\nRevision=%d, ASIDs=%d", VAR_4[0] & 0xff, VAR_4[1]);
}
