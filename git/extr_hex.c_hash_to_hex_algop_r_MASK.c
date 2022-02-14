
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct git_hash_algo {int rawsz; } ;



char *FUNC_0(char *VAR_0, const unsigned char *VAR_1,
     const struct git_hash_algo *VAR_2)
{
 static const char VAR_3[] = "0123456789abcdef";
 char *VAR_4 = VAR_0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->rawsz; VAR_5++) {
  unsigned int VAR_6 = *VAR_1++;
  *VAR_4++ = VAR_3[VAR_6 >> 4];
  *VAR_4++ = VAR_3[VAR_6 & 0xf];
 }
 *VAR_4 = '\0';

 return VAR_0;
}
