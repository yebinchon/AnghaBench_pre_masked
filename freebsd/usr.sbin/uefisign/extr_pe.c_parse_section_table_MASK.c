
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pe_section_header {scalar_t__ psh_pointer_to_raw_data; int psh_size_of_raw_data; } ;
struct executable {scalar_t__ x_headers_len; scalar_t__ x_buf; int x_nsections; int* x_section_off; int* x_section_len; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char*,int,scalar_t__,int) ;
 int FUNC_2 (struct executable*,scalar_t__,int,char*) ;

__attribute__((used)) static void
FUNC_3(struct executable *VAR_1, off_t VAR_2, int VAR_3)
{
 const struct pe_section_header *VAR_4;
 int VAR_5;

 FUNC_2(VAR_1, VAR_2, sizeof(*VAR_4) * VAR_3,
     "section table");

 if (VAR_1->x_headers_len <= VAR_2 + sizeof(*VAR_4) * VAR_3)
  FUNC_0(1, "section table outside of headers");

 VAR_4 = (const struct pe_section_header *)(VAR_1->x_buf + VAR_2);

 if (VAR_3 >= VAR_0) {
  FUNC_0(1, "too many sections: got %d, should be %d",
      VAR_3, VAR_0);
 }
 VAR_1->x_nsections = VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (VAR_4->psh_pointer_to_raw_data < VAR_1->x_headers_len)
   FUNC_0(1, "section points inside the headers");

  FUNC_2(VAR_1, VAR_4->psh_pointer_to_raw_data,
      VAR_4->psh_size_of_raw_data, "section");




  VAR_1->x_section_off[VAR_5] = VAR_4->psh_pointer_to_raw_data;
  VAR_1->x_section_len[VAR_5] = VAR_4->psh_size_of_raw_data;
  VAR_4++;
 }
}
