
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct iso_primary_descriptor {scalar_t__ type_m_path_table; scalar_t__ path_table_size; scalar_t__ type_l_path_table; } ;
struct _boot_volume_descriptor {scalar_t__ type_m_path_table; scalar_t__ path_table_size; scalar_t__ type_l_path_table; } ;
typedef int off_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int,int) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (unsigned char*,int,int,int *) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct iso_primary_descriptor*,unsigned char*,int) ;
 int FUNC_7 (char*,...) ;

void
FUNC_8(FILE *VAR_2)
{
 unsigned char VAR_3[VAR_0];
 off_t VAR_4;
 int VAR_5, VAR_6;
 struct iso_primary_descriptor VAR_7;
 struct _boot_volume_descriptor VAR_8;

 FUNC_7("<cd9660dump>\n");


 VAR_4 = 16;
 do {
  if (FUNC_5(VAR_2, VAR_0 * VAR_4, VAR_1) == -1)
   FUNC_3(1, "fseeko");
  FUNC_4(VAR_3, 1, VAR_0, VAR_2);
  VAR_5 = (int)((unsigned char)VAR_3[0]);
  switch (VAR_5) {
  case 0:
   FUNC_6(&VAR_8, VAR_3, VAR_0);
   break;
  case 1:
   FUNC_6(&VAR_7, VAR_3, VAR_0);
   break;
  }
  FUNC_1(VAR_3, VAR_4);
  VAR_4++;
 } while (VAR_5 != 255);

 VAR_5 = FUNC_2((u_char *)VAR_7.type_l_path_table,
     731);
 VAR_6 = FUNC_2((u_char *)VAR_7.path_table_size, 733);
 FUNC_7("Path table 1 located at sector %i and is %i bytes long\n",
     VAR_5,VAR_6);
 FUNC_0(VAR_2, VAR_5, VAR_6, 721);

 VAR_5 = FUNC_2((u_char *)VAR_7.type_m_path_table,
     731);
 FUNC_0(VAR_2, VAR_5, VAR_6, 722);

 FUNC_7("</cd9660dump>\n");
}
