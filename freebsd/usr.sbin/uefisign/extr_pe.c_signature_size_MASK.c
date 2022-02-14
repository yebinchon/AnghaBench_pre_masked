
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pe_directory_entry {scalar_t__ pde_rva; scalar_t__ pde_size; } ;
struct executable {scalar_t__ x_certificate_entry_off; scalar_t__ x_buf; int x_certificate_entry_len; } ;


 int FUNC_0 (struct executable const*,scalar_t__,int ,char*) ;
 int FUNC_1 (char*,scalar_t__) ;

size_t
FUNC_2(const struct executable *VAR_0)
{
 const struct pe_directory_entry *VAR_1;

 FUNC_0(VAR_0, VAR_0->x_certificate_entry_off,
     VAR_0->x_certificate_entry_len, "Certificate Directory");

 VAR_1 = (struct pe_directory_entry *)
     (VAR_0->x_buf + VAR_0->x_certificate_entry_off);

 if (VAR_1->pde_rva != 0 && VAR_1->pde_size == 0)
  FUNC_1("signature size is 0, but its RVA is %d", VAR_1->pde_rva);
 if (VAR_1->pde_rva == 0 && VAR_1->pde_size != 0)
  FUNC_1("signature RVA is 0, but its size is %d", VAR_1->pde_size);

 return (VAR_1->pde_size);
}
