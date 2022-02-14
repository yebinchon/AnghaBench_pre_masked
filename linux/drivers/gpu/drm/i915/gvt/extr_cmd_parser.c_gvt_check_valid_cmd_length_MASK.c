
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_1, int VAR_2)
{
 if (VAR_2 != VAR_1) {
  FUNC_0("len is not valid:  len=%u  valid_len=%u\n",
   VAR_1, VAR_2);
  return -VAR_0;
 }
 return 0;
}
