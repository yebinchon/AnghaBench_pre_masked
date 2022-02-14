
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int coff_number_of_sections; } ;
struct pe_header {scalar_t__ pe_signature; TYPE_1__ pe_coff; } ;
struct executable {scalar_t__ x_buf; } ;
typedef scalar_t__ off_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (struct executable*,scalar_t__,int ) ;
 int FUNC_2 (struct executable*,scalar_t__,int,char*) ;

__attribute__((used)) static void
FUNC_3(struct executable *VAR_1, off_t VAR_2)
{
 const struct pe_header *VAR_3;



 FUNC_2(VAR_1, VAR_2, sizeof(*VAR_3), "PE header");

 VAR_3 = (struct pe_header *)(VAR_1->x_buf + VAR_2);
 if (VAR_3->pe_signature != VAR_0)
  FUNC_0(1, "wrong PE signature 0x%x", VAR_3->pe_signature);



 FUNC_1(VAR_1, VAR_2 + sizeof(*VAR_3),
     VAR_3->pe_coff.coff_number_of_sections);
}
