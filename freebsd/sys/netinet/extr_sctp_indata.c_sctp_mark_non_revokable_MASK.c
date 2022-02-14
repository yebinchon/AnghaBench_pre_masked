
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct sctp_association {void* highest_tsn_inside_nr_map; void* highest_tsn_inside_map; int mapping_array_base_tsn; int mapping_array; int nr_mapping_array; void* cumulative_tsn; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void*,void*,int ) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (char*,void*,void*) ;
 int FUNC_4 (int ,void*) ;
 scalar_t__ FUNC_5 (void*,int ) ;
 scalar_t__ FUNC_6 (void*,void*) ;
 int FUNC_7 (int ,void*) ;
 int FUNC_8 (char*) ;
 int VAR_0 ;
 int FUNC_9 (struct sctp_association*) ;

__attribute__((used)) static void
FUNC_10(struct sctp_association *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3, VAR_4, VAR_5;
 int VAR_6 = 0;
 int VAR_7 = 0, VAR_8 = 0;

 if (FUNC_0(VAR_0) == 0) {
  return;
 }
 VAR_5 = VAR_1->cumulative_tsn + 1;
 if (FUNC_6(VAR_5, VAR_2)) {




  return;
 }
 FUNC_1(VAR_3, VAR_2, VAR_1->mapping_array_base_tsn);
 VAR_7 = FUNC_2(VAR_1->mapping_array, VAR_3);
 VAR_8 = FUNC_2(VAR_1->nr_mapping_array, VAR_3);
 if ((VAR_7 == 0) && (VAR_8 == 0)) {



  FUNC_3("gap:%x tsn:%x\n", VAR_3, VAR_2);
  FUNC_9(VAR_1);

 }
 if (VAR_8 == 0)
  FUNC_4(VAR_1->nr_mapping_array, VAR_3);
 if (VAR_7)
  FUNC_7(VAR_1->mapping_array, VAR_3);
 if (FUNC_6(VAR_2, VAR_1->highest_tsn_inside_nr_map)) {
  VAR_1->highest_tsn_inside_nr_map = VAR_2;
 }
 if (VAR_2 == VAR_1->highest_tsn_inside_map) {

  for (VAR_4 = VAR_2 - 1; FUNC_5(VAR_4, VAR_1->mapping_array_base_tsn); VAR_4--) {
   FUNC_1(VAR_3, VAR_4, VAR_1->mapping_array_base_tsn);
   if (FUNC_2(VAR_1->mapping_array, VAR_3)) {
    VAR_1->highest_tsn_inside_map = VAR_4;
    VAR_6 = 1;
    break;
   }
  }
  if (!VAR_6) {
   VAR_1->highest_tsn_inside_map = VAR_1->mapping_array_base_tsn - 1;
  }
 }
}
