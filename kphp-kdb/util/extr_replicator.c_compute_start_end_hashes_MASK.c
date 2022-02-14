
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int md5_hash_t ;


 long long VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,long long,int ) ;
 int FUNC_2 (int ,int ,int) ;
 long long FUNC_3 (int,scalar_t__,long long,long long) ;
 scalar_t__ VAR_1 ;

int FUNC_4 (int VAR_2, long long VAR_3, md5_hash_t VAR_4, md5_hash_t VAR_5) {
  FUNC_0 (VAR_2 > 0 && VAR_3 >= 0);
  if (VAR_3 <= VAR_0) {
    FUNC_0 (FUNC_3 (VAR_2, VAR_1, VAR_3, 0) == VAR_3);
    FUNC_1 ((unsigned char *) VAR_1, VAR_3, VAR_4);
    FUNC_2 (VAR_5, VAR_4, sizeof (md5_hash_t));
  } else {
    FUNC_0 (FUNC_3 (VAR_2, VAR_1, VAR_0, 0) == VAR_0);
    FUNC_1 ((unsigned char *) VAR_1, VAR_0, VAR_4);
    FUNC_0 (FUNC_3 (VAR_2, VAR_1, VAR_0, VAR_3 - VAR_0) == VAR_0);
    FUNC_1 ((unsigned char *) VAR_1, VAR_0, VAR_5);
  }
  return 0;
}
