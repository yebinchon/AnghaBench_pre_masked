
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_decoder {int N; int K; int tp; int * decode_int; int k; int br; } ;
typedef enum list_coding_type { ____Placeholder_list_coding_type } list_coding_type ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned char const*,int) ;
 int VAR_0 ;
 int FUNC_2 (struct list_decoder*) ;
 int FUNC_3 (struct list_decoder*) ;






 int FUNC_4 (int,int) ;
 int FUNC_5 (struct list_decoder*) ;
 int FUNC_6 (struct list_decoder*) ;

__attribute__((used)) static void FUNC_7 (struct list_decoder *VAR_1, int VAR_2, int VAR_3, const unsigned char *VAR_4, enum list_coding_type VAR_5, int VAR_6) {
  FUNC_1 (&VAR_1->br, VAR_4, VAR_6);
  VAR_1->N = VAR_2;
  VAR_1->K = VAR_3;
  VAR_1->tp = VAR_5;
  switch (VAR_5) {
  case 132:
    FUNC_2 (VAR_1);
    break;
  case 131:
    FUNC_3 (VAR_1);
    break;
  case 130:
    FUNC_0 (0);
    break;
  case 129:
    if (FUNC_4 (VAR_2, VAR_3)) {
      VAR_1->tp = 132;
      FUNC_2 (VAR_1);
    } else {
      FUNC_5 (VAR_1);
    }
    break;
  case 133:
    VAR_1->k = 0;
    VAR_1->decode_int = &VAR_0;
    break;
  case 128:
    FUNC_6 (VAR_1);
    break;
  default:
    FUNC_0 (0);
  }
}
