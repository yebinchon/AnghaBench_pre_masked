
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_encoder {int N; int K; int tp; int * encode_int; scalar_t__ k; int bw; } ;
typedef enum list_coding_type { ____Placeholder_list_coding_type } list_coding_type ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned char*,unsigned char*,int) ;
 int VAR_0 ;
 int FUNC_2 (struct list_encoder*) ;
 int FUNC_3 (struct list_encoder*) ;
 int VAR_1 ;



 int FUNC_4 (int,int) ;
 int FUNC_5 (struct list_encoder*) ;

void FUNC_6 (struct list_encoder *VAR_2, int VAR_3, int VAR_4, unsigned char *VAR_5, unsigned char *VAR_6, enum list_coding_type VAR_7, int VAR_8) {
  FUNC_1 (&VAR_2->bw, VAR_5, VAR_6, VAR_8);
  VAR_2->N = VAR_3;
  VAR_2->K = VAR_4;
  if (VAR_3 == VAR_4) {
    VAR_2->tp = VAR_1;
    VAR_2->k = 0;
    VAR_2->encode_int = &VAR_0;
    return;
  }
  VAR_2->tp = VAR_7;
  switch (VAR_7) {
  case 130:
    FUNC_2 (VAR_2);
    return;
  case 129:
    FUNC_3 (VAR_2);
    return;
  case 128:
    if (FUNC_4 (VAR_3, VAR_4)) {
      VAR_2->tp = 130;
      FUNC_2 (VAR_2);
    } else {
      FUNC_5 (VAR_2);
    }
    return;
  default:
    FUNC_0 (0);
  }
}
