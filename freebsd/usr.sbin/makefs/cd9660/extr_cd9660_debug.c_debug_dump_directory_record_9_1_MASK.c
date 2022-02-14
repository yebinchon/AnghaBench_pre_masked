
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct iso_directory_record {char* length; char* ext_attr_length; char* flags; char* file_unit_size; char* interleave; char* volume_sequence_number; char* name_len; scalar_t__ name; scalar_t__ size; scalar_t__ extent; } ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char*) ;

void
FUNC_4(unsigned char* VAR_0)
{
 FUNC_3("<directoryrecord>\n");
 FUNC_0("length",
     ((struct iso_directory_record*) VAR_0)->length, 711);
 FUNC_0("ext_attr_length",
     ((struct iso_directory_record*) VAR_0)->ext_attr_length,711);
 FUNC_0("extent",
     (char *)((struct iso_directory_record*) VAR_0)->extent, 733);
 FUNC_0("size",
     (char *)((struct iso_directory_record*) VAR_0)->size, 733);
 FUNC_0("flags",
     ((struct iso_directory_record*) VAR_0)->flags, 711);
 FUNC_0("file_unit_size",
     ((struct iso_directory_record*) VAR_0)->file_unit_size,711);
 FUNC_0("interleave",
     ((struct iso_directory_record*) VAR_0)->interleave, 711);
 FUNC_0("volume_sequence_number",
     ((struct iso_directory_record*) VAR_0)->volume_sequence_number,
     723);
 FUNC_0("name_len",
     ((struct iso_directory_record*) VAR_0)->name_len, 711);
 FUNC_1("name",
     (u_char *)((struct iso_directory_record*) VAR_0)->name,
  FUNC_2((u_char *)
      ((struct iso_directory_record*) VAR_0)->length, 711));
 FUNC_3("</directoryrecord>\n");
}
