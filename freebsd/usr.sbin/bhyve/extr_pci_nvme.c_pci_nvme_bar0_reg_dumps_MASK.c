
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (char*) ;
__attribute__((used)) static void
FUNC_1(const char *VAR_0, uint64_t VAR_1, int VAR_2)
{
 const char *VAR_3 = VAR_2 ? "WRITE" : "READ";

 switch (VAR_1) {
 case 134:
  FUNC_0(("%s %s NVME_CR_CAP_LOW\r\n", VAR_0, VAR_3));
  break;
 case 135:
  FUNC_0(("%s %s NVME_CR_CAP_HI\r\n", VAR_0, VAR_3));
  break;
 case 128:
  FUNC_0(("%s %s NVME_CR_VS\r\n", VAR_0, VAR_3));
  break;
 case 130:
  FUNC_0(("%s %s NVME_CR_INTMS\r\n", VAR_0, VAR_3));
  break;
 case 131:
  FUNC_0(("%s %s NVME_CR_INTMC\r\n", VAR_0, VAR_3));
  break;
 case 133:
  FUNC_0(("%s %s NVME_CR_CC\r\n", VAR_0, VAR_3));
  break;
 case 132:
  FUNC_0(("%s %s NVME_CR_CSTS\r\n", VAR_0, VAR_3));
  break;
 case 129:
  FUNC_0(("%s %s NVME_CR_NSSR\r\n", VAR_0, VAR_3));
  break;
 case 138:
  FUNC_0(("%s %s NVME_CR_AQA\r\n", VAR_0, VAR_3));
  break;
 case 136:
  FUNC_0(("%s %s NVME_CR_ASQ_LOW\r\n", VAR_0, VAR_3));
  break;
 case 137:
  FUNC_0(("%s %s NVME_CR_ASQ_HI\r\n", VAR_0, VAR_3));
  break;
 case 139:
  FUNC_0(("%s %s NVME_CR_ACQ_LOW\r\n", VAR_0, VAR_3));
  break;
 case 140:
  FUNC_0(("%s %s NVME_CR_ACQ_HI\r\n", VAR_0, VAR_3));
  break;
 default:
  FUNC_0(("unknown nvme bar-0 offset 0x%lx\r\n", VAR_1));
 }

}
