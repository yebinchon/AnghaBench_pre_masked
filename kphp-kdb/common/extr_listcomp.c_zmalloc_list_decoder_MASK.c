
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_decoder {int p; int size; } ;
struct interpolative_decoder_stack_entry {int dummy; } ;
typedef enum list_coding_type { ____Placeholder_list_coding_type } list_coding_type ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;






 int FUNC_3 (struct list_decoder*,int,int,unsigned char const*,int,int) ;
 int FUNC_4 (int ) ;
 struct list_decoder* FUNC_5 (int) ;

struct list_decoder *FUNC_6 (int VAR_1, int VAR_2, const unsigned char *VAR_3, enum list_coding_type VAR_4, int VAR_5) {
  int VAR_6 = 0, VAR_7 = sizeof (struct list_decoder);
  if (VAR_1 == VAR_2) {
    VAR_4 = 133;
  }
  switch (VAR_4) {
  case 132:
  case 133:
    break;
  case 131:
    VAR_7 += sizeof (struct interpolative_decoder_stack_entry) * (FUNC_1 (VAR_2+1) + 1);
    break;
  case 130:
    FUNC_0 (0);
    break;
  case 129:
    VAR_6 = FUNC_4 (FUNC_2 (VAR_1, VAR_2));
    VAR_7 += ((VAR_0 + 1) + (VAR_6 + 1) * (VAR_0 + 1)) * sizeof (int);
    break;
  case 128:
    break;
  }
  struct list_decoder *VAR_8 = FUNC_5 (VAR_7);
  VAR_8->p = VAR_6;
  VAR_8->size = VAR_7;
  FUNC_3 (VAR_8, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  return VAR_8;
}
