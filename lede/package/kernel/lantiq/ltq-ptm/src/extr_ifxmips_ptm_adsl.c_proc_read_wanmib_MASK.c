
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_2__ {int wrx_correct_pdu; int wrx_correct_pdu_bytes; int wrx_tccrc_err_pdu; int wrx_tccrc_err_pdu_bytes; int wrx_ethcrc_err_pdu; int wrx_ethcrc_err_pdu_bytes; int wrx_nodesc_drop_pdu; int wrx_len_violation_drop_pdu; int wrx_idle_bytes; int wrx_nonidle_cw; int wrx_idle_cw; int wrx_err_cw; int wtx_total_pdu; int wtx_total_bytes; } ;


 int FUNC_0 (char**) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (char*,char*,...) ;

__attribute__((used)) static int FUNC_2(char *VAR_1, char **VAR_2, off_t VAR_3, int VAR_4, int *VAR_5, void *VAR_6)
{
    int VAR_7 = 0;
    int VAR_8;
    char *VAR_9[] = {
        "dsl0\n",
        "dslfast0\n"
    };

    for ( VAR_8 = 0; VAR_8 < FUNC_0(VAR_9); VAR_8++ ) {
        VAR_7 += FUNC_1(VAR_1 + VAR_3 + VAR_7, VAR_9[VAR_8]);
        VAR_7 += FUNC_1(VAR_1 + VAR_3 + VAR_7, "  wrx_correct_pdu            = %d\n", VAR_0[VAR_8].wrx_correct_pdu);
        VAR_7 += FUNC_1(VAR_1 + VAR_3 + VAR_7, "  wrx_correct_pdu_bytes      = %d\n", VAR_0[VAR_8].wrx_correct_pdu_bytes);
        VAR_7 += FUNC_1(VAR_1 + VAR_3 + VAR_7, "  wrx_tccrc_err_pdu          = %d\n", VAR_0[VAR_8].wrx_tccrc_err_pdu);
        VAR_7 += FUNC_1(VAR_1 + VAR_3 + VAR_7, "  wrx_tccrc_err_pdu_bytes    = %d\n", VAR_0[VAR_8].wrx_tccrc_err_pdu_bytes);
        VAR_7 += FUNC_1(VAR_1 + VAR_3 + VAR_7, "  wrx_ethcrc_err_pdu         = %d\n", VAR_0[VAR_8].wrx_ethcrc_err_pdu);
        VAR_7 += FUNC_1(VAR_1 + VAR_3 + VAR_7, "  wrx_ethcrc_err_pdu_bytes   = %d\n", VAR_0[VAR_8].wrx_ethcrc_err_pdu_bytes);
        VAR_7 += FUNC_1(VAR_1 + VAR_3 + VAR_7, "  wrx_nodesc_drop_pdu        = %d\n", VAR_0[VAR_8].wrx_nodesc_drop_pdu);
        VAR_7 += FUNC_1(VAR_1 + VAR_3 + VAR_7, "  wrx_len_violation_drop_pdu = %d\n", VAR_0[VAR_8].wrx_len_violation_drop_pdu);
        VAR_7 += FUNC_1(VAR_1 + VAR_3 + VAR_7, "  wrx_idle_bytes             = %d\n", VAR_0[VAR_8].wrx_idle_bytes);
        VAR_7 += FUNC_1(VAR_1 + VAR_3 + VAR_7, "  wrx_nonidle_cw             = %d\n", VAR_0[VAR_8].wrx_nonidle_cw);
        VAR_7 += FUNC_1(VAR_1 + VAR_3 + VAR_7, "  wrx_idle_cw                = %d\n", VAR_0[VAR_8].wrx_idle_cw);
        VAR_7 += FUNC_1(VAR_1 + VAR_3 + VAR_7, "  wrx_err_cw                 = %d\n", VAR_0[VAR_8].wrx_err_cw);
        VAR_7 += FUNC_1(VAR_1 + VAR_3 + VAR_7, "  wtx_total_pdu              = %d\n", VAR_0[VAR_8].wtx_total_pdu);
        VAR_7 += FUNC_1(VAR_1 + VAR_3 + VAR_7, "  wtx_total_bytes            = %d\n", VAR_0[VAR_8].wtx_total_bytes);
    }

    *VAR_5 = 1;

    return VAR_7;
}
