
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pe_optional_header_32 {int po_magic; } ;
struct executable {scalar_t__ x_buf; } ;
typedef scalar_t__ off_t ;




 int FUNC_0 (int,char*,int) ;
 void FUNC_1 (struct executable*,scalar_t__,int) ;
 void FUNC_2 (struct executable*,scalar_t__,int) ;
 int FUNC_3 (struct executable*,scalar_t__,int,char*) ;

__attribute__((used)) static void
FUNC_4(struct executable *VAR_0, off_t VAR_1, int VAR_2)
{
 const struct pe_optional_header_32 *VAR_3;



 FUNC_3(VAR_0, VAR_1, sizeof(*VAR_3), "PE Optional Header");

 VAR_3 = (struct pe_optional_header_32 *)(VAR_0->x_buf + VAR_1);

 switch (VAR_3->po_magic) {
 case 129:
  return (FUNC_1(VAR_0, VAR_1, VAR_2));
 case 128:
  return (FUNC_2(VAR_0, VAR_1, VAR_2));
 default:
  FUNC_0(1, "wrong PE Optional Header magic 0x%x", VAR_3->po_magic);
 }
}
