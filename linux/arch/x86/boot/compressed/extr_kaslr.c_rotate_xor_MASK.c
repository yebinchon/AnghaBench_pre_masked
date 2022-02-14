
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hash ;



__attribute__((used)) static unsigned long FUNC_0(unsigned long VAR_0, const void *VAR_1,
    size_t VAR_2)
{
 size_t VAR_3;
 unsigned long *VAR_4 = (unsigned long *)VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_2 / sizeof(VAR_0); VAR_3++) {

  VAR_0 = (VAR_0 << ((sizeof(VAR_0) * 8) - 7)) | (VAR_0 >> 7);
  VAR_0 ^= VAR_4[VAR_3];
 }

 return VAR_0;
}
