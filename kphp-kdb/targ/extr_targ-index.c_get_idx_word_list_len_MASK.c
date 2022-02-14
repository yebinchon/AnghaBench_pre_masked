
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitreader {int dummy; } ;
typedef int hash_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bitreader*) ;
 int FUNC_2 (struct bitreader*) ;
 int FUNC_3 (struct bitreader*,unsigned char*,int ) ;
 unsigned char* FUNC_4 (int ,int*) ;

int FUNC_5 (hash_t VAR_0) {
  int VAR_1;
  unsigned char *VAR_2 = FUNC_4 (VAR_0, &VAR_1);
  if (!VAR_2) {
    return 0;
  }
  struct bitreader VAR_3;
  FUNC_3 (&VAR_3, VAR_2, 0);
  int VAR_4 = FUNC_1 (&VAR_3);
  FUNC_0 (FUNC_2 (&VAR_3) <= VAR_1 * 8);
  return VAR_4;
}
