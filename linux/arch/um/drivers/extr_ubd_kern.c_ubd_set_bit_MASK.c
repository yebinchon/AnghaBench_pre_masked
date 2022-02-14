
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int data ;
typedef int __u64 ;



__attribute__((used)) static inline void FUNC_0(__u64 VAR_0, unsigned char *VAR_1)
{
 __u64 VAR_2;
 int VAR_3, VAR_4;

 VAR_3 = sizeof(VAR_1[0]) * 8;
 VAR_2 = VAR_0 / VAR_3;
 VAR_4 = VAR_0 % VAR_3;
 VAR_1[VAR_2] |= (1 << VAR_4);
}
