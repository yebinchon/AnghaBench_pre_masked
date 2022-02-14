
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const**) ;

__attribute__((used)) static const char *FUNC_1(unsigned VAR_0)
{
 static const char *VAR_1[] = {
  "unknown",
  "uncorrectable data ECC on replay",
  "unknown",
  "unknown",
  "aliased uncorrectable demand data ECC",
  "aliased uncorrectable spare-copy data ECC",
  "aliased uncorrectable patrol data ECC",
  "unknown",
  "unknown",
  "unknown",
  "non-aliased uncorrectable demand data ECC",
  "non-aliased uncorrectable spare-copy data ECC",
  "non-aliased uncorrectable patrol data ECC",
  "unknown",
  "correctable demand data ECC",
  "correctable spare-copy data ECC",
  "correctable patrol data ECC",
  "unknown",
  "SPD protocol error",
  "unknown",
  "spare copy initiated",
  "spare copy completed",
 };
 unsigned VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
  if (1 << VAR_2 & VAR_0)
   return VAR_1[VAR_2];

 return "none";
}
