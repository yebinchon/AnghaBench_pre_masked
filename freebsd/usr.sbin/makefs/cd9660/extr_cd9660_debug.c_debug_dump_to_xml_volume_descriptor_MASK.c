
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct iso_primary_descriptor {scalar_t__ file_structure_version; scalar_t__ effective_date; scalar_t__ expiration_date; scalar_t__ modification_date; scalar_t__ creation_date; scalar_t__ bibliographic_file_id; scalar_t__ abstract_file_id; scalar_t__ copyright_file_id; scalar_t__ application_id; scalar_t__ preparer_id; scalar_t__ publisher_id; scalar_t__ volume_set_id; scalar_t__ root_directory_record; int opt_type_m_path_table; int type_m_path_table; int opt_type_l_path_table; int type_l_path_table; int path_table_size; int logical_block_size; int volume_sequence_number; int volume_set_size; int volume_space_size; scalar_t__ volume_id; scalar_t__ system_id; int version; scalar_t__ id; int type; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,int *,int ) ;
 int FUNC_4 (char*,...) ;

void
FUNC_5(unsigned char* VAR_0, int VAR_1)
{
 FUNC_4("<volumedescriptor sector=\"%i\">\n", VAR_1);
 FUNC_4("<vdtype>");
 switch(VAR_0[0]) {
 case 0:
  FUNC_4("boot");
  break;

 case 1:
  FUNC_4("primary");
  break;

 case 2:
  FUNC_4("supplementary");
  break;

 case 3:
  FUNC_4("volume partition descriptor");
  break;

 case 255:
  FUNC_4("terminator");
  break;
 }

 FUNC_4("</vdtype>\n");
 switch(VAR_0[0]) {
 case 1:
  FUNC_2("type",
      ((struct iso_primary_descriptor*)VAR_0)->type, 711);
  FUNC_3("id",
      (u_char *)((struct iso_primary_descriptor*) VAR_0)->id,
      FUNC_0 ( 2, 6));
  FUNC_2("version",
      ((struct iso_primary_descriptor*)VAR_0)->version,
       711);
  FUNC_3("system_id",
      (u_char *)((struct iso_primary_descriptor*)VAR_0)->system_id,
      FUNC_0(9,40));
  FUNC_3("volume_id",
      (u_char *)((struct iso_primary_descriptor*)VAR_0)->volume_id,
      FUNC_0(41,72));
  FUNC_2("volume_space_size",
      ((struct iso_primary_descriptor*)VAR_0)->volume_space_size,
      733);
  FUNC_2("volume_set_size",
      ((struct iso_primary_descriptor*)VAR_0)->volume_set_size,
       733);
  FUNC_2("volume_sequence_number",
      ((struct iso_primary_descriptor*)VAR_0)->volume_sequence_number,
      723);
  FUNC_2("logical_block_size",
      ((struct iso_primary_descriptor*)VAR_0)->logical_block_size,
       723);
  FUNC_2("path_table_size",
      ((struct iso_primary_descriptor*)VAR_0)->path_table_size,
       733);
  FUNC_2("type_l_path_table",
      ((struct iso_primary_descriptor*)VAR_0)->type_l_path_table,
      731);
  FUNC_2("opt_type_l_path_table",
      ((struct iso_primary_descriptor*)VAR_0)->opt_type_l_path_table,
      731);
  FUNC_2("type_m_path_table",
      ((struct iso_primary_descriptor*)VAR_0)->type_m_path_table,
      732);
  FUNC_2("opt_type_m_path_table",
   ((struct iso_primary_descriptor*)VAR_0)->opt_type_m_path_table,732);
  FUNC_1(
      (u_char *)((struct iso_primary_descriptor*)VAR_0)->root_directory_record);
  FUNC_3("volume_set_id",
      (u_char *)((struct iso_primary_descriptor*) VAR_0)->volume_set_id,
      FUNC_0 (191, 318));
  FUNC_3("publisher_id",
      (u_char *)((struct iso_primary_descriptor*) VAR_0)->publisher_id,
      FUNC_0 (319, 446));
  FUNC_3("preparer_id",
      (u_char *)((struct iso_primary_descriptor*) VAR_0)->preparer_id,
      FUNC_0 (447, 574));
  FUNC_3("application_id",
      (u_char *)((struct iso_primary_descriptor*) VAR_0)->application_id,
      FUNC_0 (575, 702));
  FUNC_3("copyright_file_id",
      (u_char *)((struct iso_primary_descriptor*) VAR_0)->copyright_file_id,
      FUNC_0 (703, 739));
  FUNC_3("abstract_file_id",
      (u_char *)((struct iso_primary_descriptor*) VAR_0)->abstract_file_id,
      FUNC_0 (740, 776));
  FUNC_3("bibliographic_file_id",
      (u_char *)((struct iso_primary_descriptor*) VAR_0)->bibliographic_file_id,
      FUNC_0 (777, 813));

  FUNC_3("creation_date",
      (u_char *)((struct iso_primary_descriptor*) VAR_0)->creation_date,
      FUNC_0 (814, 830));
  FUNC_3("modification_date",
      (u_char *)((struct iso_primary_descriptor*) VAR_0)->modification_date,
      FUNC_0 (831, 847));
  FUNC_3("expiration_date",
      (u_char *)((struct iso_primary_descriptor*) VAR_0)->expiration_date,
      FUNC_0 (848, 864));
  FUNC_3("effective_date",
      (u_char *)((struct iso_primary_descriptor*) VAR_0)->effective_date,
      FUNC_0 (865, 881));

  FUNC_3("file_structure_version",
      (u_char *)((struct iso_primary_descriptor*) VAR_0)->file_structure_version,
      FUNC_0(882,882));
  break;
 }
 FUNC_4("</volumedescriptor>\n");
}
