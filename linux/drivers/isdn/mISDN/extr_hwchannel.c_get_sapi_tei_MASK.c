
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;



__attribute__((used)) static inline u_int
FUNC_0(u_char *VAR_0)
{
 u_int VAR_1, VAR_2;

 VAR_1 = *VAR_0 >> 2;
 VAR_2 = VAR_0[1] >> 1;
 return VAR_1 | (VAR_2 << 8);
}
