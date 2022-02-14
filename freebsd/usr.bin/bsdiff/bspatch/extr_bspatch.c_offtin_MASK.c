
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int off_t ;



__attribute__((used)) static off_t FUNC_0(u_char *VAR_0)
{
 off_t VAR_1;

 VAR_1 = VAR_0[7] & 0x7F;
 VAR_1 = VAR_1 * 256; VAR_1 += VAR_0[6];
 VAR_1 = VAR_1 * 256; VAR_1 += VAR_0[5];
 VAR_1 = VAR_1 * 256; VAR_1 += VAR_0[4];
 VAR_1 = VAR_1 * 256; VAR_1 += VAR_0[3];
 VAR_1 = VAR_1 * 256; VAR_1 += VAR_0[2];
 VAR_1 = VAR_1 * 256; VAR_1 += VAR_0[1];
 VAR_1 = VAR_1 * 256; VAR_1 += VAR_0[0];

 if (VAR_0[7] & 0x80)
  VAR_1 = -VAR_1;

 return (VAR_1);
}
