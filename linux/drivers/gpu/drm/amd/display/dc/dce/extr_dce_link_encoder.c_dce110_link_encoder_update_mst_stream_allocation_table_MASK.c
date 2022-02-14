
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct link_mst_stream_allocation_table {int stream_count; int * stream_allocations; } ;
struct link_encoder {int dummy; } ;
struct dce110_link_encoder {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,scalar_t__,int ,scalar_t__) ;
 struct dce110_link_encoder* FUNC_4 (struct link_encoder*) ;
 int FUNC_5 (int *,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (int) ;

void FUNC_7(
 struct link_encoder *VAR_13,
 const struct link_mst_stream_allocation_table *VAR_14)
{
 struct dce110_link_encoder *VAR_15 = FUNC_4(VAR_13);
 uint32_t VAR_16 = 0;
 uint32_t VAR_17 = 0;
 uint32_t VAR_18 = 0;
 uint32_t VAR_19 = 0;
 uint32_t VAR_20 = 0;
 uint32_t VAR_21 = 0;
 if (VAR_14->stream_count >= 1) {
  FUNC_5(
   &VAR_14->stream_allocations[0],
   &VAR_20,
   &VAR_19);
 } else {
  VAR_20 = 0;
  VAR_19 = 0;
 }

 FUNC_3(VAR_1,
   VAR_7, VAR_20,
   VAR_3, VAR_19);

 if (VAR_14->stream_count >= 2) {
  FUNC_5(
   &VAR_14->stream_allocations[1],
   &VAR_20,
   &VAR_19);
 } else {
  VAR_20 = 0;
  VAR_19 = 0;
 }

 FUNC_3(VAR_1,
   VAR_8, VAR_20,
   VAR_4, VAR_19);

 if (VAR_14->stream_count >= 3) {
  FUNC_5(
   &VAR_14->stream_allocations[2],
   &VAR_20,
   &VAR_19);
 } else {
  VAR_20 = 0;
  VAR_19 = 0;
 }

 FUNC_3(VAR_2,
   VAR_9, VAR_20,
   VAR_5, VAR_19);

 if (VAR_14->stream_count >= 4) {
  FUNC_5(
   &VAR_14->stream_allocations[3],
   &VAR_20,
   &VAR_19);
 } else {
  VAR_20 = 0;
  VAR_19 = 0;
 }

 FUNC_3(VAR_2,
   VAR_10, VAR_20,
   VAR_6, VAR_19);
 FUNC_2(VAR_11,
   VAR_11, 1);
 do {
  FUNC_6(10);

  VAR_16 = FUNC_1(VAR_11);

  FUNC_0(VAR_11,
    VAR_11, &VAR_17);

  FUNC_0(VAR_11,
    VAR_0, &VAR_18);


  if (!VAR_17 && !VAR_18)
   break;
  ++VAR_21;
 } while (VAR_21 < VAR_12);
}
