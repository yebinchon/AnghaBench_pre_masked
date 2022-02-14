
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_association {unsigned int mapping_array_size; scalar_t__* mapping_array; scalar_t__* nr_mapping_array; int highest_tsn_inside_nr_map; int highest_tsn_inside_map; int cumulative_tsn; int mapping_array_base_tsn; } ;


 int FUNC_0 (char*,...) ;

void
FUNC_1(struct sctp_association *VAR_0)
{
 unsigned int VAR_1, VAR_2;

 FUNC_0("Mapping array size: %d, baseTSN: %8.8x, cumAck: %8.8x, highestTSN: (%8.8x, %8.8x).\n",
     VAR_0->mapping_array_size,
     VAR_0->mapping_array_base_tsn,
     VAR_0->cumulative_tsn,
     VAR_0->highest_tsn_inside_map,
     VAR_0->highest_tsn_inside_nr_map);
 for (VAR_2 = VAR_0->mapping_array_size; VAR_2 > 1; VAR_2--) {
  if (VAR_0->mapping_array[VAR_2 - 1] != 0) {
   break;
  }
 }
 FUNC_0("Renegable mapping array (last %d entries are zero):\n", VAR_0->mapping_array_size - VAR_2);
 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++) {
  FUNC_0("%2.2x%c", VAR_0->mapping_array[VAR_1], ((VAR_1 + 1) % 16) ? ' ' : '\n');
 }
 if (VAR_2 % 16)
  FUNC_0("\n");
 for (VAR_2 = VAR_0->mapping_array_size; VAR_2 > 1; VAR_2--) {
  if (VAR_0->nr_mapping_array[VAR_2 - 1]) {
   break;
  }
 }
 FUNC_0("Non renegable mapping array (last %d entries are zero):\n", VAR_0->mapping_array_size - VAR_2);
 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++) {
  FUNC_0("%2.2x%c", VAR_0->nr_mapping_array[VAR_1], ((VAR_1 + 1) % 16) ? ' ' : '\n');
 }
 if (VAR_2 % 16)
  FUNC_0("\n");
}
