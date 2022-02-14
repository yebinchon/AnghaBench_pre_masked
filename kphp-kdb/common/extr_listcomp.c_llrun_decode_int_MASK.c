
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitreader {int dummy; } ;
struct list_decoder {int* data; int last; struct bitreader br; } ;


 int VAR_0 ;
 int FUNC_0 (struct bitreader*,int*,int*) ;
 int FUNC_1 (struct bitreader*,int) ;

__attribute__((used)) static int FUNC_2 (struct list_decoder *VAR_1) {
  struct bitreader *VAR_2 = &VAR_1->br;
  int *VAR_3 = VAR_1->data, VAR_4 = FUNC_0 (VAR_2, VAR_3, VAR_3 + (VAR_0 + 1));
  return VAR_1->last += FUNC_1 (VAR_2, VAR_4) + (1 << VAR_4);
}
