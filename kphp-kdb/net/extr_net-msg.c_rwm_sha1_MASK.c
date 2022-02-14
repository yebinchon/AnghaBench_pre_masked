
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_message {int dummy; } ;
typedef int SHA_CTX ;


 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct raw_message*,int,void*,int *) ;

int FUNC_3 (struct raw_message *VAR_1, int VAR_2, unsigned char VAR_3[20]) {
  static SHA_CTX VAR_4;

  FUNC_1 (&VAR_4);
  int VAR_5 = FUNC_2 (VAR_1, VAR_2, (void *)VAR_0, &VAR_4);
  FUNC_0 (VAR_3, &VAR_4);

  return VAR_5;
}
