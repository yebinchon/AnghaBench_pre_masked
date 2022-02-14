
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_dp_sideband_msg_hdr {int lct; int lcr; int* rad; int broadcast; int path_msg; int msg_len; int somt; int eomt; int seqno; } ;


 int FUNC_0 (int*,int) ;

__attribute__((used)) static void FUNC_1(struct drm_dp_sideband_msg_hdr *VAR_0,
        u8 *VAR_1, int *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 u8 VAR_5;
 VAR_1[VAR_3++] = ((VAR_0->lct & 0xf) << 4) | (VAR_0->lcr & 0xf);
 for (VAR_4 = 0; VAR_4 < (VAR_0->lct / 2); VAR_4++)
  VAR_1[VAR_3++] = VAR_0->rad[VAR_4];
 VAR_1[VAR_3++] = (VAR_0->broadcast << 7) | (VAR_0->path_msg << 6) |
  (VAR_0->msg_len & 0x3f);
 VAR_1[VAR_3++] = (VAR_0->somt << 7) | (VAR_0->eomt << 6) | (VAR_0->seqno << 4);

 VAR_5 = FUNC_0(VAR_1, (VAR_3 * 2) - 1);
 VAR_1[VAR_3 - 1] |= (VAR_5 & 0xf);

 *VAR_2 = VAR_3;
}
