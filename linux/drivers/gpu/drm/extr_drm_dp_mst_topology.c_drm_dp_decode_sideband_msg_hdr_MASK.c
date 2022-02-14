
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_dp_sideband_msg_hdr {int lct; int lcr; int* rad; int broadcast; int path_msg; int msg_len; int somt; int eomt; int seqno; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int*,int) ;

__attribute__((used)) static bool FUNC_2(struct drm_dp_sideband_msg_hdr *VAR_0,
        u8 *VAR_1, int VAR_2, u8 *VAR_3)
{
 u8 VAR_4;
 u8 VAR_5;
 int VAR_6;
 u8 VAR_7;
 if (VAR_1[0] == 0)
  return 0;
 VAR_5 = 3;
 VAR_5 += ((VAR_1[0] & 0xf0) >> 4) / 2;
 if (VAR_5 > VAR_2)
  return 0;
 VAR_4 = FUNC_1(VAR_1, (VAR_5 * 2) - 1);

 if ((VAR_4 & 0xf) != (VAR_1[VAR_5 - 1] & 0xf)) {
  FUNC_0("crc4 mismatch 0x%x 0x%x\n", VAR_4, VAR_1[VAR_5 - 1]);
  return 0;
 }

 VAR_0->lct = (VAR_1[0] & 0xf0) >> 4;
 VAR_0->lcr = (VAR_1[0] & 0xf);
 VAR_7 = 1;
 for (VAR_6 = 0; VAR_6 < (VAR_0->lct / 2); VAR_6++)
  VAR_0->rad[VAR_6] = VAR_1[VAR_7++];
 VAR_0->broadcast = (VAR_1[VAR_7] >> 7) & 0x1;
 VAR_0->path_msg = (VAR_1[VAR_7] >> 6) & 0x1;
 VAR_0->msg_len = VAR_1[VAR_7] & 0x3f;
 VAR_7++;
 VAR_0->somt = (VAR_1[VAR_7] >> 7) & 0x1;
 VAR_0->eomt = (VAR_1[VAR_7] >> 6) & 0x1;
 VAR_0->seqno = (VAR_1[VAR_7] >> 4) & 0x1;
 VAR_7++;
 *VAR_3 = VAR_7;
 return 1;
}
