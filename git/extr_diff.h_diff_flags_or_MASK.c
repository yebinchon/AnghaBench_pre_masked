
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_flags {int dummy; } ;



__attribute__((used)) static inline void FUNC_0(struct diff_flags *VAR_0,
     const struct diff_flags *VAR_1)
{
 char *VAR_2 = (char *)VAR_0;
 const char *VAR_3 = (const char *)VAR_1;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < sizeof(struct diff_flags); VAR_4++)
  VAR_2[VAR_4] |= VAR_3[VAR_4];
}
