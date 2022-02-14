
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pe_directory_entry {int pde_size; scalar_t__ pde_rva; } ;
struct executable {scalar_t__ x_headers_len; int x_certificate_entry_len; scalar_t__ x_buf; scalar_t__ x_certificate_entry_off; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_1 ;
 void FUNC_1 (struct executable*,scalar_t__,int) ;
 int FUNC_2 (char*,scalar_t__,int) ;
 int FUNC_3 (struct executable*,scalar_t__,int,char*) ;

__attribute__((used)) static void
FUNC_4(struct executable *VAR_2, off_t VAR_3,
    int VAR_4, int VAR_5)
{

 const struct pe_directory_entry *VAR_6;



 if (VAR_4 <= VAR_0) {
  FUNC_0(1, "wrong NumberOfRvaAndSizes %d; should be at least %d",
      VAR_4, VAR_0);
 }

 FUNC_3(VAR_2, VAR_3, sizeof(*VAR_6) * VAR_4,
     "PE Data Directory");
 if (VAR_2->x_headers_len <= VAR_3 + sizeof(*VAR_6) * VAR_4)
  FUNC_0(1, "PE Data Directory outside of headers");

 VAR_2->x_certificate_entry_off =
     VAR_3 + sizeof(*VAR_6) * VAR_0;
 VAR_2->x_certificate_entry_len = sizeof(*VAR_6);
 return (FUNC_1(VAR_2,
     VAR_3 + sizeof(*VAR_6) * VAR_4, VAR_5));
}
