
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kfs_hash_t ;


 int FUNC_0 (unsigned char*,int ,unsigned char*) ;
 int FUNC_1 (char const*) ;

kfs_hash_t FUNC_2 (const char *VAR_0) {
  static union {
    unsigned char output[16];
    kfs_hash_t hash;
  } VAR_1;
  FUNC_0 ((unsigned char *) VAR_0, FUNC_1 (VAR_0), VAR_1.output);
  return VAR_1.hash;
}
