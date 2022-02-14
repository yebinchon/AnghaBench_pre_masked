
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union drbd_state {scalar_t__ susp_fen; scalar_t__ susp_nod; scalar_t__ susp; } ;



__attribute__((used)) static inline bool FUNC_0(union drbd_state VAR_0)
{
        return VAR_0.susp || VAR_0.susp_nod || VAR_0.susp_fen;
}
