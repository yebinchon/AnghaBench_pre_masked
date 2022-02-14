
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfi1_eprom_table_entry {scalar_t__ type; int size; int offset; } ;
struct hfi1_eprom_footer {scalar_t__ version; int oprom_size; int num_table_entries; } ;
struct hfi1_devdata {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (struct hfi1_devdata*,char*,int,...) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (struct hfi1_devdata*,int,int,void*) ;

__attribute__((used)) static int FUNC_6(struct hfi1_devdata *VAR_8,
     void *VAR_9, void **VAR_10, u32 *VAR_11)
{
 struct hfi1_eprom_footer *VAR_12;
 struct hfi1_eprom_table_entry *VAR_13;
 struct hfi1_eprom_table_entry *VAR_14;
 void *VAR_15 = ((void*)0);
 void *VAR_16 = ((void*)0);
 int VAR_17, VAR_18;
 u32 VAR_19;
 u32 VAR_20, VAR_21;
 u32 VAR_22, VAR_23, VAR_24;


 VAR_12 = (struct hfi1_eprom_footer *)
   (VAR_9 + VAR_3 - sizeof(*VAR_12));


 if (VAR_12->version != VAR_4)
  return -VAR_0;


 if (VAR_12->oprom_size >= VAR_7)
  return -VAR_0;


 if (VAR_12->num_table_entries >
   FUNC_1(VAR_7 - VAR_12->oprom_size))
  return -VAR_0;


 VAR_19 = FUNC_0(VAR_12->num_table_entries);
 if (VAR_19 <= VAR_3) {

  VAR_13 = (struct hfi1_eprom_table_entry *)
    (VAR_9 + VAR_3 - VAR_19);
 } else {

  VAR_16 = FUNC_4(VAR_19, VAR_5);
  if (!VAR_16)
   return -VAR_2;
  VAR_17 = FUNC_5(VAR_8, VAR_7 - VAR_19,
      VAR_19, VAR_16);
  if (VAR_17)
   goto done;
  VAR_13 = VAR_16;
 }


 for (VAR_14 = ((void*)0), VAR_18 = 0; VAR_18 < VAR_12->num_table_entries; VAR_18++) {
  if (VAR_13[VAR_18].type == VAR_6) {
   VAR_14 = &VAR_13[VAR_18];
   break;
  }
 }
 if (!VAR_14) {
  VAR_17 = -VAR_1;
  goto done;
 }





 if (VAR_14->size > (4 * 1024)) {
  FUNC_2(VAR_8, "Bad configuration file size 0x%x\n",
      VAR_14->size);
  VAR_17 = -VAR_0;
  goto done;
 }


 if (VAR_14->offset + VAR_14->size < VAR_14->offset) {
  FUNC_2(VAR_8,
      "Bad configuration file start + size 0x%x+0x%x\n",
      VAR_14->offset, VAR_14->size);
  VAR_17 = -VAR_0;
  goto done;
 }


 VAR_15 = FUNC_4(VAR_14->size, VAR_5);
 if (!VAR_15) {
  VAR_17 = -VAR_2;
  goto done;
 }




 VAR_21 = VAR_14->offset % VAR_7;
 VAR_20 = VAR_14->offset - VAR_21;
 VAR_23 = 0;
 while (VAR_23 < VAR_14->size) {



  VAR_22 = VAR_7 - VAR_21;

  if (VAR_20 == 0) {




   if (VAR_22 <= VAR_19) {
    FUNC_2(VAR_8,
        "Bad configuration file - offset 0x%x within footer+table\n",
        VAR_14->offset);
    VAR_17 = -VAR_0;
    goto done;
   }
   VAR_22 -= VAR_19;
  }


  VAR_24 = VAR_14->size - VAR_23;


  if (VAR_24 > VAR_22)
   VAR_24 = VAR_22;
  VAR_17 = FUNC_5(VAR_8, VAR_20 + VAR_21, VAR_24,
      VAR_15 + VAR_23);
  if (VAR_17)
   goto done;

  VAR_23 += VAR_24;


  VAR_21 = VAR_12->oprom_size;
  VAR_20 += VAR_7;
 }


 VAR_17 = 0;
 *VAR_10 = VAR_15;
 *VAR_11 = VAR_14->size;

done:
 FUNC_3(VAR_16);
 if (VAR_17)
  FUNC_3(VAR_15);
 return VAR_17;
}
