
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xpparam_t ;
typedef int xdiff_emit_line_fn ;
typedef scalar_t__ xdiff_emit_hunk_fn ;
typedef int xdemitconf_t ;
struct xdiff_emit_state {int remainder; struct xdiff_emit_state* priv; int out_line; int out_hunk; void* consume_callback_data; int line_fn; scalar_t__ hunk_fn; } ;
typedef struct xdiff_emit_state xdemitcb_t ;
typedef int state ;
typedef int mmfile_t ;
typedef int ecb ;


 int FUNC_0 (struct xdiff_emit_state*,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int const*,int const*,struct xdiff_emit_state*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_4(mmfile_t *VAR_2, mmfile_t *VAR_3,
    xdiff_emit_hunk_fn VAR_4,
    xdiff_emit_line_fn VAR_5,
    void *VAR_6,
    xpparam_t const *VAR_7, xdemitconf_t const *VAR_8)
{
 int VAR_9;
 struct xdiff_emit_state VAR_10;
 xdemitcb_t VAR_11;

 FUNC_0(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.hunk_fn = VAR_4;
 VAR_10.line_fn = VAR_5;
 VAR_10.consume_callback_data = VAR_6;
 FUNC_0(&VAR_11, 0, sizeof(VAR_11));
 if (VAR_4)
  VAR_11.out_hunk = VAR_0;
 VAR_11.out_line = VAR_1;
 VAR_11.priv = &VAR_10;
 FUNC_1(&VAR_10.remainder, 0);
 VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_7, VAR_8, &VAR_11);
 FUNC_2(&VAR_10.remainder);
 return VAR_9;
}
