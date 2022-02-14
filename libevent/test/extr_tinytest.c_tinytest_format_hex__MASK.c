
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (unsigned long) ;
 char* FUNC_1 (char*) ;

char *
FUNC_2(const void *VAR_0, unsigned long VAR_1)
{
 const unsigned char *VAR_2 = VAR_0;
 char *VAR_3, *VAR_4;
 size_t VAR_5;

 if (!VAR_2)
  return FUNC_1("null");
 if (!(VAR_3 = FUNC_0(VAR_1*2+1)))
  return FUNC_1("<allocation failure>");
 VAR_4 = VAR_3;
 for (VAR_5=0;VAR_5<VAR_1;++VAR_5) {
  *VAR_4++ = "0123456789ABCDEF"[VAR_2[VAR_5] >> 4];
  *VAR_4++ = "0123456789ABCDEF"[VAR_2[VAR_5] & 0x0f];
 }
 *VAR_4 = 0;
 return VAR_3;
}
