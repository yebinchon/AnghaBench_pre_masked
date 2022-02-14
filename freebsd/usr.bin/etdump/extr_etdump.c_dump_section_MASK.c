
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct outputter {int (* output_entry ) (int *,char const*,int *,int ,int) ;int (* output_section ) (int *,char const*,TYPE_1__*) ;} ;
struct TYPE_3__ {scalar_t__* num_section_entries; int * platform_id; } ;
typedef TYPE_1__ boot_catalog_section_header ;
typedef int boot_catalog_section_entry ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,TYPE_1__*) ;
 int FUNC_1 (int *,char const*,int *,int ,int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_1, size_t VAR_2, FILE *VAR_3, const char *VAR_4,
    struct outputter *VAR_5)
{
 boot_catalog_section_header *VAR_6;
 u_char VAR_7;
 int VAR_8;
 size_t VAR_9;
 boot_catalog_section_entry *VAR_10;

 VAR_6 = (boot_catalog_section_header *)&VAR_1[VAR_2];
 if (VAR_5->output_section != ((void*)0)) {
  VAR_5->output_section(VAR_3, VAR_4, VAR_6);
 }

 VAR_7 = VAR_6->platform_id[0];

 if (VAR_5->output_entry != ((void*)0)) {
  for (VAR_8 = 1; VAR_8 <= (int)VAR_6->num_section_entries[0]; VAR_8++) {
   VAR_9 = VAR_2 + VAR_8 * VAR_0;
   VAR_10 =
       (boot_catalog_section_entry *)&VAR_1[VAR_9];
   VAR_5->output_entry(VAR_3, VAR_4, VAR_10,
       VAR_7, 0);
  }
 }

 return (1 + (int)VAR_6->num_section_entries[0]);
}
