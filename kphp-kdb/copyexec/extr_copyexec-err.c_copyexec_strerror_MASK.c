
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,int) ;

char *FUNC_2 (int VAR_0) {
  static char VAR_1[64]; switch (VAR_0) {
    case 144: return "COPYEXEC_ERR_LSEEK"; break;
    case 138: return "COPYEXEC_ERR_READ"; break;
    case 152: return "COPYEXEC_ERR_CRC32"; break;
    case 130: return "COPYEXEC_ERR_TYPE"; break;
    case 150: return "COPYEXEC_ERR_DECRYPT"; break;
    case 143: return "COPYEXEC_ERR_MALLOC"; break;
    case 154: return "COPYEXEC_ERR_ALIGN"; break;
    case 135: return "COPYEXEC_ERR_SIZE"; break;
    case 136: return "COPYEXEC_ERR_SHA1"; break;
    case 142: return "COPYEXEC_ERR_MKDIR"; break;
    case 140: return "COPYEXEC_ERR_OPEN"; break;
    case 147: return "COPYEXEC_ERR_FSTAT"; break;
    case 132: return "COPYEXEC_ERR_ST_DEV"; break;
    case 131: return "COPYEXEC_ERR_ST_INO"; break;
    case 137: return "COPYEXEC_ERR_READIN"; break;
    case 133: return "COPYEXEC_ERR_STATUS"; break;
    case 148: return "COPYEXEC_ERR_FORK"; break;
    case 153: return "COPYEXEC_ERR_CHDIR"; break;
    case 151: return "COPYEXEC_ERR_CREAT"; break;
    case 134: return "COPYEXEC_ERR_STAT"; break;
    case 139: return "COPYEXEC_ERR_PUBKEY_PERMISSIONS"; break;
    case 145: return "COPYEXEC_ERR_INVAL"; break;
    case 128: return "COPYEXEC_ERR_VOLUME_ID_MISMATCHED"; break;
    case 146: return "COPYEXEC_ERR_HOSTNAME_MISMATCHED"; break;
    case 149: return "COPYEXEC_ERR_DISCONNECT"; break;
    case 141: return "COPYEXEC_ERR_OLD_RESULT"; break;
    case 129: return "COPYEXEC_ERR_UNKNOWN"; break;
    default: FUNC_0 (FUNC_1 (VAR_1, sizeof (VAR_1), "COPYEXEC_ERR_UNKNOWN (%d)", VAR_0) < sizeof (VAR_1));
             return VAR_1;
  }
}
