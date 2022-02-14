
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int nentry; char* gpu_prefix; int* table; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct table *VAR_0)
{
 unsigned VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_1 = (VAR_0->nentry + 3) / 4;
 VAR_5 = VAR_0->nentry;
 FUNC_0(
     "#include <sys/cdefs.h>\n"
     "__FBSDID(\"$" "FreeBSD" "$\");\n"
     "\n"
     );
 FUNC_0("static const unsigned %s_reg_safe_bm[%d] = {\n", VAR_0->gpu_prefix,
        VAR_0->nentry);
 for (VAR_2 = 0, VAR_6 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_4 = 4;
  if (VAR_4 > VAR_5)
   VAR_4 = VAR_5;
  VAR_5 -= VAR_4;
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
   if (VAR_3 == 0)
    FUNC_0("\t");
   else
    FUNC_0(" ");
   FUNC_0("0x%08X,", VAR_0->table[VAR_6++]);
  }
  FUNC_0("\n");
 }
 FUNC_0("};\n");
}
