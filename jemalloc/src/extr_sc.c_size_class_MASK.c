
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; int lg_base; int lg_delta; int ndelta; int psz; int bin; int lg_delta_lookup; scalar_t__ pgs; } ;
typedef TYPE_1__ sc_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 scalar_t__ FUNC_3 (int,int,int,int) ;

__attribute__((used)) static void
FUNC_4(

    sc_t *VAR_0,

    int VAR_1, int VAR_2, int VAR_3,

    int VAR_4, int VAR_5, int VAR_6, int VAR_7) {
 VAR_0->index = VAR_4;
 VAR_0->lg_base = VAR_5;
 VAR_0->lg_delta = VAR_6;
 VAR_0->ndelta = VAR_7;
 VAR_0->psz = (FUNC_2(VAR_5, VAR_6, VAR_7)
     % (FUNC_0(1) << VAR_2) == 0);
 size_t VAR_8 = (FUNC_0(1) << VAR_5) + (FUNC_0(VAR_7) << VAR_6);
 if (VAR_4 == 0) {
  FUNC_1(!VAR_0->psz);
 }
 if (VAR_8 < (FUNC_0(1) << (VAR_2 + VAR_3))) {
  VAR_0->bin = 1;
  VAR_0->pgs = FUNC_3(VAR_2, VAR_5, VAR_6, VAR_7);
 } else {
  VAR_0->bin = 0;
  VAR_0->pgs = 0;
 }
 if (VAR_8 <= (FUNC_0(1) << VAR_1)) {
  VAR_0->lg_delta_lookup = VAR_6;
 } else {
  VAR_0->lg_delta_lookup = 0;
 }
}
