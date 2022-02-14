
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct sctp_association {int cumulative_tsn; int mapping_array_base_tsn; int highest_tsn_inside_map; int mapping_array_size; int* nr_mapping_array; int* mapping_array; int highest_tsn_inside_nr_map; } ;
struct sctp_tcb {struct sctp_association asoc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int,int,int,int ) ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_7 (struct sctp_association*) ;

void
FUNC_8(struct sctp_tcb *VAR_7)
{
 struct sctp_association *VAR_8;
 int VAR_9;
 uint8_t VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 uint32_t VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_8 = &VAR_7->asoc;

 VAR_15 = VAR_8->cumulative_tsn;
 VAR_16 = VAR_8->mapping_array_base_tsn;
 VAR_17 = VAR_8->highest_tsn_inside_map;




 VAR_9 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_7->asoc.mapping_array_size; VAR_11++) {
  VAR_10 = VAR_8->nr_mapping_array[VAR_11] | VAR_8->mapping_array[VAR_11];
  if (VAR_10 == 0xff) {
   VAR_9 += 8;
  } else {

   VAR_9 += VAR_6[VAR_10];
   break;
  }
 }
 VAR_8->cumulative_tsn = VAR_8->mapping_array_base_tsn + (VAR_9 - 1);

 if (FUNC_3(VAR_8->cumulative_tsn, VAR_8->highest_tsn_inside_map) &&
     FUNC_3(VAR_8->cumulative_tsn, VAR_8->highest_tsn_inside_nr_map)) {




  FUNC_2("huh, cumack 0x%x greater than high-tsn 0x%x in map - should panic?\n",
      VAR_8->cumulative_tsn, VAR_8->highest_tsn_inside_map);
  FUNC_7(VAR_8);
  if (FUNC_0(VAR_5) & VAR_0) {
   FUNC_6(0, 6, VAR_8->highest_tsn_inside_map, VAR_4);
  }
  VAR_8->highest_tsn_inside_map = VAR_8->cumulative_tsn;
  VAR_8->highest_tsn_inside_nr_map = VAR_8->cumulative_tsn;

 }
 if (FUNC_3(VAR_8->highest_tsn_inside_nr_map, VAR_8->highest_tsn_inside_map)) {
  VAR_18 = VAR_8->highest_tsn_inside_nr_map;
 } else {
  VAR_18 = VAR_8->highest_tsn_inside_map;
 }
 if ((VAR_8->cumulative_tsn == VAR_18) && (VAR_9 >= 8)) {


  int VAR_19;





  VAR_19 = ((VAR_9 + 7) >> 3);
  if (VAR_19 > VAR_8->mapping_array_size) {
   VAR_19 = VAR_8->mapping_array_size;
  }
  FUNC_4(VAR_8->mapping_array, 0, VAR_19);
  FUNC_4(VAR_8->nr_mapping_array, 0, VAR_19);
  VAR_8->mapping_array_base_tsn = VAR_8->cumulative_tsn + 1;
  VAR_8->highest_tsn_inside_nr_map = VAR_8->highest_tsn_inside_map = VAR_8->cumulative_tsn;
 } else if (VAR_9 >= 8) {







  FUNC_1(VAR_13, VAR_18, VAR_8->mapping_array_base_tsn);
  VAR_12 = (VAR_13 >> 3);
  if (VAR_12 < VAR_11) {
   FUNC_7(VAR_8);



   FUNC_2("impossible slide lgap: %x slide_end: %x slide_from: %x? at: %d\n",
       VAR_13, VAR_12, VAR_11, VAR_9);
   return;

  }
  if (VAR_12 > VAR_8->mapping_array_size) {



   FUNC_2("Gak, would have overrun map end: %d slide_end: %d\n",
       VAR_8->mapping_array_size, VAR_12);
   VAR_12 = VAR_8->mapping_array_size;

  }
  VAR_14 = (VAR_12 - VAR_11) + 1;
  if (FUNC_0(VAR_5) & VAR_0) {
   FUNC_6(VAR_16, VAR_15, VAR_17,
       VAR_1);
   FUNC_6((uint32_t)VAR_11, (uint32_t)VAR_12,
       (uint32_t)VAR_13, VAR_2);
  }
  if (VAR_14 + VAR_11 > VAR_8->mapping_array_size ||
      VAR_14 < 0) {







   if (FUNC_0(VAR_5) & VAR_0) {
    FUNC_6((uint32_t)VAR_14, (uint32_t)VAR_11,
        (uint32_t)VAR_8->mapping_array_size,
        VAR_3);
   }
  } else {
   int VAR_20;

   for (VAR_20 = 0; VAR_20 < VAR_14; VAR_20++) {
    VAR_8->mapping_array[VAR_20] = VAR_8->mapping_array[VAR_11 + VAR_20];
    VAR_8->nr_mapping_array[VAR_20] = VAR_8->nr_mapping_array[VAR_11 + VAR_20];

   }
   for (VAR_20 = VAR_14; VAR_20 < VAR_8->mapping_array_size; VAR_20++) {
    VAR_8->mapping_array[VAR_20] = 0;
    VAR_8->nr_mapping_array[VAR_20] = 0;
   }
   if (VAR_8->highest_tsn_inside_map + 1 == VAR_8->mapping_array_base_tsn) {
    VAR_8->highest_tsn_inside_map += (VAR_11 << 3);
   }
   if (VAR_8->highest_tsn_inside_nr_map + 1 == VAR_8->mapping_array_base_tsn) {
    VAR_8->highest_tsn_inside_nr_map += (VAR_11 << 3);
   }
   VAR_8->mapping_array_base_tsn += (VAR_11 << 3);
   if (FUNC_0(VAR_5) & VAR_0) {
    FUNC_6(VAR_8->mapping_array_base_tsn,
        VAR_8->cumulative_tsn, VAR_8->highest_tsn_inside_map,
        VAR_4);
   }
  }
 }
}
